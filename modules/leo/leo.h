#ifndef MODULES_LEO_LEO_H_
#define MODULES_LEO_LEO_H_

#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <cstdlib>
#include <fstream>

#include "ros/include/ros/ros.h"

#include "modules/leo/proto/leoa.pb.h"
#include "modules/leo/proto/leob.pb.h"
#include "modules/leo/proto/leoc.pb.h"
#include "modules/leo/proto/leo_conf.pb.h"
#include "modules/leo/proto/group.pb.h"
#include "modules/common/jmc_auto_app.h"
#include "modules/common/macro.h"


namespace jmc_auto {
namespace leo{

class leoa : public jmc_auto::common::JmcAutoApp {

    public:
        std::string Name() const override;
        std::string NodeName() const;
        jmc_auto::common::Status Init() override;
        jmc_auto::common::Status Start() override;
        void Stop() override;
    private:
        void PublishLeoa();
        void OnTimer(const ros::TimerEvent &event);
        void ReadGroupFile(const std::string&);
        std::vector<Group> group_;
        LeoConf leo_conf_;
        ros::Timer timer_;
        bool Whether = true;
};

class leob : public jmc_auto::common::JmcAutoApp {

    public:
        std::string Name() const override;
        std::string NodeName() const;
        jmc_auto::common::Status Init() override;
        jmc_auto::common::Status Start() override;
        void Stop() override;
    private:
        jmc_auto::common::Status CheckInput();
        void PublishLeob();
        void OnTimer(const ros::TimerEvent &event);
        void ReadGroupFile(const std::string&);
        std::vector<Group> group_;
        Leoa leoa_;
        LeoConf leo_conf_;
        ros::Timer timer_;
        bool Whether = true;
};

class leoc : public jmc_auto::common::JmcAutoApp {

    public:
        std::string Name() const override;
        std::string NodeName() const;
        jmc_auto::common::Status Init() override;
        jmc_auto::common::Status Start() override;
        void Stop() override;
    private:
        jmc_auto::common::Status CheckInput();
        void PublishLeoc();
        void OnTimer(const ros::TimerEvent &event);
        Leoa leoa_;
        Leob leob_;
        LeoConf leo_conf_;
        ros::Timer timer_;
};

}
}

#endif
