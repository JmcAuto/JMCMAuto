#include "modules/drivers/canbus/can_client/mdc/mdc_can_client.h"

#include <cassert>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <iomanip>
#include <iostream>
#include <stdint.h>
#include <string>
#include <vector>

namespace jmc_auto {
namespace drivers {
namespace canbus {
namespace can {

using jmc_auto::common::ErrorCode;

bool MdcCanClient::Init(const CANCardParameter &parameter) {
    if (!parameter.has_channel_id()) {
        AERROR << "Init CAN failed: parameter does not have channel id. The "
                  "parameter is "
               << parameter.DebugString();
        return false;
    }
    if (parameter.channel_id() < 0 || parameter.channel_id() > CAN_NUM) {
        AERROR << "Init CAN failed: parameter have wrong channel id. The "
                  "parameter is "
               << parameter.DebugString();
        return false;
    }

    m_channelId = parameter.channel_id();
    m_instance = m_channelId + 1;
    AINFO << "channelId: " << m_channelId;
    AINFO << "instanceId: " << m_instance;
    return true;
}

ErrorCode MdcCanClient::Start() {
    if (is_started_) {
        return ErrorCode::OK;
    }
    AINFO << "start 提供服务";
    // 提供服务
    m_skeleton[m_channelId] = std::make_unique<CanTxSkeleton>(
        ara::com::InstanceIdentifier(m_instance),
        ara::com::MethodCallProcessingMode::kPoll);
    m_skeleton[m_channelId]->OfferService();
    AINFO << "start 注册服务发现的回调函数";
    // 注册服务发现的回调函数，，当发现服务的时候，会回调该函数
    CanRxProxy::StartFindService(
        [this](ara::com::ServiceHandleContainer<CanRxProxy::HandleType> handles,
               ara::com::FindServiceHandle handler) {
    		MdcCanClient::ServiceAvailabilityCallback(std::move(handles),
                                                        handler);
        },
        m_instance);
    is_started_ = true;
    return ErrorCode::OK;
}

void MdcCanClient::ServiceAvailabilityCallback(
    ara::com::ServiceHandleContainer<CanRxProxy::HandleType> handles,
    ara::com::FindServiceHandle handler) {
	AINFO << "start 回调函数";
    if (handles.size() > 0) {
        for (unsigned int i = 0; i < handles.size(); i++) {
            int instanceId = static_cast<uint16_t>(handles[i].GetInstanceId());
            int channelID = m_channelId;
            if (instanceId != m_instance) {
                continue;
            }
            if (m_proxy[channelID] == nullptr) {
                // 注册接收MCU上传CAN帧的回调函数
                m_proxy[channelID] = std::make_unique<CanRxProxy>(handles[i]);
                m_proxy[channelID]->CanDataRxEvent.Subscribe(
                    ara::com::EventCacheUpdatePolicy::kNewestN, 40);
                m_proxy[channelID]->CanDataRxEvent.SetReceiveHandler(
                    [this, channelID]() {
                		MdcCanClient::CanDataEventCallback(channelID);
                    });

                // 开启method发送线程
                //m_canMethodThread[channelID] = std::make_unique<std::thread>(
                //    &MdcCanClient::Send, this, channelID);
            }
        }
    }
}

void MdcCanClient::CanDataEventCallback(unsigned char channelID) {
    if (channelID < 0 || channelID > CAN_NUM) {
        AERROR << "channelid error";
    	return;
    }

    if (m_proxy[channelID] == nullptr) {
    	AERROR << "channelid null";
        return;
    }
    AINFO << "start 接收data";
    // 加锁防止重入
    //std::unique_lock<std::mutex> lockread(m_canReadMutex);
    // 接收CAN帧
    m_proxy[channelID]->CanDataRxEvent.Update();
    const auto &canMsgSamples = m_proxy[channelID]->CanDataRxEvent.GetCachedSamples();
    for (const auto &sample : canMsgSamples) {
        // 接收转入CAN帧处理回调函数
        for (unsigned int i = 0; i < sample->elementList.size(); i++) {
            AINFO << "canId: %x, canDLC: %u\n" << sample->elementList[i].canId << sample->elementList[i].validLen;
            for (unsigned int j = 0; j < CAN_VALIDLEN; j++) {
                AINFO << "%x " << sample->elementList[i].data[j];
            }
            printf("\n");
        }
    }
    // 解锁
 //   lockread.unlock();
    m_proxy[channelID]->CanDataRxEvent.Cleanup();
}

void MdcCanClient::Stop() {return;}

ErrorCode MdcCanClient::Send(const std::vector<CanFrame> &frames,
                             int32_t *const frame_num) {

    if (m_proxy[m_channelId] == nullptr) {
        return ErrorCode::CAN_CLIENT_ERROR_BASE;
    }

    CanBusDataParam canSendDataParm;
    canSendDataParm.elementList.resize(*frame_num);
    for (int i = 0; i < *frame_num; i++) {
        struct Element canRawdata;

        canRawdata.timeStamp.second = frames[i].timestamp.tv_sec;
        canRawdata.timeStamp.nsecond = frames[i].timestamp.tv_usec;

        // 下发的CAN帧，需要在canbus_config.json中配置，比如CanId、DataLength
        // 可参照canbus_config_ars408.json中 ChannelId 1 进行配置
        canRawdata.canId = frames[i].id;
        canRawdata.validLen = frames[i].len;
        canSendDataParm.elementList[i].data.resize(canRawdata.validLen);

        for (int j = 0; j < CAN_VALIDLEN; i++) {
            canRawdata.data.push_back(frames[i].data[j]);
        }
        canSendDataParm.elementList[i] = canRawdata;
    }
    canSendDataParm.seq = 1;

    // Method发送
    auto handle = m_proxy[m_channelId]->CanDataSetMethod(canSendDataParm);

    return ErrorCode::OK;
}

ErrorCode MdcCanClient::Receive(std::vector<CanFrame> *const frames,
                                int32_t *const frame_num) {
    if (frame_num == nullptr || frames == nullptr) {
        //AERROR << "frames or frame_num pointer is null";
        return ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
    frames->resize(*frame_num);
    //for (size_t i = 0; i < frames->size(); ++i) {
    	//CanFrame cf;
    	//cf.id = (*canRevDataParm).elementList[i].canId;
    	//cf.len = (*canRevDataParm).elementList[i].validLen;
    	//for (int j = 0; j < CAN_VALIDLEN; ++j) {
    	//	cf.data[j] = (*canRevDataParm).elementList[i].data[j];
    	//}
    	//frames->push_back(cf);}
    return ErrorCode::OK;
}

std::string MdcCanClient::GetErrorString(const int32_t /*status*/) {
    return "";
}

} // namespace can
} // namespace canbus
} // namespace drivers
} // namespace jmc_auto
