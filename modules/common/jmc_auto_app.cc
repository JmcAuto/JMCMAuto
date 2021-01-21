
#include "modules/common/jmc_auto_app.h"

#include <csignal>
#include <memory>
#include <string>
#include <vector>

#include "gflags/gflags.h"
#include "modules/common/log.h"
#include "modules/common/status/status.h"
#include "modules/common/util/string_util.h"

//#include "ros/include/ros/ros.h"

DECLARE_string(log_dir);

namespace jmc_auto {
namespace common {

void JmcAutoApp::SetCallbackThreadNumber(uint32_t callback_thread_num) {
  CHECK_GE(callback_thread_num, 1);
  callback_thread_num_ = callback_thread_num;
}

void JmcAutoApp::ExportFlags() const {
  const auto export_file = util::StrCat(FLAGS_log_dir, "/", Name(), ".flags");
  std::ofstream fout(export_file);
  CHECK(fout) << "Cannot open file " << export_file;

  std::vector<gflags::CommandLineFlagInfo> flags;
  gflags::GetAllFlags(&flags);
  for (const auto& flag : flags) {
    fout << "# " << flag.type << ", default=" << flag.default_value << "\n"
         << "# " << flag.description << "\n"
         << "--" << flag.name << "=" << flag.current_value << "\n"
         << std::endl;
  }
}

int JmcAutoApp::Spin() {
  auto status = Init();
  if (!status.ok()) {
    AERROR << Name() << " Init failed: " << status;
    return -1;
  }

  //需改为MDC代码
  //std::unique_ptr<ros::AsyncSpinner> spinner;
  //if (callback_thread_num_ > 1) {
  //  spinner = std::unique_ptr<ros::AsyncSpinner>(
  //      new ros::AsyncSpinner(callback_thread_num_));
  //}

  status = Start();
  if (!status.ok()) {
    AERROR << Name() << " Start failed: " << status;
    return -2;
  }
  //将读取的flag配置写到log文件中
  ExportFlags();

  //ros::Start以及ros::spin，需换成MDC代码
  //if (spinner) {
  //  spinner->start();
  //} else {
  //  ros::spin();
  //}

  //退出程序，需更改为MDC代码，暂没有退出进程代码
  //ros::waitForShutdown();
  //Stop();
  AINFO << Name() << " exited.";
  return 0;
}

void jmc_auto_app_sigint_handler(int signal_num) {
  AINFO << "Received signal: " << signal_num;
  if (signal_num != SIGINT) {
    return;
  }
  bool static is_stopping = false;
  if (is_stopping) {
    return;
  }
  is_stopping = true;
  //需改为MDC代码
  //ros::shutdown();
}

}  // namespace common
}  // namespace jmc_auto
