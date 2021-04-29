#ifndef MODULES_CANBUS_TOOLS_TELEOP_H_
#define MODULES_CANBUS_TOOLS_TELEOP_H_

#include <iostream>
#include <memory>
#include <stdio.h>
#include <termios.h>
#include <thread>

#include "modules/common/adapters/adapter_manager.h"
#include "modules/common/jmc_auto_app.h"
#include "modules/common/macro.h"

#include "modules/canbus/proto/chassis.pb.h"
#include "modules/control/proto/control_cmd.pb.h"

const uint32_t KEYCODE_O = 0x4F; // '0'

const uint32_t KEYCODE_UP1 = 0x57; // 'w'
const uint32_t KEYCODE_UP2 = 0x77; // 'w'
const uint32_t KEYCODE_DN1 = 0x53; // 'S'
const uint32_t KEYCODE_DN2 = 0x73; // 's'
const uint32_t KEYCODE_LF1 = 0x41; // 'A'
const uint32_t KEYCODE_LF2 = 0x61; // 'a'
const uint32_t KEYCODE_RT1 = 0x44; // 'D'
const uint32_t KEYCODE_RT2 = 0x64; // 'd'

const uint32_t KEYCODE_PKBK = 0x50; // hand brake or parking brake

// set throttle, gear, and brake
const uint32_t KEYCODE_SETT1 = 0x54; // 'T'
const uint32_t KEYCODE_SETT2 = 0x74; // 't'
const uint32_t KEYCODE_SETG1 = 0x47; // 'G'
const uint32_t KEYCODE_SETG2 = 0x67; // 'g'
const uint32_t KEYCODE_SETB1 = 0x42; // 'B'
const uint32_t KEYCODE_SETB2 = 0x62; // 'b'
const uint32_t KEYCODE_ZERO = 0x30;  // '0'

const uint32_t KEYCODE_SETQ1 = 0x51; // 'Q'
const uint32_t KEYCODE_SETQ2 = 0x71; // 'q'

// change action
const uint32_t KEYCODE_MODE = 0x6D; // 'm'

// emergency stop
const uint32_t KEYCODE_ESTOP = 0x45; // 'E'

// help
const uint32_t KEYCODE_HELP = 0x68;  // 'h'
const uint32_t KEYCODE_HELP2 = 0x48; // 'H'

/**
 * @namespace jmc_auto::canbus
 * @brief jmc_auto::canbus
 */
namespace jmc_auto {
namespace teleop {

/**
 * @class Canbus
 *
 * @brief canbus module main class.
 * It processes the control data to send protocol messages to can card.
 */

class Teleop : public jmc_auto::common::JmcAutoApp {
  public:
    /**
     * @brief obtain module name
     * @return module name
     */
    teleop();

    std::string Name() const override;

    /**
     * @brief module initialization function
     * @return initialization status
     */
    jmc_auto::common::Status Init() override;

    /**
     * @brief module start function
     * @return start status
     */
    jmc_auto::common::Status Start() override;

    /**
     * @brief module stop function
     */
    void Stop() override;

  private:
    static void PrintKeycode();
    void KeyboardLoopThreadFunc();
    Chassis::GearPosition GetGear(int32_t gear);
    void GetPadMessage(PadMessage *pad_msg, int32_t int_action);
    double GetCommand(double val, double inc, double limit);
    void Send();
    void ResetControlCommand();
    void OnChassis(const Chassis &chassis);
    void signal_handler(int32_t signal_num);

    std::unique_ptr<std::thread> keyboard_thread_;
    ControlCommand control_command_;
    bool is_running_ = false;
};

} // namespace teleop
} // namespace jmc_auto

#endif // MODULES_CANBUS_TOOLE_TELEOP_H_
