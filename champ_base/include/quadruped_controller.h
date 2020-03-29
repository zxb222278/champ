#ifndef QUADRUPED_CONTROLLER_H
#define QUADRUPED_CONTROLLER_H

#include <quadruped_base/quadruped_components.h>
#include <body_controller/body_controller.h>
#include <leg_controller/leg_controller.h>
#include <kinematics/kinematics.h>
#include <odometry/odometry.h>

class QuadrupedController
{
    ros::NodeHandle nh_;
    ros::Subscriber cmd_vel_subscriber_; 
    ros::Publisher joints_publisher_;   

    champ::GaitConfig gait_config_;
        
    champ::QuadrupedBase base_;
    champ::BodyController body_controller_;
    champ::LegController leg_controller_;
    champ::Kinematics kinematics_;
    champ::Odometry odometry_;

    void publishJoints_(float joints[12]);

    public:
        QuadrupedController();
};

#endif