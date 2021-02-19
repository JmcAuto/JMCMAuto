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

#include "modules/drivers/canbus/can_client/can_client_factory.h"

#include "modules/drivers/canbus/can_client/fake/fake_can_client.h"
#include "modules/drivers/canbus/can_client/mdc/mdc_can_client.h"

#include "modules/common/log.h"
#include "modules/common/util/util.h"

namespace jmc_auto {
namespace drivers {
namespace canbus {

CanClientFactory::CanClientFactory() {}

void CanClientFactory::RegisterCanClients() {
    AINFO << "CanClientFactory::RegisterCanClients";
    // Register(CANCardParameter::FAKE_CAN,
    //         []() -> CanClient* { return new can::FakeCanClient(); });
    Register(CANCardParameter::MDC_CAN,
             []() -> CanClient * { return new can::MdcCanClient(); });
}

std::unique_ptr<CanClient>
CanClientFactory::CreateCANClient(const CANCardParameter &parameter) {
    auto factory = CreateObject(parameter.brand());
    if (!factory) {
        AERROR << "Failed to create CAN client with parameter: "
               << parameter.DebugString();
    } else if (!factory->Init(parameter)) {
        AERROR << "Failed to initialize CAN card with parameter: "
               << parameter.DebugString();
    }
    return factory;
}

} // namespace canbus
} // namespace drivers
} // namespace jmc_auto
