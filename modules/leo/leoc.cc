#include "modules/leo/leo.h"

#include "modules/leo/common/leo_gflags.h"
#include "modules/common/adapters/adapter_manager.h"
#include "modules/common/adapters/proto/adapter_config.pb.h"
#include "modules/common/log.h"
#include "modules/common/time/time.h"
#include "modules/common/util/util.h"
#include "modules/common/util/string_tokenizer.h"

namespace jmc_auto {
namespace leo {

using jmc_auto::common::ErrorCode;
using jmc_auto::common::Status;
using jmc_auto::common::adapter::AdapterManager;
using jmc_auto::common::time::Clock;

std::string leoc::Name() const { return FLAGS_leo_module_name; }
std::string leoc::NodeName() const { return FLAGS_leoc_node_name; }

Status leoc::Init() {
    AdapterManager::Init(FLAGS_leo_adapter_config_filename);
    AINFO << "Hoooray! Successfully initialized.";

    if (!common::util::GetProtoFromFile(FLAGS_leo_conf_file, &leo_conf_)) {
        //AERROR << "Ooohwa~ unable to load leo conf file: " << FLAGS_leo_conf_file;
        return Status(ErrorCode::LEO_ERROR, "Ooohwa~ unable to load leo conf file!");
}

    AINFO << "The leo conf file is loaded: " << FLAGS_leo_conf_file;
    ADEBUG << "Leo_conf:" << leo_conf_.ShortDebugString();

    if (!AdapterManager::GetLeoa())
    {
        AERROR << "leo_a is not initialized.";
    }

    if (!AdapterManager::GetLeob())
    {
        AERROR << "leo_b is not initialized.";
    }

    return Status::OK();
}

Status leoc::Start() {
    const double duration = 1.0 / FLAGS_leoc_freq;
    timer_ = AdapterManager::CreateTimer(ros::Duration(duration),
                                         &leoc::OnTimer, this);

    return Status::OK();
}

Status leoc::CheckInput() {
    AdapterManager::Observe();

    auto leoa_adapter = AdapterManager::GetLeoa();
    if (leoa_adapter->Empty())
    {
        AINFO << "No leo_a msg yet. ";
        return Status(ErrorCode::LEO_ERROR, "No leoa msg!");
    }
    leoa_ = leoa_adapter->GetLatestObserved();

    auto leob_adapter = AdapterManager::GetLeob();
    if (leob_adapter->Empty())
    {
        AINFO << "No leo_b msg yet. ";
        return Status(ErrorCode::LEO_ERROR, "No leob msg!");
    }
    leob_ = leob_adapter->GetLatestObserved();

    return Status::OK();
}

void leoc::PublishLeoc() {
    Leoc leoc;
    if (leo_conf_.enable_headerlog()) {
        AdapterManager::FillLeocHeader("leo", &leoc);
    }

    leoc.set_node_name(leoa_.node_name()+leob_.node_name());
    leoc.set_whether(leoa_.whether() | leob_.whether());

    if (FLAGS_calculate == "a") {
        leoc.set_number(double((long int)leoa_.sap() ^ (long int)leob_.phone()));
        AINFO << "a和b异或的结果:" << leoc.number();
    }
    else if (FLAGS_calculate == "b") {
        leoc.set_number(double((long int)leoa_.sap() | (long int)leob_.phone()));
        AINFO << "a和b或的结果:" << leoc.number();
    }
    else {
        AERROR << "Read conf file FLAGS_calculate error:" << FLAGS_calculate;
    }

    AdapterManager::PublishLeoc(leoc);

    //AINFO << leoc.header().timestamp_sec();
    ADEBUG << leoc.ShortDebugString();
}

void leoc::OnTimer(const ros::TimerEvent &) {
    Status status = CheckInput();
    if (!status.ok())
    {
        AERROR << "Failed to produce msg:" << status.error_message();
    }
    PublishLeoc();
}

void leoc::Stop() { timer_.stop(); }
}
}

JMC_AUTO_MAIN(jmc_auto::leo::leoc);
