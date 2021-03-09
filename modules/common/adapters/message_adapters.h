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

#ifndef MODULES_ADAPTERS_MESSAGE_ADAPTERS_H_
#define MODULES_ADAPTERS_MESSAGE_ADAPTERS_H_

//#include "impl_type_chassisdetail.h"
#include "modules/canbus/proto/chassis.pb.h"
#include "modules/canbus/proto/chassis_detail.pb.h"
#include "modules/control/proto/control_cmd.pb.h"
#include "modules/control/proto/pad_msg.pb.h"

#include "modules/common/adapters/adapter.h"

#include "impl_type_chassis.h"
#include "impl_type_controlcommand.h"

#include "jmc_auto/chassisserviceinterface_common.h"
#include "jmc_auto/chassisserviceinterface_skeleton.h"
#include "jmc_auto/chassisserviceinterface_proxy.h"
#include "jmc_auto/controlcommandserviceinterface_common.h"
#include "jmc_auto/controlcommandserviceinterface_skeleton.h"
#include "jmc_auto/controlcommandserviceinterface_proxy.h"

/**
 * @file message_adapters.h
 * @namespace jmc_auto::common::adapter
 * @brief This is an agglomeration of all the message adapters supported that
 * specializes the adapter template.
 */
namespace jmc_auto {
namespace common {
namespace adapter {

using ChassisAdapter = Adapter<::jmc_auto::canbus::Chassis>;
using ChassisDetailAdapter = Adapter<::jmc_auto::canbus::ChassisDetail>;
using ControlCommandAdapter = Adapter<::jmc_auto::control::ControlCommand>;
/*
using GpsAdapter = Adapter<jmc_auto::localization::Gps>;
using ImuAdapter = Adapter<localization::CorrectedImu>;
using RawImuAdapter = Adapter<jmc_auto::drivers::gnss::Imu>;
using LocalizationAdapter = Adapter<jmc_auto::localization::LocalizationEstimate>;
using MonitorAdapter = Adapter<jmc_auto::common::monitor::MonitorMessage>;
using PadAdapter = Adapter<control::PadMessage>;
using PerceptionObstaclesAdapter = Adapter<perception::PerceptionObstacles>;
using PlanningAdapter = Adapter<planning::ADCTrajectory>;
using PointCloudAdapter = Adapter<::sensor_msgs::PointCloud2>;
using VLP16PointCloudAdapter = Adapter<::sensor_msgs::PointCloud2>;
using ImageFrontAdapter = Adapter<::sensor_msgs::Image>;
using ImageShortAdapter = Adapter<::sensor_msgs::Image>;
using ImageLongAdapter = Adapter<::sensor_msgs::Image>;
using PredictionAdapter = Adapter<prediction::PredictionObstacles>;
using DriveEventAdapter = Adapter<DriveEvent>;
using TrafficLightDetectionAdapter = Adapter<perception::TrafficLightDetection>;
using PerceptionLaneMaskAdapter = Adapter<::sensor_msgs::Image>;
using RoutingRequestAdapter = Adapter<routing::RoutingRequest>;
using RoutingResponseAdapter = Adapter<routing::RoutingResponse>;
using RelativeOdometryAdapter =
    Adapter<calibration::republish_msg::RelativeOdometry>;
using InsStatAdapter = Adapter<drivers::gnss::InsStat>;
using InsStatusAdapter = Adapter<drivers::gnss_status::InsStatus>;
using GnssStatusAdapter = Adapter<drivers::gnss_status::GnssStatus>;
using SystemStatusAdapter = Adapter<jmc_auto::monitor::SystemStatus>;
using StaticInfoAdapter = Adapter<jmc_auto::data::StaticInfo>;
using MobileyeAdapter = Adapter<drivers::Mobileye>;
using DelphiESRAdapter = Adapter<drivers::DelphiESR>;
using ContiRadarAdapter = Adapter<drivers::ContiRadar>;
// using RacobitRadarAdapter = Adapter<drivers::RacobitRadar>;
// using UltrasonicAdapter = Adapter<drivers::Ultrasonic>;
using CompressedImageAdapter = Adapter<sensor_msgs::CompressedImage>;
using GnssRtkObsAdapter = Adapter<jmc_auto::drivers::gnss::EpochObservation>;
using GnssRtkEphAdapter = Adapter<jmc_auto::drivers::gnss::GnssEphemeris>;
using GnssBestPoseAdapter = Adapter<jmc_auto::drivers::gnss::GnssBestPose>;
using LocalizationMsfGnssAdapter =
    Adapter<jmc_auto::localization::LocalizationEstimate>;
using LocalizationMsfLidarAdapter =
    Adapter<jmc_auto::localization::LocalizationEstimate>;
using LocalizationMsfSinsPvaAdapter =
    Adapter<jmc_auto::localization::IntegSinsPva>;
using LocalizationMsfStatusAdapter =
    Adapter<jmc_auto::localization::LocalizationStatus>;
using RelativeMapAdapter = Adapter<jmc_auto::relative_map::MapMsg>;
using NavigationAdapter = Adapter<jmc_auto::relative_map::NavigationInfo>;
using VoiceDetectionRequestAdapter =
    Adapter<jmc_auto::dreamview::VoiceDetectionRequest>;
using VoiceDetectionResponseAdapter =
    Adapter<jmc_auto::dreamview::VoiceDetectionResponse>;
// for pandora
using PandoraPointCloudAdapter = Adapter<::sensor_msgs::PointCloud2>;
using PandoraCameraFrontColorAdapter = Adapter<::sensor_msgs::Image>;
using PandoraCameraRightGrayAdapter = Adapter<::sensor_msgs::Image>;
using PandoraCameraLeftGrayAdapter = Adapter<::sensor_msgs::Image>;
using PandoraCameraFrontGrayAdapter = Adapter<::sensor_msgs::Image>;
using PandoraCameraBackGrayAdapter = Adapter<::sensor_msgs::Image>;
using GuardianAdapter = Adapter<jmc_auto::guardian::GuardianCommand>;
using GnssRawDataAdapter = Adapter<std_msgs::String>;
using StreamStatusAdapter = Adapter<drivers::gnss_status::StreamStatus>;
using GnssHeadingAdapter = Adapter<drivers::gnss::Heading>;
using RtcmDataAdapter = Adapter<std_msgs::String>;

// for velodyne
using VelodyneRaw0Adapter = Adapter<velodyne_msgs::VelodyneScanUnified>;
using VelodyneRaw1Adapter = Adapter<velodyne_msgs::VelodyneScanUnified>;
using PointCloudRaw0Adapter = Adapter<::sensor_msgs::PointCloud2>;
using PointCloudRaw1Adapter = Adapter<::sensor_msgs::PointCloud2>;
using PointCloudFusionAdapter = Adapter<::sensor_msgs::PointCloud2>;
//for remotecontrol
using RemoteControlAdapter = Adapter<::jmc_auto::remote::RemoteControl>;   

using LocalizationdyAdapter = Adapter<jmc_auto::localization_dy::LocalizationEstimate>;
*/
}  // namespace adapter
}  // namespace common
}  // namespace jmc_auto

#endif  // MODULES_ADAPTERS_MESSAGE_ADAPTERS_H_
