/**
 * @file /include/tp_gui/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef tp_gui_QNODE_HPP_
#define tp_gui_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/BatteryState.h>
#include <std_msgs/String.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>


/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace tp_gui {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
  float voltage, current, charge, capacity, percentage;
  uint psStatus, psHealth, psTechnology;
	virtual ~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
	void run();
  void sendDirection(const std::string type);

	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	void log( const LogLevel &level, const std::string &msg);

Q_SIGNALS:
	void loggingUpdated();
    void rosShutdown();
    void batteriesUpdated();

private:
	int init_argc;
	char** init_argv;
  ros::Subscriber batteries_subscriber;
  ros::Publisher direct_publisher;
  geometry_msgs::Twist twist;
  QStringListModel logging_model;
  void twistUpdate(float x, float y, float z, float th);
  void batteriesCallback(const sensor_msgs::BatteryState& msg);
};

}  // namespace tp_gui

#endif /* tp_gui_QNODE_HPP_ */
