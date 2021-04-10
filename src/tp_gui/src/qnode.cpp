/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/BatteryState.h>
#include <sstream>
#include "../include/tp_gui/qnode.hpp"



/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace tp_gui {

/*****************************************************************************
** Implementation
*****************************************************************************/

QNode::QNode(int argc, char** argv ) :
	init_argc(argc),
	init_argv(argv)
	{}

QNode::~QNode() {
    if(ros::isStarted()) {
      ros::shutdown(); // explicitly needed since we use ros::start();
      ros::waitForShutdown();
    }
	wait();
}

bool QNode::init() {
	ros::init(init_argc,init_argv,"tp_gui");
	if ( ! ros::master::check() ) {
		return false;
	}
	ros::start(); // explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;
	// Add your ros communications here.
  direct_publisher = n.advertise<geometry_msgs::Twist>("cmd_vel", 1);
  geometry_msgs::Twist twist;
  batteries_subscriber = n.subscribe("battery_state", 1000, &QNode::batteriesCallback, this);

	start();
	return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url) {
	std::map<std::string,std::string> remappings;
	remappings["__master"] = master_url;
	remappings["__hostname"] = host_url;
  std::string psStatus(""), psHealth(""), psTechnology("");
	ros::init(remappings,"tp_gui");
	if ( ! ros::master::check() ) {
		return false;
	}
	ros::start(); // explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;
	// Add your ros communications here.
  direct_publisher = n.advertise<geometry_msgs::Twist>("cmd_vel", 1);
  batteries_subscriber = n.subscribe("battery_state", 1000, &QNode::batteriesCallback, this);

  start();
	return true;
}

void QNode::run() {
	ros::Rate loop_rate(1);
	int count = 0;

	while ( ros::ok() ) {
		ros::spinOnce();
		loop_rate.sleep();
		++count;
	}
	std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
	Q_EMIT rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}

void QNode::batteriesCallback(const sensor_msgs::BatteryState& msg)
{
  ROS_INFO("I heard: voltage -[%f], current -[%f], percentage-[%f]", msg.voltage, msg.current, msg.percentage);
  this->percentage = msg.percentage;
  this->voltage = msg.voltage;
  this->current = msg.current;
  this->charge = msg.charge;
  this->capacity = msg.capacity;
  this->psStatus = msg.power_supply_status;
  this->psHealth = msg.power_supply_health;
  this->psTechnology = msg.power_supply_technology;
  Q_EMIT batteriesUpdated();
}


void QNode::sendDirection(std::string type) {
  if ( ! type.compare("left") ) {
    std::cout << "TURNING LEFT";
    twistUpdate(0, 0, 0, 1);
    this->direct_publisher.publish(twist);
    ros::spinOnce();
    log(Info,std::string("Moving in left direction."));
  } else if ( ! type.compare("right") ) {
    std::cout << "TURNING RIGHT";
    twistUpdate(0, 0, 0, -1);
    this->direct_publisher.publish(twist);
    ros::spinOnce();
    log(Info,std::string("Moving in right direction."));
  } else if ( ! type.compare("up") ) {
    std::cout << "TURNING UP";
    twistUpdate(1, 0, 0, 0);
    this->direct_publisher.publish(twist);
    ros::spinOnce();
    log(Info,std::string("Moving in up direction."));
  } else if ( ! type.compare("down") ) {
    std::cout << "TURNING DOWN";
    twistUpdate(-1, 0, 0, 0);
    this->direct_publisher.publish(twist);
    ros::spinOnce();
    log(Info,std::string("Moving in down direction."));
  } else if ( ! type.compare("stop") ) {
    std::cout << "STOPPING";
    twistUpdate(0, 0, 0, 0);
    this->direct_publisher.publish(twist);
    ros::spinOnce();
    log(Info,std::string("Stopped."));
  } else {
    std::cout << "WRONG ARGUMENT IN sendDirection().";
  }
}

void QNode::twistUpdate(float x, float y, float z, float th) {
  float speed(0.5);
  float turn(1.0);

  this->twist.linear.x = x * speed;
  this->twist.linear.y = y * speed;
  this->twist.linear.z = z * speed;

  twist.angular.x = 0;
  twist.angular.y = 0;
  twist.angular.z = th * turn;
}

void QNode::log( const LogLevel &level, const std::string &msg) {
	logging_model.insertRows(logging_model.rowCount(),1);
  std::stringstream logging_model_msg;
	switch ( level ) {
		case(Debug) : {
				ROS_DEBUG_STREAM(msg);
        logging_model_msg << "[DEBUG] [" << ros::Time::now().toSec() << "]: " << msg;
				break;
		}
		case(Info) : {
				ROS_INFO_STREAM(msg);
        logging_model_msg << "[INFO] [" << ros::Time::now().toSec() << "]: " << msg;
				break;
		}
		case(Warn) : {
				ROS_WARN_STREAM(msg);
        logging_model_msg << "[WARN] [" << ros::Time::now().toSec() << "]: " << msg;
				break;
		}
		case(Error) : {
				ROS_ERROR_STREAM(msg);
        logging_model_msg << "[ERROR] [" << ros::Time::now().toSec() << "]: " << msg;
				break;
		}
		case(Fatal) : {
				ROS_FATAL_STREAM(msg);
        logging_model_msg << "[FATAL] [" << ros::Time::now().toSec() << "]: " << msg;
				break;
		}
	}
	QVariant new_row(QString(logging_model_msg.str().c_str()));
	logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
	Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}

}  // namespace tp_gui
