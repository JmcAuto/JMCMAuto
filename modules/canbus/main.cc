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
#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <bits/c++io.h>
#include <bits/basic_file.h>
#include <fstream>
#include "google/protobuf/io/zero_copy_stream.h"
#include "google/protobuf/stubs/stl_util.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"
#include "modules/common/log.h"
#include "modules/common/util/string_util.h"
#include "modules/common/util/file.h"
#include "google/protobuf/protobuf.h"

#include "modules/canbus/canbus.h"
#include "modules/canbus/common/canbus_gflags.h"
#include "modules/common/jmc_auto_app.h"

JMC_AUTO_MAIN(jmc_auto::canbus::Canbus);
