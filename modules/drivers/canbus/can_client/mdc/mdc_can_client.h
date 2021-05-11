#ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_MDC_MDC_CAN_CLIENT_H_
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_MDC_MDC_CAN_CLIENT_H_

#include <sstream>
#include <string>
#include <vector>

#include "modules/common/proto/error_code.pb.h"
#include "modules/drivers/canbus/can_client/can_client.h"

#include "mdc/sensor/canrxserviceinterface_common.h"
#include "mdc/sensor/canrxserviceinterface_proxy.h"
#include "mdc/sensor/cantxserviceinterface_common.h"
#include "mdc/sensor/cantxserviceinterface_skeleton.h"

#include "impl_type_canbusdataparam.h"
#include "impl_type_cansetdataresult.h"

/**
 * @namespace jmc_auto::drivers::canbus::can
 * @brief jmc_auto::drivers::canbus::can
 */
namespace jmc_auto {
namespace drivers {
namespace canbus {
namespace can {

class MdcCanClient : public CanClient {
  public:
    using CanRxProxy = mdc::sensor::proxy::CanRxServiceInterfaceProxy;
    using CanTxSkeleton = mdc::sensor::skeleton::CanTxServiceInterfaceSkeleton;
    /// Interval of sleeping

    static const unsigned int CAN_NUM = 12;
    static const int CAN_VALIDLEN = 8;

    bool Init(const CANCardParameter &parameter) override;

    virtual ~MdcCanClient() = default;

    jmc_auto::common::ErrorCode Start() override;

    void Stop() override;

    /**
     * @brief Send messages
     * @param frames The messages to send.
     * @param frame_num The amount of messages to send.
     * @return The status of the sending action which is defined by
     *         jmc_auto::common::ErrorCode.
     */
    jmc_auto::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                     int32_t *const frame_num) override;

    /**
     * @brief Receive messages
     * @param frames The messages to receive.
     * @param frame_num The amount of messages to receive.
     * @return The status of the receiving action which is defined by
     *         jmc_auto::common::ErrorCode.
     */
    jmc_auto::common::ErrorCode Receive(std::vector<CanFrame> *frames,
                                        int32_t *const frame_num) override;

    /**
     * @brief Get the error string.
     * @param status The status to get the error string.
     */
    std::string GetErrorString(const int32_t status) override;

  private:
    //CanFrame cf;
    std::vector<CanFrame> cfs;
    std::stringstream frame_info_;

    // canbus_config.json中的ChannelId
    int m_channelId;
    // instance ID
    int m_instance;

    std::mutex m_canReadMutex;
    std::unique_ptr<CanRxProxy> m_proxy[CAN_NUM];
    std::mutex m_canSendMutex;
    std::unique_ptr<CanTxSkeleton> m_skeleton[CAN_NUM];
    std::unique_ptr<std::thread> m_canMethodThread[CAN_NUM];
    void ServiceAvailabilityCallback(
        ara::com::ServiceHandleContainer<CanRxProxy::HandleType> handles,
        ara::com::FindServiceHandle handler);
    void CanDataEventCallback(unsigned char channelID);
};

} // namespace can
} // namespace canbus
} // namespace drivers
} // namespace jmc_auto

#endif // MODULES_DRIVERS_CANBUS_CAN_CLIENT_MDC_MDC_CAN_CLIENT_H_
