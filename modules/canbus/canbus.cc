/******************************************************************************
 * Copyright 2017 The JmcAuto Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/canbus/canbus.h"

#include "modules/canbus/common/canbus_gflags.h"
//#include "modules/canbus/vehicle/vehicle_factory.h"
#include "modules/common/adapters/adapter_manager.h"
//#include "modules/common/adapters/proto/adapter_config.pb.h"
#include "impl_type_adaptermanagerconfig.h"
#include "modules/common/time/jmcauto_time.h"
#include "modules/common/util/util.h"
//#include "modules/drivers/canbus/can_client/can_client_factory.h"

namespace jmc_auto
{
  namespace canbus
  {

    using jmc_auto::common::Status;
    using jmc_auto::common::adapter::AdapterManager;
    using jmc_auto::common::time::Clock;

    //using jmc_auto::drivers::canbus::CanClientFactory;
    // using jmc_auto::guardian::GuardianCommand;

    std::string Canbus::Name() const { return FLAGS_canbus_module_name; }

    Status Canbus::Init()
    {
      AdapterManager::Init(FLAGS_canbus_adapter_config_filename);
      AINFO << "The adapter manager is successfully initialized.";

      // load conf
      //if (!common::util::GetProtoFromFile(FLAGS_canbus_conf_file, &canbus_conf_))
      //{
      //  return Status(ErrorCode::CANBUS_ERROR, "Unable to load canbus conf file: " +
      //                 FLAGS_canbus_conf_file);
      //}

      //AINFO << "The canbus conf file is loaded: " << FLAGS_canbus_conf_file;
      //ADEBUG << "Canbus_conf:" << canbus_conf_.ShortDebugString();
      m_channelId = 5;
      m_instance = m_channelId + 1;
      // 提供服务
      m_skeleton[channelId] = std::make_unique<CanTxSkeleton>(ara::com::InstanceIdentifier(m_instance),
                                                              ara::com::MethodCallProcessingMode::kPoll);
      m_skeleton[channelId]->OfferService();

      // 注册服务发现的回调函数，，当发现服务的时候，会回调该函数
      CanRxProxy::StartFindService(
          [this](ara::com::ServiceHandleContainer<CanRxProxy::HandleType> handles, ara::com::FindServiceHandle handler) {
            McuApInterface::ServiceAvailabilityCallbackcanData(std::move(handles), handler);
          },
          m_instance);
      return Status::OK();
    }

    void Canbus::ServiceAvailabilityCallbackcanData(ara::com::ServiceHandleContainer<CanRxProxy::HandleType> handles,
                                             ara::com::FindServiceHandle handler)
    {
      if (handles.size() > 0)
      {
        for (unsigned int i = 0; i < handles.size(); i++)
        {
          int instanceId = static_cast<uint16_t>(handles[i].GetInstanceId());
          int channelID = m_channelId;
          if (instanceId != m_instance)
          {
            continue;
          }
          if (m_proxy[channelID] == nullptr)
          {
            // 注册接收MCU上传CAN帧的回调函数
            m_proxy[channelID] = std::make_unique<CanRxProxy>(handles[i]);
            m_proxy[channelID]->CanDataRxEvent.Subscribe(ara::com::EventCacheUpdatePolicy::kNewestN, BUFFER_DEPTH);
            m_proxy[channelID]->CanDataRxEvent.SetReceiveHandler(
                [this, channelID]() { McuApInterface::CanDataEventCallback(channelID); });
          }
        }
      }
    }
void Canbus::CanDataEventCallback(unsigned char channelID)
{
    if (channelID < 0 || channelID > CAN_NUM) {
        return;
    }

    if (m_proxy[channelID] == nullptr) {
        return;
    }

    // 加锁防止重入
    std::unique_lock<std::mutex> lockread(m_canReadMutex);
    // 接收CAN帧
    m_proxy[channelID]->CanDataRxEvent.Update();
    const auto &canMsgSamples = m_proxy[channelID]->CanDataRxEvent.GetCachedSamples();
    for (const auto &canData : canMsgSamples) {
    for (unsigned int i = 0; i < canData->elementList.size(); i++) {
        printf("canId: %x, canDLC: %u\n", canData.elementList[i].canId, canData.elementList[i].validLen);
        for (unsigned int j = 0; j < CAN_VALIDLEN; j++) {
            printf("%x ", canData.elementList[i].data[j]);
        }
        printf("\n");
    }
    }
    // 解锁
    lockread.unlock();
    m_proxy[channelID]->CanDataRxEvent.Cleanup();
}

    Status Canbus::Start()
    {

      // 5. set timer to triger publish info periodly
      const double duration = 1.0 / FLAGS_chassis_freq;
      //timer_ = AdapterManager::CreateTimer(ros::Duration(duration),
      //                                     &Canbus::OnTimer, this);
      while (1)
      {
        Canbus::PublishChassis();
        sleep(duration);
      }

      return Status::OK();
    }


    void Canbus::PublishChassis()
    {
      Chassis chassis ;
      AdapterManager::FillChassisHeader(FLAGS_canbus_node_name, &chassis);
      AdapterManager::PublishChassis(chassis);

      ADEBUG << chassis.ShortDebugString();
    }

    void Canbus::Stop()
    {
      timer_.stop();
    }

    // void Canbus::OnGuardianCommand(const GuardianCommand &guardian_command) {
    //   jmc_auto::control::ControlCommand control_command;
    //   control_command.CopyFrom(guardian_command.control_command());
    //   OnControlCommand(control_command);
    // }

  } // namespace canbus
} // namespace jmc_auto
