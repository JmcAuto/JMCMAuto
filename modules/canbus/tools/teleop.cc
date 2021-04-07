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

#include <stdio.h>
#include <termios.h>
#include <iostream>
#include <memory>
#include <thread>

#include "modules/canbus/proto/chassis.pb.h"
#include "modules/common/adapters/adapter_manager.h"
#include "modules/common/log.h"
#include "modules/common/macro.h"
#include "modules/common/time/jmcauto_time.h"
#include "modules/control/proto/control_cmd.pb.h"

// gflags
DEFINE_double(throttle_inc_delta, 2.0,
              "throttle pedal command delta percentage.");
DEFINE_double(brake_inc_delta, 2.0, "brake pedal delta percentage");
DEFINE_double(steer_inc_delta, 2.0, "steer delta percentage");

namespace {

using jmc_auto::canbus::Chassis;
using jmc_auto::common::adapter::AdapterManager;
using jmc_auto::common::time::Clock;
using jmc_auto::common::VehicleSignal;
using jmc_auto::control::ControlCommand;
using jmc_auto::control::PadMessage;

const uint32_t KEYCODE_O = 0x4F;  // '0'

const uint32_t KEYCODE_UP1 = 0x57;  // 'w'
const uint32_t KEYCODE_UP2 = 0x77;  // 'w'
const uint32_t KEYCODE_DN1 = 0x53;  // 'S'
const uint32_t KEYCODE_DN2 = 0x73;  // 's'
const uint32_t KEYCODE_LF1 = 0x41;  // 'A'
const uint32_t KEYCODE_LF2 = 0x61;  // 'a'
const uint32_t KEYCODE_RT1 = 0x44;  // 'D'
const uint32_t KEYCODE_RT2 = 0x64;  // 'd'

const uint32_t KEYCODE_PKBK = 0x50;  // hand brake or parking brake

// set throttle, gear, and brake
const uint32_t KEYCODE_SETT1 = 0x54;  // 'T'
const uint32_t KEYCODE_SETT2 = 0x74;  // 't'
const uint32_t KEYCODE_SETG1 = 0x47;  // 'G'
const uint32_t KEYCODE_SETG2 = 0x67;  // 'g'
const uint32_t KEYCODE_SETB1 = 0x42;  // 'B'
const uint32_t KEYCODE_SETB2 = 0x62;  // 'b'
const uint32_t KEYCODE_ZERO = 0x30;   // '0'

const uint32_t KEYCODE_SETQ1 = 0x51;  // 'Q'
const uint32_t KEYCODE_SETQ2 = 0x71;  // 'q'

// change action
const uint32_t KEYCODE_MODE = 0x6D;  // 'm'

// emergency stop
const uint32_t KEYCODE_ESTOP = 0x45;  // 'E'

// help
const uint32_t KEYCODE_HELP = 0x68;   // 'h'
const uint32_t KEYCODE_HELP2 = 0x48;  // 'H'

class Teleop {
 public:
  Teleop();
  static void PrintKeycode() {
    system("clear");
    printf("=====================    KEYBOARD MAP   ===================\n");
    printf("HELP:               [%c]     |\n", KEYCODE_HELP);
    printf("Set Action      :   [%c]+Num\n", KEYCODE_MODE);
    printf("                     0 RESET ACTION\n");
    printf("                     1 START ACTION\n");
    printf("\n-----------------------------------------------------------\n");
    printf("Set Gear:           [%c]+Num\n", KEYCODE_SETG1);
    printf("                     0 GEAR_NEUTRAL\n");
    printf("                     1 GEAR_DRIVE\n");
    printf("                     2 GEAR_REVERSE\n");
    printf("                     3 GEAR_PARKING\n");
    printf("                     4 GEAR_LOW\n");
    printf("                     5 GEAR_INVALID\n");
    printf("                     6 GEAR_NONE\n");
    printf("\n-----------------------------------------------------------\n");
    printf("Throttle/Speed up:  [%c]     |  Set Throttle:       [%c]+Num\n",
           KEYCODE_UP1, KEYCODE_SETT1);
    printf("Brake/Speed down:   [%c]     |  Set Brake:          [%c]+Num\n",
           KEYCODE_DN1, KEYCODE_SETB1);
    printf("Steer LEFT:         [%c]     |  Steer RIGHT:        [%c]\n",
           KEYCODE_LF1, KEYCODE_RT1);
    printf("Parkinig Brake:     [%c]     |  Emergency Stop      [%c]\n",
           KEYCODE_PKBK, KEYCODE_ESTOP);
    printf("\n-----------------------------------------------------------\n");
    printf("Exit: Ctrl + C, then press enter to normal terminal\n");
    printf("===========================================================\n");
  }

  void KeyboardLoopThreadFunc() {
    char c = 0;
    int32_t level = 0;
    double brake = 0;
    double throttle = 0;
    double steering = 0;
    struct termios cooked_;
    struct termios raw_;
    double acceleration=0;
    double steering_torque=0;
    bool ACC_StandstillReq=false;
    int32_t kfd_ = 0;
    bool parking_brake = false;
    Chassis::GearPosition gear = Chassis::GEAR_INVALID;
    PadMessage pad_msg;
    ControlCommand &control_command_ = control_command();

    // get the console in raw mode
    tcgetattr(kfd_, &cooked_);
    std::memcpy(&raw_, &cooked_, sizeof(struct termios));
    raw_.c_lflag &= ~(ICANON | ECHO);
    // Setting a new line, then end of file
    raw_.c_cc[VEOL] = 1;
    raw_.c_cc[VEOF] = 2;
    tcsetattr(kfd_, TCSANOW, &raw_);
    puts("Teleop:\nReading from keyboard now.");
    puts("---------------------------");
    puts("Use arrow keys to drive the car.");
    while (IsRunning()) {
      // get the next event from the keyboard
      if (read(kfd_, &c, 1) < 0) {
        perror("read():");
        exit(-1);
      }
      AINFO << "control command : "
            << control_command_.ShortDebugString().c_str();
      switch (c) {
        case KEYCODE_UP1:  // accelerate
          acceleration = control_command_.acceleration();
          acceleration = GetCommand(acceleration, 0.5,5);
          control_command_.set_acceleration(acceleration);
          AINFO << "acceleration = " << acceleration;
          break;
        case KEYCODE_UP2:
          brake = control_command_.brake();
          throttle = control_command_.throttle();
          if (brake > 1e-6) {
            brake = GetCommand(brake, -FLAGS_brake_inc_delta,100);
            control_command_.set_brake(brake);
          } else {
            throttle = GetCommand(throttle, FLAGS_throttle_inc_delta,100);
            control_command_.set_throttle(throttle);
          }
          AINFO << "Throttle = " << control_command_.throttle()
                << ", Brake = " << control_command_.brake();
          break;
        case KEYCODE_DN1:  // decelerate
          acceleration = control_command_.acceleration();
          acceleration = GetCommand(acceleration,-0.5,5);
          control_command_.set_acceleration(acceleration);
          AINFO << "acceleration = " << acceleration;
          break;
        case KEYCODE_DN2:
          brake = control_command_.brake();
          throttle = control_command_.throttle();
          if (throttle > 1e-6) {
            throttle = GetCommand(throttle, -FLAGS_throttle_inc_delta,100);
            control_command_.set_throttle(throttle);
          } else {
            brake = GetCommand(brake, FLAGS_brake_inc_delta,100);
            control_command_.set_brake(brake);
          }
          AINFO << "Throttle = " << control_command_.throttle()
                << ", Brake = " << control_command_.brake();
          break;
        case KEYCODE_LF1:  // left
          steering_torque = control_command_.steering_torque();
          steering_torque = GetCommand(steering_torque,1,3);
          control_command_.set_steering_torque(steering_torque);
          AINFO << "steering_torque = " << steering_torque;
          break;
        case KEYCODE_LF2:
          steering = control_command_.steering_target();
          //steering = GetCommand(steering, FLAGS_steer_inc_delta,100);
          steering = GetCommand(steering,1,3);
          control_command_.set_steering_target(steering);
          AINFO << "Steering Target = " << steering;
          break;
        case KEYCODE_RT1:  // right
          steering_torque = control_command_.steering_torque();
          steering_torque = GetCommand(steering_torque,-1,3);
          control_command_.set_steering_torque(steering_torque);
          AINFO << "steering_torque = " << steering_torque;
          break;
        case KEYCODE_RT2:
          steering = control_command_.steering_target();
          steering = GetCommand(steering,-1,3);
          control_command_.set_steering_target(steering);
          AINFO << "Steering Target = " << steering;
          break;
        case KEYCODE_PKBK:  // hand brake
          // parking_brake = !control_command_.parking_brake();
          // control_command_.set_parking_brake(parking_brake);
          // AINFO << "Parking Brake Toggled: " << parking_brake;
          ACC_StandstillReq=~ACC_StandstillReq;
          AINFO << "ACC_StandstillReq: " << ACC_StandstillReq;
          break;
        case KEYCODE_ESTOP:
          control_command_.set_acceleration(-3);
          AINFO << "acceleration = " << acceleration;
          break;
        case KEYCODE_SETT1:  // set throttle
        case KEYCODE_SETT2:
          // read keyboard again
          if (read(kfd_, &c, 1) < 0) {
            exit(-1);
          }
          level = c - KEYCODE_ZERO;
          control_command_.set_throttle(level * 10.0);
          control_command_.set_brake(0.0);
          AINFO << "Throttle = " << control_command_.throttle()
                << ", Brake = " << control_command_.brake();
          break;
        case KEYCODE_SETG1:
        case KEYCODE_SETG2:
          // read keyboard again
          if (read(kfd_, &c, 1) < 0) {
            exit(-1);
          }
          level = c - KEYCODE_ZERO;
          gear = GetGear(level);
          control_command_.set_gear_location(gear);
          AINFO << "Gear set to : " << level;
          break;
        case KEYCODE_SETB1:
        case KEYCODE_SETB2:
          // read keyboard again
          if (read(kfd_, &c, 1) < 0) {
            exit(-1);
          }
          level = c - KEYCODE_ZERO;
          control_command_.set_throttle(0.0);
          control_command_.set_brake(level * 10.0);
          AINFO << "Throttle = " << control_command_.throttle()
                << ", Brake = " << control_command_.brake();
          break;
        case KEYCODE_SETQ1:
        case KEYCODE_SETQ2:
          if (read(kfd_, &c, 1) < 0) {
            exit(-1);
          }
          static int cnt = 0;
          ++cnt;
          if (cnt > 2) {
            cnt = 0;
          }

          if (cnt == 0) {
            control_command_.mutable_signal()->
              set_turn_signal(VehicleSignal::TURN_NONE);
          } else if (cnt == 1) {
            control_command_.mutable_signal()->
              set_turn_signal(VehicleSignal::TURN_LEFT);
          } else if (cnt == 2) {
            control_command_.mutable_signal()->
              set_turn_signal(VehicleSignal::TURN_RIGHT);
          }

          break;
        case KEYCODE_MODE:
          // read keyboard again
          if (read(kfd_, &c, 1) < 0) {
            exit(-1);
          }
          level = c - KEYCODE_ZERO;
          GetPadMessage(&pad_msg, level);
          control_command_.mutable_pad_msg()->CopyFrom(pad_msg);
          sleep(1);
          control_command_.clear_pad_msg();
          break;
        case KEYCODE_HELP:
        case KEYCODE_HELP2:
          PrintKeycode();
          break;
        default:
          // printf("%X\n", c);
          break;
      }
      AINFO << "control command after switch : "
            << control_command_.ShortDebugString().c_str();
    }  // keyboard_loop big while
    tcsetattr(kfd_, TCSANOW, &cooked_);
    AINFO << "keyboard_loop thread quited.";
    return;
  }  // end of keyboard loop thread

  ControlCommand &control_command() {
    return control_command_;
  }

  Chassis::GearPosition GetGear(int32_t gear) {
    switch (gear) {
      case 0:
        return Chassis::GEAR_NEUTRAL;
      case 1:
        return Chassis::GEAR_DRIVE;
      case 2:
        return Chassis::GEAR_REVERSE;
      case 3:
        return Chassis::GEAR_PARKING;
      case 4:
        return Chassis::GEAR_LOW;
      case 5:
        return Chassis::GEAR_INVALID;
      case 6:
        return Chassis::GEAR_NONE;
      default:
        return Chassis::GEAR_INVALID;
    }
  }

  void GetPadMessage(PadMessage *pad_msg, int32_t int_action) {
    jmc_auto::control::DrivingAction action =
        jmc_auto::control::DrivingAction::RESET;
    switch (int_action) {
      case 0:
        action = jmc_auto::control::DrivingAction::RESET;
        AINFO << "SET Action RESET";
        break;
      case 1:
        action = jmc_auto::control::DrivingAction::START;
        AINFO << "SET Action START";
        break;
      default:
        AINFO << "unknown action: " << int_action << " use default RESET";
        break;
    }
    pad_msg->set_action(action);
    return;
  }

  double GetCommand(double val, double inc,double limit) {
    val += inc;
    if (val > limit) {
      val = limit;
    } else if (val < -limit) {
      val = -limit;
    }
    return val;
  }
 
  
  void Send() {
    AdapterManager::FillControlCommandHeader(&control_command_);
    AdapterManager::PublishControlCommand(control_command_);
    ADEBUG << "Control Command send OK:" << control_command_.ShortDebugString();
  }

  void ResetControlCommand() {
    control_command_.Clear();
    control_command_.set_throttle(0.0);
    control_command_.set_brake(0.0);
    control_command_.set_steering_rate(0.0);
    control_command_.set_steering_target(0.0);
    control_command_.set_parking_brake(false);
    control_command_.set_speed(0.0);
    control_command_.set_acceleration(0.0);
    control_command_.set_reset_model(false);
    control_command_.set_engine_on_off(false);
    control_command_.set_driving_mode(Chassis::COMPLETE_MANUAL);
    control_command_.set_gear_location(Chassis::GEAR_INVALID);
    control_command_.mutable_signal()->
      set_turn_signal(VehicleSignal::TURN_NONE);
  }

  void OnChassis(const Chassis &chassis) {
    Send();
  }

  int32_t Start() {
    if (is_running_) {
      AERROR << "Already running.";
      return -1;
    }
    is_running_ = true;
    AdapterManager::AddChassisCallback(&Teleop::OnChassis, this);
    keyboard_thread_.reset(
        new std::thread([this] { KeyboardLoopThreadFunc(); }));
    if (keyboard_thread_ == nullptr) {
      AERROR << "Unable to create can client receiver thread.";
      return -1;
    }
    return 0;
  }

  void Stop() {
    if (is_running_) {
      is_running_ = false;
      if (keyboard_thread_ != nullptr && keyboard_thread_->joinable()) {
        keyboard_thread_->join();
        keyboard_thread_.reset();
        AINFO << "Teleop keyboard stopped [ok].";
      }
    }
  }

  bool IsRunning() const {
    return is_running_;
  }

 private:
  std::unique_ptr<std::thread> keyboard_thread_;
  ControlCommand control_command_;
  bool is_running_ = false;
};

Teleop::Teleop() {
  ResetControlCommand();
}

void signal_handler(int32_t signal_num) {
  if (signal_num != SIGINT) {
    // only response for ctrl + c
    return;
  }
  AINFO << "Teleop get signal: " << signal_num;
  bool static is_stopping = false;
  if (is_stopping) {
    return;
  }
  is_stopping = true;
  //ros::shutdown();
}

}  // namespace

int main(int32_t argc, char **argv) {
  google::InitGoogleLogging(argv[0]);
  FLAGS_alsologtostderr = true;
  FLAGS_v = 3;

  google::ParseCommandLineFlags(&argc, &argv, true);

  jmc_auto::common::adapter::AdapterManagerConfig config;
  config.set_is_ros(true);
  {
    auto *sub_config = config.add_config();
    sub_config->set_mode(jmc_auto::common::adapter::AdapterConfig::PUBLISH_ONLY);
    sub_config->set_type(
        jmc_auto::common::adapter::AdapterConfig::CONTROL_COMMAND);
  }

  {
    auto *sub_config = config.add_config();
    sub_config->set_mode(jmc_auto::common::adapter::AdapterConfig::RECEIVE_ONLY);
    sub_config->set_type(jmc_auto::common::adapter::AdapterConfig::CHASSIS);
  }

  jmc_auto::common::adapter::AdapterManager::Init(config);

  Teleop teleop;

  if (teleop.Start() != 0) {
    AERROR << "Teleop start failed.";
    return -1;
  }
  Teleop::PrintKeycode();

  while(1) {};
  teleop.Stop();
  AINFO << "Teleop exit done.";
  return 0;
}
