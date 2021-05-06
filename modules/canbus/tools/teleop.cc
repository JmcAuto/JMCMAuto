#include "modules/canbus/tools/teleop.h"
#include "modules/canbus/tools/teleop_gflags.h"
#include "modules/common/adapters/adapter_manager.h"
#include "modules/common/adapters/proto/adapter_config.pb.h"
#include "modules/common/time/jmcauto_time.h"
#include "modules/common/util/util.h"

namespace jmc_auto {
namespace teleop {

using jmc_auto::canbus::Chassis;
using jmc_auto::common::ErrorCode;
using jmc_auto::common::Status;
using jmc_auto::common::VehicleSignal;
using jmc_auto::common::adapter::AdapterManager;
using jmc_auto::common::time::Clock;
using jmc_auto::control::ControlCommand;
using jmc_auto::control::PadMessage;

void Teleop::KeyboardLoopThreadFunc() {
    char c = 0;
    int32_t level = 0;
    double brake = 0;
    double throttle = 0;
    double steering = 0;
    struct termios cooked_;
    struct termios raw_;
    double acceleration = 0;
    double steering_torque = 0;
    bool ACC_StandstillReq = false;
    int32_t kfd_ = 0;
    bool parking_brake = false;
    Chassis::GearPosition gear = Chassis::GEAR_INVALID;
    PadMessage pad_msg;

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
    while (is_running_) {
        // get the next event from the keyboard
        if (read(kfd_, &c, 1) < 0) {
            perror("read():");
            exit(-1);
        }
        AINFO << "control command : "
              << control_command_.ShortDebugString().c_str();
        switch (c) {
        case KEYCODE_UP1: // accelerate
            acceleration = control_command_.acceleration();
            acceleration = GetCommand(acceleration, 0.5, 5);
            control_command_.set_acceleration(acceleration);
            AINFO << "acceleration = " << acceleration;
            break;
        case KEYCODE_UP2:
            brake = control_command_.brake();
            throttle = control_command_.throttle();
            if (brake > 1e-6) {
                brake = GetCommand(brake, -FLAGS_brake_inc_delta, 100);
                control_command_.set_brake(brake);
            } else {
                throttle = GetCommand(throttle, FLAGS_throttle_inc_delta, 100);
                control_command_.set_throttle(throttle);
            }
            AINFO << "Throttle = " << control_command_.throttle()
                  << ", Brake = " << control_command_.brake();
            break;
        case KEYCODE_DN1: // decelerate
            acceleration = control_command_.acceleration();
            acceleration = GetCommand(acceleration, -0.5, 5);
            control_command_.set_acceleration(acceleration);
            AINFO << "acceleration = " << acceleration;
            break;
        case KEYCODE_DN2:
            brake = control_command_.brake();
            throttle = control_command_.throttle();
            if (throttle > 1e-6) {
                throttle = GetCommand(throttle, -FLAGS_throttle_inc_delta, 100);
                control_command_.set_throttle(throttle);
            } else {
                brake = GetCommand(brake, FLAGS_brake_inc_delta, 100);
                control_command_.set_brake(brake);
            }
            AINFO << "Throttle = " << control_command_.throttle()
                  << ", Brake = " << control_command_.brake();
            break;
        case KEYCODE_LF1: // left
            steering_torque = control_command_.steering_torque();
            steering_torque = GetCommand(steering_torque, 1, 3);
            control_command_.set_steering_torque(steering_torque);
            AINFO << "steering_torque = " << steering_torque;
            break;
        case KEYCODE_LF2:
            steering = control_command_.steering_target();
            // steering = GetCommand(steering, FLAGS_steer_inc_delta,100);
            steering = GetCommand(steering, 1, 3);
            control_command_.set_steering_target(steering);
            AINFO << "Steering Target = " << steering;
            break;
        case KEYCODE_RT1: // right
            steering_torque = control_command_.steering_torque();
            steering_torque = GetCommand(steering_torque, -1, 3);
            control_command_.set_steering_torque(steering_torque);
            AINFO << "steering_torque = " << steering_torque;
            break;
        case KEYCODE_RT2:
            steering = control_command_.steering_target();
            steering = GetCommand(steering, -1, 3);
            control_command_.set_steering_target(steering);
            AINFO << "Steering Target = " << steering;
            break;
        case KEYCODE_PKBK: // hand brake
            // parking_brake = !control_command_.parking_brake();
            // control_command_.set_parking_brake(parking_brake);
            // AINFO << "Parking Brake Toggled: " << parking_brake;
            ACC_StandstillReq = ~ACC_StandstillReq;
            AINFO << "ACC_StandstillReq: " << ACC_StandstillReq;
            break;
        case KEYCODE_ESTOP:
            control_command_.set_acceleration(-3);
            AINFO << "acceleration = " << acceleration;
            break;
        case KEYCODE_SETT1: // set throttle
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
                control_command_.mutable_signal()->set_turn_signal(
                    VehicleSignal::TURN_NONE);
            } else if (cnt == 1) {
                control_command_.mutable_signal()->set_turn_signal(
                    VehicleSignal::TURN_LEFT);
            } else if (cnt == 2) {
                control_command_.mutable_signal()->set_turn_signal(
                    VehicleSignal::TURN_RIGHT);
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
    } // keyboard_loop big while
    tcsetattr(kfd_, TCSANOW, &cooked_);
    AINFO << "keyboard_loop thread quited.";
    return;
} // end of keyboard loop thread

Chassis::GearPosition Teleop::GetGear(int32_t gear) {
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

void Teleop::GetPadMessage(PadMessage *pad_msg, int32_t int_action) {
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

double Teleop::GetCommand(double val, double inc, double limit) {
    val += inc;
    if (val > limit) {
        val = limit;
    } else if (val < -limit) {
        val = -limit;
    }
    return val;
}

void Teleop::Send() {
    AdapterManager::FillControlCommandHeader(&control_command_);
    AdapterManager::PublishControlCommand(control_command_);
    ADEBUG << "Control Command send OK:" << control_command_.ShortDebugString();
}

void Teleop::ResetControlCommand() {
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
    control_command_.mutable_signal()->set_turn_signal(
        VehicleSignal::TURN_NONE);
}

void Teleop::OnChassis(const Chassis &chassis) { Send(); }

//Teleop::Teleop() { ResetControlCommand(); }

void Teleop::signal_handler(int32_t signal_num) {
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
    // ros::shutdown();
}

std::string Teleop::Name() const { return FLAGS_teleop_module_name; }

Status Teleop::Init() {
    //signal(SIGINT, signal_handler);
    AdapterManager::Init(FLAGS_teleop_adapter_config_filename);
    AINFO << "The adapter manager is successfully initialized.";
    return Status::OK();
}

Status Teleop::Start() {
    if (is_running_) {
        return Status(ErrorCode::CANBUS_ERROR, "Already running.");
    }
    is_running_ = true;
    AdapterManager::AddChassisCallback(&Teleop::OnChassis, this);
    keyboard_thread_.reset(
        new std::thread([this] { KeyboardLoopThreadFunc(); }));
    if (keyboard_thread_ == nullptr) {
        return Status(ErrorCode::CANBUS_ERROR,
                      "Failed to create can client receiver thread.");
    }
    PrintKeycode();
    while(1) {}
    return Status::OK();
}

void Teleop::Stop() {
    if (is_running_) {
        is_running_ = false;
        if (keyboard_thread_ != nullptr && keyboard_thread_->joinable()) {
            keyboard_thread_->join();
            keyboard_thread_.reset();
            AINFO << "Teleop keyboard stopped [ok].";
        }
    }
}
} // namespace teleop
} // namespace jmc_auto
