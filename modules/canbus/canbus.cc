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
#include "modules/canbus/vehicle/vehicle_factory.h"
#include "modules/common/adapters/adapter_manager.h"
#include "modules/common/adapters/proto/adapter_config.pb.h"
#include "modules/common/time/jmcauto_time.h"
#include "modules/common/util/util.h"
#include "modules/drivers/canbus/can_client/can_client_factory.h"

#include "impl_type_chassis.h"

namespace jmc_auto {
namespace canbus {

using jmc_auto::common::ErrorCode;
using jmc_auto::common::Status;
using jmc_auto::common::adapter::AdapterManager;
using jmc_auto::common::time::Clock;
using jmc_auto::control::ControlCommand;
using jmc_auto::drivers::canbus::CanClientFactory;

std::string Canbus::Name() const { return FLAGS_canbus_module_name; }

Status Canbus::Init() {
    AdapterManager::Init(FLAGS_canbus_adapter_config_filename);
    AINFO << "The adapter manager is successfully initialized.";

    // load conf
    if (!common::util::GetProtoFromFile(FLAGS_canbus_conf_file,
                                        &canbus_conf_)) {
        return Status(ErrorCode::CANBUS_ERROR,
                      "Unable to load canbus conf file:" +
                          FLAGS_canbus_conf_file);
    }

    AINFO << "The canbus conf file is loaded: " << FLAGS_canbus_conf_file;
    // ADEBUG << "Canbus_conf:" << canbus_conf_.ShortDebugString();

    // Init can client
    auto *can_factory = CanClientFactory::instance();
    can_factory->RegisterCanClients();
    can_client_ =
        can_factory->CreateCANClient(canbus_conf_.can_card_parameter());
    if (!can_client_) {
        return Status(ErrorCode::CANBUS_ERROR, "Failed to create can client.");
    }
    AINFO << "Can client is successfully created.";

    VehicleFactory vehicle_factory;
    vehicle_factory.RegisterVehicleFactory();
    auto vehicle_object =
        vehicle_factory.CreateVehicle(canbus_conf_.vehicle_parameter());
    if (!vehicle_object) {
        return Status(ErrorCode::CANBUS_ERROR, "Failed to create vehicle:");
    }

    message_manager_ = vehicle_object->CreateMessageManager();
    if (message_manager_ == nullptr) {
        return Status(ErrorCode::CANBUS_ERROR,
                      "Failed to create message manager.");
    }
    AINFO << "Message manager is successfully created.";

    if (can_receiver_.Init(can_client_.get(), message_manager_.get(),
        canbus_conf_.enable_receiver_log()) !=
        ErrorCode::OK) {
        return Status(ErrorCode::CANBUS_ERROR, "Failed to init can receiver.");
    }
    AINFO << "The can receiver is successfully initialized.";

    if (can_sender_.Init(can_client_.get(), canbus_conf_.enable_sender_log()) !=
        ErrorCode::OK) {
        return Status(ErrorCode::CANBUS_ERROR, "Failed to init can sender.");
    }
    AINFO << "The can sender is successfully initialized.";

    vehicle_controller_ = vehicle_object->CreateVehicleController();
    if (vehicle_controller_ == nullptr) {
        return Status(ErrorCode::CANBUS_ERROR,
                      "Failed to create vehicle controller.");
    }
    AINFO << "The vehicle controller is successfully created.";

    if (vehicle_controller_->Init(canbus_conf_.vehicle_parameter(),
                                  &can_sender_,
                                  message_manager_.get()) != ErrorCode::OK) {
        return Status(ErrorCode::CANBUS_ERROR,
                      "Failed to init vehicle controller.");
    }
    AINFO << "The vehicle controller is successfully initialized.";

    CHECK(AdapterManager::GetControlCommand()) << "Control is not initialized.";
    //CHECK(AdapterManager::GetGuardian()) << "Guardian is not
    // initialized.";
    // TODO(QiL) : depreacte this
    //if (!FLAGS_receive_guardian) {
        AdapterManager::AddControlCommandCallback(&Canbus::OnControlCommand, this);
        //AdapterManager::AddRemoteControlCallback(
        //    &Canbus::OnRemoteControlCommand, this);
    //} else {
    //    AdapterManager::AddGuardianCallback(&Canbus::OnGuardianCommand, this);
    //}

    return Status::OK();
}

Status Canbus::Start() {
    // 1. init and start the can card hardware
    if (can_client_->Start() != ErrorCode::OK) {
        return Status(ErrorCode::CANBUS_ERROR, "Failed to start can client");
    }
    AINFO << "Can client is started.";

    // 2. start receive first then send
    if (can_receiver_.Start() != ErrorCode::OK) {
        return Status(ErrorCode::CANBUS_ERROR, "Failed to start can receiver.");
    }
    AINFO << "Can receiver is started.";

    // 3. start send
    if (can_sender_.Start() != ErrorCode::OK) {
        return Status(ErrorCode::CANBUS_ERROR, "Failed to start can sender.");
    }
    AINFO << "Can sender is started.";

    // 4. start controller

    if (vehicle_controller_->Start() == false) {
        return Status(ErrorCode::CANBUS_ERROR,
                      "Failed to start vehicle controller.");
    }
    AINFO << "vehicle controller is started.";

    // 5. set timer to triger publish info periodly
    const double duration = 1.0 / FLAGS_chassis_freq;
    while (1) {
        Canbus::PublishChassis();
        sleep(duration);
    }

    return Status::OK();
}

void Canbus::PublishChassis() {
    //jmc_auto::canbus::Chassis chassis;
    jmc_auto::canbus::Chassis chassis = vehicle_controller_->chassis();

    //test
    chassis.set_brake_percentage(20);

    AdapterManager::FillChassisHeader(&chassis);
    AdapterManager::PublishChassis(chassis);

    AINFO << chassis.DebugString();
    // ADEBUG << chassis.ShortDebugString();
}

/*
    void Canbus::PublishChassisDetail()
    {
      ChassisDetail chassis_detail;
      message_manager_->GetSensorData(&chassis_detail);
      ADEBUG << chassis_detail.ShortDebugString();

      AdapterManager::PublishChassisDetail(chassis_detail);
    }

    void Canbus::OnTimer(const ros::TimerEvent &)
    {
      PublishChassis();
      if (FLAGS_enable_chassis_detail_pub)
      {
        PublishChassisDetail();
      }
    }
*/

void Canbus::Stop() {
    AINFO << "stop";
    // timer_.stop();
    can_sender_.Stop();
    can_receiver_.Stop();
    can_client_->Stop();
    vehicle_controller_->Stop();
}
/*

    ControlCommand Canbus::RemoteCmdToControlCmd(const
   jmc_auto::remote::RemoteControl &RemoteControlCommand)
    {
      ControlCommand control_command;
      if (RemoteControlCommand.has_pedal_throttle_percent())
      {
        control_command.set_throttle(RemoteControlCommand.pedal_throttle_percent());
      }
      if (RemoteControlCommand.has_pedal_brake_percent())
      {
        control_command.set_brake(RemoteControlCommand.pedal_brake_percent());
      }
      if (RemoteControlCommand.has_steerwheel_angle())
      {
        control_command.set_steering_target(RemoteControlCommand.steerwheel_angle());
      }

      if (RemoteControlCommand.has_gear_data())
      {
        control_command.set_gear_location(RemoteControlCommand.gear_data());
      }

      if (RemoteControlCommand.has_mode_apply())
      {
        control_command.set_driving_mode(RemoteControlCommand.mode_apply());
      }

      if (RemoteControlCommand.emergency_stop())
      {
        control_command.set_driving_mode(Chassis::DrivingMode::Chassis_DrivingMode_AUTO_SPEED_ONLY);
      }

      return control_command;
    }
    void Canbus::OnRemoteControlCommand(const jmc_auto::remote::RemoteControl
   &RemoteControlCommand)
    {
      AINFO << "RemoteControlCommand:" + RemoteControlCommand.DebugString();
      // int64_t current_timestamp =
      // jmc_auto::common::time::AsInt64<common::time::micros>(Clock::Now());
      // if command coming too soon, just ignore it.
      // if (current_timestamp - last_timestamp_ < FLAGS_min_cmd_interval *
   1000) {
      //   ADEBUG << "Control command comes too soon. Ignore.\n Required "
      //             "FLAGS_min_cmd_interval["
      //          << FLAGS_min_cmd_interval << "], actual time interval["
      //          << current_timestamp - last_timestamp_ << "].";
      //   return;
      // }

      // last_timestamp_ = current_timestamp;
      // ADEBUG << "Control_sequence_number:"
      //        << control_command.header().sequence_num() << ", Time_of_delay:"
      //        << current_timestamp - control_command.header().timestamp_sec();

      ControlCommand control_command =
   RemoteCmdToControlCmd(RemoteControlCommand);

      AINFO<<"control_command:"<<control_command.DebugString();
      if (control_command.has_driving_mode())
      {
        if (control_command.driving_mode() == Chassis::COMPLETE_AUTO_DRIVE)
        {
          AINFO<<"NO REMOTE MODE";
          IS_Remote_MODE = false;
        }
        else
        {
          AINFO<<"REMOTE MODE";
          IS_Remote_MODE = true;
        }
      }



      if (IS_Remote_MODE && vehicle_controller_->chassis().driving_mode() !=
   Chassis::COMPLETE_AUTO_DRIVE)
      {
        // setControlcmd();
        AINFO<<"REMOTE CONTROL";
        if (vehicle_controller_->Update(control_command) != ErrorCode::OK)
        {
          AERROR << "Failed to process callback function OnControlCommand
   because " "vehicle_controller_->Update error."; return;
        }
        //can_sender_.Update();
      }
    }
    */
void Canbus::OnControlCommand(const ControlCommand &control_command) {
    AINFO << "control_command:" + control_command.DebugString();
    int64_t current_timestamp =
        jmc_auto::common::time::AsInt64<common::time::micros>(Clock::Now());
    // if command coming too soon, just ignore it.
    if (current_timestamp - last_timestamp_ < FLAGS_min_cmd_interval * 1000) {
        ADEBUG << "Control command comes too soon. Ignore.\n Required "
                  "FLAGS_min_cmd_interval["
               << FLAGS_min_cmd_interval << "], actual time interval["
               << current_timestamp - last_timestamp_ << "].";
        return;
    }

    last_timestamp_ = current_timestamp;
    ADEBUG << "Control_sequence_number:"
           << control_command.header().sequence_num() << ", Time_of_delay:"
           << current_timestamp - control_command.header().timestamp_sec();

    if (!IS_Remote_MODE && (vehicle_controller_->chassis().driving_mode() ==
                                Chassis::COMPLETE_AUTO_DRIVE ||
                            vehicle_controller_->chassis().driving_mode() ==
                                Chassis::COMPLETE_MANUAL ||
                            vehicle_controller_->chassis().driving_mode() ==
                                Chassis::AUTO_SPEED_ONLY)) {
        if (vehicle_controller_->Update(control_command) != ErrorCode::OK) {
            AERROR << "Failed to process callback function OnControlCommand because "
            		  " vehicle_controller_->Update error."; return;
        }

        can_sender_.Update();
    }
}

    // void Canbus::OnGuardianCommand(const GuardianCommand &guardian_command) {
    //   jmc_auto::control::ControlCommand control_command;
    //   control_command.CopyFrom(guardian_command.control_command());
    //   OnControlCommand(control_command);
    // }


} // namespace canbus
} // namespace jmc_auto
