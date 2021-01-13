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

std::string leoa::Name() const { return FLAGS_leo_module_name; }
std::string leoa::NodeName() const { return FLAGS_leoa_node_name; }

Status leoa::Init() {
    AdapterManager::Init(FLAGS_leo_adapter_config_filename);
    AINFO << "Hoooray! Successfully initialized.";

    if (!common::util::GetProtoFromFile(FLAGS_leo_conf_file, &leo_conf_)) {
        //AERROR << "Ooohwa~ unable to load leo conf file: " << FLAGS_leo_conf_file;
        return Status(ErrorCode::LEO_ERROR, "Ooohwa~ unable to load leo conf file!");
}

    AINFO << "The leo conf file is loaded: " << FLAGS_leo_conf_file;
    ADEBUG << "Leo_conf:" << leo_conf_.ShortDebugString();

    ReadGroupFile(FLAGS_leo_group_filename);
    return Status::OK();
}

Status leoa::Start() {
    const double duration = 1.0 / FLAGS_leoa_freq;
    timer_ = AdapterManager::CreateTimer(ros::Duration(duration),
                                           &leoa::OnTimer, this);

    return Status::OK();
}

void leoa::PublishLeoa() {
    Leoa leoa;
    Whether = !Whether;
    int RandNumber = rand() % 14;
    if (leo_conf_.enable_headerlog()) {
        AdapterManager::FillLeoaHeader("leo", &leoa);
    }

    leoa.set_node_name(NodeName());
    leoa.set_whether(Whether);
    leoa.set_sap(group_[RandNumber].sap_number());

    AdapterManager::PublishLeoa(leoa);

    //AINFO << leoa.header().timestamp_sec();
    AINFO << group_[RandNumber].name() << "的SAP号为:" << leoa.sap();
    ADEBUG << leoa.ShortDebugString();
}

void leoa::OnTimer(const ros::TimerEvent &) {
    PublishLeoa();
}

void leoa::ReadGroupFile(const std::string& filename) {
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

void leoa::Stop() { timer_.stop(); }
}
}

JMC_AUTO_MAIN(jmc_auto::leo::leoa);
