/******************************************************************************
 * Copyright 2018 The jmc_auto Authors. All Rights Reserved.
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

#ifndef MODULES_COMMON_RECORD_FILE_SECTION_H_
#define MODULES_COMMON_RECORD_FILE_SECTION_H_

namespace jmc_auto {
namespace common {
namespace record {

struct Section {
  proto::SectionType type;
  int64_t size;
};

}  // namespace record
}  // namespace common
}  // namespace jmc_auto

#endif  // MODULES_COMMON_RECORD_FILE_SECTION_H_
