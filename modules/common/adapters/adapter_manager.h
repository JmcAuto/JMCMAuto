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

/**
 * @file
 */

#ifndef MODULES_ADAPTERS_ADAPTER_MANAGER_H_
#define MODULES_ADAPTERS_ADAPTER_MANAGER_H_

#include <functional>
#include <memory>
#include <string>
#include <type_traits>
#include <vector>
#include <iostream>

#include "modules/common/adapters/adapter.h"
#include "modules/common/adapters/message_adapters.h"
#include "modules/common/adapters/proto/adapter_config.pb.h"
#include "modules/common/log.h"
#include "modules/common/macro.h"
#include "modules/common/util/PbConvertor.h"

//#include "modules/common/transform_listener/transform_listener.h"

/**
 * @namespace jmc_auto::common::adapter
 * @brief jmc_auto::common::adapter
 */
namespace jmc_auto {
namespace common {
namespace adapter {

/// Macro to prepare all the necessary adapter functions when adding a
/// new input/output. For example when you want to listen to
/// car_status message for your module, you can do
/// REGISTER_ADAPTER(CarStatus) write an adapter class called
/// CarStatusAdapter, and call EnableCarStatus(`car_status_topic`,
/// true, `callback`(if there's one)) in AdapterManager.
#define REGISTER_ADAPTER(name)                                                 \
  public:                                                                      \
    static void Enable##name(const unsigned int &instance_id,                  \
                             const AdapterConfig &config) {                    \
        CHECK(config.message_history_limit() > 0)                              \
            << "Message history limit must be greater than 0";                 \
        instance()->InternalEnable##name(instance_id, config);                 \
    }                                                                          \
    static name##Adapter *Get##name() {                                        \
        return instance()->InternalGet##name();                                \
    }                                                                          \
    static AdapterConfig &Get##name##Config() {                                \
        return instance()->name##config_;                                      \
    }                                                                          \
    static void Publish##name(const name##Adapter::DataType &pbdata) {         \
        instance()->InternalPublish##name(pbdata);                             \
    }                                                                          \
    template <typename T>                                                      \
    static void Fill##name##Header(T *data) {  \
        static_assert(std::is_same<name##Adapter::DataType, T>::value,         \
                      "Data type must be the same with adapter's type!");      \
        instance()->name##_->FillHeader(data);                    \
    }                                                                          \
    static void Add##name##Callback(name##Adapter::Callback callback) {        \
        CHECK(instance()->name##_)                                             \
            << "Initialize adapter before setting callback";                   \
        instance()->name##_->AddCallback(callback);                            \
    }                                                                          \
    template <class T>                                                         \
    static void Add##name##Callback(                                           \
        void (T::*fp)(const name##Adapter::DataType &data), T *obj) {          \
        Add##name##Callback(std::bind(fp, obj, std::placeholders::_1));        \
    }                                                                          \
    template <class T>                                                         \
    static void Add##name##Callback(                                           \
        void (T::*fp)(const name##Adapter::DataType &data)) {                  \
        Add##name##Callback(fp);                                               \
    }                                                                          \
    /* Returns false if there's no callback to pop out, true otherwise. */     \
    static bool Pop##name##Callback() {                                        \
        return instance()->name##_->PopCallback();                             \
    }                                                                          \
                                                                               \
  private:                                                                     \
    std::unique_ptr<name##Adapter> name##_;                                    \
    unsigned int name##_msg_limit = 10;                                        \
    std::unique_ptr<jmc_auto::skeleton::name##ServiceInterfaceSkeleton>        \
        name##skeleton = nullptr;                                              \
    std::unique_ptr<jmc_auto::proxy::name##ServiceInterfaceProxy>              \
        name##proxy = nullptr;                                                 \
    std::unique_ptr<std::thread> name##thread;                                 \
    AdapterConfig name##config_;                                               \
    void InternalEnable##name(const unsigned int &instance_id,                 \
                              const AdapterConfig &config) {                   \
    	name##_msg_limit = config.message_history_limit();                     \
    	name##_.reset(new name##Adapter(#name, instance_id,                    \
                                        config.message_history_limit()));      \
        if (config.mode() != AdapterConfig::PUBLISH_ONLY) {                    \
            jmc_auto::proxy::name##ServiceInterfaceProxy::StartFindService(    \
                [this](ara::com::ServiceHandleContainer<                       \
                           jmc_auto::proxy::name##ServiceInterfaceProxy::      \
                               HandleType>                                     \
                           handles,                                            \
                       ara::com::FindServiceHandle handler) {                  \
                    instance()->ServiceAvailabilityCallback##name(             \
                        std::move(handles), handler);                          \
                },                                                             \
                instance_id);                                                  \
        }                                                                      \
        if (config.mode() != AdapterConfig::RECEIVE_ONLY) {                    \
            name##skeleton = std::make_unique<                                 \
                jmc_auto::skeleton::name##ServiceInterfaceSkeleton>(           \
                ara::com::InstanceIdentifier(instance_id),                     \
                ara::com::MethodCallProcessingMode::kPoll);                    \
            name##skeleton->OfferService();                                    \
        }                                                                      \
		observers_.push_back([this]() {name##_->Observe();});                  \
        name##config_ = config;                                                \
    }                                                                          \
    void ServiceAvailabilityCallback##name(                                    \
        ara::com::ServiceHandleContainer<                                      \
            jmc_auto::proxy::name##ServiceInterfaceProxy::HandleType>          \
            handles,                                                           \
        ara::com::FindServiceHandle handler) {                                 \
        if (handles.size() > 0) {                                              \
            for (unsigned int i = 0; i < handles.size(); i++) {                \
                if (name##proxy == nullptr) {                                  \
                    name##proxy = std::make_unique<                            \
                        jmc_auto::proxy::name##ServiceInterfaceProxy>(         \
                        handles[i]);                                           \
                    name##proxy->name##Event.Subscribe(                        \
                        ara::com::EventCacheUpdatePolicy::kNewestN,            \
                        name##_msg_limit);                                     \
                    name##proxy->name##Event.SetReceiveHandler([this]() {      \
                        instance()->name##PublishEventCallback();              \
                    });                                                        \
                }                                                              \
            }                                                                  \
        }                                                                      \
    }                                                                          \
    void name##PublishEventCallback() {                                        \
        const name* strData;                                                   \
        name##Adapter::DataType pbData;                                        \
        if (name##proxy == nullptr) {                                          \
            return;                                                            \
        }                                                                      \
        name##proxy->name##Event.Update();                                     \
        const auto &name##MsgSamples =                                         \
            name##proxy->name##Event.GetCachedSamples();                       \
        for (const auto &testdata : name##MsgSamples) {                        \
            strData = testdata.get();                                          \
            std::cout << "------start to struct2pb------" << std::endl;    \
            jmc_auto::common::util::PbConvertor::struct2Pb(                    \
                (const char *&)strData, &pbData);                              \
            name##_->OnReceive(pbData);                                        \
        }                                                                      \
		name##proxy->name##Event.Cleanup();                                    \
    }                                                                          \
    name##Adapter *InternalGet##name() { return name##_.get(); }               \
    void InternalPublish##name(const name##Adapter::DataType &pbdata) {        \
        jmc_auto::common::util::PbConvertor::MemTree stru;                     \
        std::cout << "======start to pb2struct======" << std::endl;        \
        jmc_auto::common::util::PbConvertor::pb2struct(&pbdata, stru);         \
        name *data = (name *)stru.pMem;                                        \
        if (name##skeleton == nullptr) {                                       \
            return;                                                            \
        }                                                                      \
        name##skeleton->name##Event.Send(*data);                               \
        name##_->SetLatestPublished(pbdata);                                   \
        stru.release();                                                        \
    }

/**
 * @class AdapterManager
 *
 * @brief this class hosts all the specific adapters and manages them.
 * It provides APIs for the users to initialize, access and interact
 * with the adapters that they are interested in.
 *
 * \par
 * Each (potentially) useful adapter needs to be registered here with
 * the macro REGISTER_ADAPTER.
 *
 * \par
 * The AdapterManager is a singleton.
 */
class AdapterManager {
  public:
    /**
     * @brief Initialize the \class AdapterManager singleton with the
     * provided configuration. The configuration is specified by the
     * file path.
     * @param adapter_config_filename the path to the proto file that
     * contains the adapter manager configuration.
     */
    static void Init(const std::string &adapter_config_filename);

    /**
     * @brief Initialize the \class AdapterManager singleton with the
     * provided configuration.
     * @param configs the adapter manager configuration proto.
     */
    static void Init(const AdapterManagerConfig &configs);

    /**
     * @brief Resets the \class AdapterManager so that it could be
     * re-initiailized.
     */
    static void Reset();

    /**
     * @brief check if the AdapterManager is initialized
     */
    static bool Initialized();

    static void Observe();

    /**
     * @brief Returns whether AdapterManager is running ROS mode.
     */
    // static bool IsRos() { return instance()->node_handle_ != nullptr; }

    /**
     * @brief Returns a reference to static tf2 buffer.
     */
    // static tf2_ros::Buffer &Tf2Buffer() {
    //    static tf2_ros::Buffer tf2_buffer;
    //    static TransformListener tf2Listener(&tf2_buffer,
    //                                         instance()->node_handle_.get());
    //    return tf2_buffer;
    //}

    /**
     * @brief create a timer which will call a callback at the specified
     * rate. It takes a class member function, and a bare pointer to the
     * object to call the method on.
     */

    /*
          template <class T>
          static ros::Timer CreateTimer(ros::Duration period,
                                        void (T::*callback)(const
       ros::TimerEvent &), T *obj, bool oneshot = false, bool autostart = true)
          {
            if (IsRos())
            {
              return instance()->node_handle_->createTimer(period, callback,
       obj, oneshot, autostart);
            }
            else
            {
              AWARN << "ROS timer is only available in ROS mode, check your
       adapter " "config file! Return a dummy timer that won't function.";
              return ros::Timer();
            }
          }
    */

  private:
    /// The node handler of ROS, owned by the \class AdapterManager
    /// singleton.
    // std::unique_ptr<ros::NodeHandle> node_handle_;

    /// Observe() callbacks that will be used to to call the Observe()
    /// of enabled adapters.
    std::vector<std::function<void()>> observers_;

    bool initialized_ = false;

    /// The following code registered all the adapters of interest.
    REGISTER_ADAPTER(Chassis);
    // REGISTER_ADAPTER(ChassisDetail);
    REGISTER_ADAPTER(Localization);
    REGISTER_ADAPTER(ControlCommand);
    /*
    REGISTER_ADAPTER(Gps);
    REGISTER_ADAPTER(Imu);
    REGISTER_ADAPTER(RawImu);
    REGISTER_ADAPTER(Monitor);
    REGISTER_ADAPTER(Pad);
    REGISTER_ADAPTER(PerceptionObstacles);
    REGISTER_ADAPTER(Planning);
    REGISTER_ADAPTER(PointCloud);

    REGISTER_ADAPTER(VelodyneRaw0);
    REGISTER_ADAPTER(PointCloudRaw0);
    REGISTER_ADAPTER(PointCloudFusion);

    REGISTER_ADAPTER(VLP16PointCloud);
    REGISTER_ADAPTER(ImageFront);
    REGISTER_ADAPTER(ImageShort);
    REGISTER_ADAPTER(ImageLong);
    REGISTER_ADAPTER(Prediction);
    REGISTER_ADAPTER(TrafficLightDetection);
    REGISTER_ADAPTER(RoutingRequest);
    REGISTER_ADAPTER(RoutingResponse);
    REGISTER_ADAPTER(RelativeOdometry);
    REGISTER_ADAPTER(InsStat);
    REGISTER_ADAPTER(InsStatus);
    REGISTER_ADAPTER(GnssStatus);
    REGISTER_ADAPTER(SystemStatus);
    REGISTER_ADAPTER(StaticInfo);
    REGISTER_ADAPTER(Mobileye);
    REGISTER_ADAPTER(DelphiESR);
    REGISTER_ADAPTER(ContiRadar);
    // REGISTER_ADAPTER(RacobitRadar);
    // REGISTER_ADAPTER(Ultrasonic);
    REGISTER_ADAPTER(CompressedImage);
    REGISTER_ADAPTER(GnssRtkObs);
    REGISTER_ADAPTER(GnssRtkEph);
    REGISTER_ADAPTER(GnssBestPose);
    REGISTER_ADAPTER(LocalizationMsfGnss);
    REGISTER_ADAPTER(LocalizationMsfLidar);
    REGISTER_ADAPTER(LocalizationMsfSinsPva);
    REGISTER_ADAPTER(LocalizationMsfStatus);
    REGISTER_ADAPTER(DriveEvent);
    REGISTER_ADAPTER(RelativeMap);
    REGISTER_ADAPTER(Navigation);
    REGISTER_ADAPTER(VoiceDetectionRequest);
    REGISTER_ADAPTER(VoiceDetectionResponse);
    // for pandora
    REGISTER_ADAPTER(PandoraPointCloud);
    REGISTER_ADAPTER(PandoraCameraFrontColor);
    REGISTER_ADAPTER(PandoraCameraRightGray);
    REGISTER_ADAPTER(PandoraCameraLeftGray);
    REGISTER_ADAPTER(PandoraCameraFrontGray);
    REGISTER_ADAPTER(PandoraCameraBackGray);
    // for lane mask
    REGISTER_ADAPTER(PerceptionLaneMask)

    REGISTER_ADAPTER(Guardian)
    REGISTER_ADAPTER(GnssRawData);
    REGISTER_ADAPTER(StreamStatus);
    REGISTER_ADAPTER(GnssHeading);
    REGISTER_ADAPTER(RtcmData);

    //for remotecontrol
    REGISTER_ADAPTER(RemoteControl);

    REGISTER_ADAPTER(Localizationdy);
    */
    DECLARE_SINGLETON(AdapterManager);
};

} // namespace adapter
} // namespace common
} // namespace jmc_auto

#endif
