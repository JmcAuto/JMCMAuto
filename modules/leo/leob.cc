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

std::string leob::Name() const { return FLAGS_leo_module_name; }
std::string leob::NodeName() const { return FLAGS_leob_node_name; }

Status leob::Init() {
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

    ReadGroupFile(FLAGS_leo_group_filename);
    return Status::OK();
}

Status leob::Start() {
    const double duration = 1.0 / FLAGS_leob_freq;
    timer_ = AdapterManager::CreateTimer(ros::Duration(duration),
                                         &leob::OnTimer, this);

    return Status::OK();
}

Status leob::CheckInput() {
    AdapterManager::Observe();

    auto leoa_adapter = AdapterManager::GetLeoa();
    if (leoa_adapter->Empty())
    {
        AINFO << "No leo_a msg yet. ";
        return Status(ErrorCode::LEO_ERROR, "No leoa msg!");
    }
    leoa_ = leoa_adapter->GetLatestObserved();

    return Status::OK();
}

void leob::PublishLeob() {
    Leob leob;
    Whether = !Whether;
    if (leo_conf_.enable_headerlog()) {
        AdapterManager::FillLeobHeader("leo", &leob);
    }

    leob.set_node_name(NodeName());
    leob.set_whether(Whether);
    for (unsigned int i = 0; i < group_.size(); ++i) {
        if (group_[i].sap_number() == leoa_.sap()) {
            leob.set_phone(group_[i].phone_number());
            AINFO << group_[i].name()  << "的手机号为:" << leob.phone();
            }
    }

    AdapterManager::PublishLeob(leob);

    //AINFO << leob.header().timestamp_sec();
    ADEBUG << leob.ShortDebugString();
}

void leob::OnTimer(const ros::TimerEvent &) {
    Status status = CheckInput();
    if (!status.ok())
    {
        AERROR << "Failed to produce msg:" << status.error_message();
    }
    PublishLeob();
}

void leob::ReadGroupFile(const std::string& filename) {
    if (!group_.empty()) {
        group_.clear();
    }

    std::ifstream file_in(filename.c_str());
    if (!file_in.is_open()) {
        AERROR << "Leos cannot open trajectory file: " << filename;
        return;
    }

    std::string line;
    // skip the header line.
    getline(file_in, line);

    while (true) {
        getline(file_in, line);
        if (line == "") {
            break;
        }

        auto tokens = jmc_auto::common::util::StringTokenizer::Split(line, ",");
        if (tokens.size() < 3) {
            AERROR << "Leos parse line failed; the data dimension does not match.";
            AERROR << line;
            continue;
        }

        Group group;
        group.set_sap_number(std::stod(tokens[0]));
        group.set_name(tokens[1]);
        group.set_phone_number(std::stod(tokens[2]));
        group_.push_back(group);
    }

    file_in.close();
}

void leob::Stop() { timer_.stop(); }
}
}

JMC_AUTO_MAIN(jmc_auto::leo::leob);
