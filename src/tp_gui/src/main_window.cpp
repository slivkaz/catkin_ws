/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/tp_gui/main_window.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace tp_gui {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
	ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
	setWindowIcon(QIcon(":/images/icon.png"));
	ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

	/*********************
	** Logging
  **********************/
	ui.view_logging->setModel(qnode.loggingModel());
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));

    /*********************
    ** Auto Start
    **********************/
    if ( ui.checkbox_remember_settings->isChecked() ) {
        on_button_connect_clicked(true);
    }

    QObject::connect(ui.button_left, SIGNAL(clicked()), this, SLOT(moveLeft()));
    QObject::connect(ui.button_right, SIGNAL(clicked()), this, SLOT(moveRight()));
    QObject::connect(ui.button_up, SIGNAL(clicked()), this, SLOT(moveUp()));
    QObject::connect(ui.button_down, SIGNAL(clicked()), this, SLOT(moveDown()));
    QObject::connect(ui.button_stop, SIGNAL(clicked()), this, SLOT(moveStop()));

    QObject::connect(&qnode, SIGNAL(batteriesUpdated()), this, SLOT(getBatteries()));
}

MainWindow::~MainWindow() {}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the ros master.");
	msgBox.exec();
    close();
}

// Timovy projekt part
//

void MainWindow::getBatteries() {

  std::string percentage, voltage, current, charge, capacity, status, health, technology;

  percentage = std::to_string(qnode.percentage);
  voltage = std::to_string(qnode.voltage);
  current = std::to_string(qnode.current);
  charge = std::to_string(qnode.charge);
  capacity = std::to_string(qnode.capacity);

  switch(qnode.psStatus) {
    case 0:
      status = "UNKNOWM";
      break;
    case 1:
      status = "CHARGING";
      break;
    case 2:
      status = "DISCHARGING";
      break;
    case 3:
      status = "NOT_CHARGING";
      break;
    case 4:
      status = "FULL";
      break;
    default:
      status = "-";
  }

  switch(qnode.psHealth) {
    case 0:
      health = "UNKNOWM";
      break;
    case 1:
      health = "GOOD";
      break;
    case 2:
      health = "OVERHEAT";
      break;
    case 3:
      health = "DEAD";
      break;
    case 4:
      health = "OVERVOLTAGE";
      break;
    case 5:
      health = "UNSPEC_FAILURE";
      break;
    case 6:
      health = "COLD";
      break;
    case 7:
      health = "WATCHDOG_TIMER_EXPIRE";
      break;
    case 8:
      health = "SAFETY_TIMER_EXPIRE";
      break;
    default:
      health = "-";
  }


  switch(qnode.psTechnology) {
    case 0:
      technology = "UNKNOWM";
      break;
    case 1:
      technology = "NIMH";
      break;
    case 2:
      technology = "LION";
      break;
    case 3:
      technology = "LIPO";
      break;
    case 4:
      technology = "LIFE";
      break;
    case 5:
      technology = "NICD";
      break;
    case 6:
      technology = "LIMN";
      break;
    default:
      technology = "-";
  }



  ui.label_percentage_value->setText(QString::fromStdString(percentage));
  ui.label_voltage_value->setText(QString::fromStdString(voltage));
  ui.label_current_value->setText(QString::fromStdString(current));
  ui.label_charge_value->setText(QString::fromStdString(charge));
  ui.label_capacity_value->setText(QString::fromStdString(capacity));

  ui.label_power_supply_status->setText(QString::fromStdString(status));
  ui.label_power_supply_health->setText(QString::fromStdString(health));
  ui.label_power_supply_technology->setText(QString::fromStdString(technology));
}


//

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 */

void MainWindow::on_button_connect_clicked(bool check ) {
	if ( ui.checkbox_use_environment->isChecked() ) {
		if ( !qnode.init() ) {
			showNoMasterMessage();
		} else {
			ui.button_connect->setEnabled(false);
		}
	} else {
		if ( ! qnode.init(ui.line_edit_master->text().toStdString(),
				   ui.line_edit_host->text().toStdString()) ) {
			showNoMasterMessage();
		} else {
			ui.button_connect->setEnabled(false);
			ui.line_edit_master->setReadOnly(true);
			ui.line_edit_host->setReadOnly(true);
			ui.line_edit_topic->setReadOnly(true);
		}
	}
}


void MainWindow::on_checkbox_use_environment_stateChanged(int state) {
	bool enabled;
	if ( state == 0 ) {
		enabled = true;
	} else {
		enabled = false;
	}
	ui.line_edit_master->setEnabled(enabled);
	ui.line_edit_host->setEnabled(enabled);
	//ui.line_edit_topic->setEnabled(enabled);
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/

/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView() {
        ui.view_logging->scrollToBottom();
}

void MainWindow::moveLeft() {
        qnode.sendDirection("left");
    }

void MainWindow::moveRight() {
        qnode.sendDirection("right");
    }

void MainWindow::moveUp() {
        qnode.sendDirection("up");
    }

void MainWindow::moveDown() {
        qnode.sendDirection("down");
    }

void MainWindow::moveStop() {
        qnode.sendDirection("stop");
    }


/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros Package", "tp_gui");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();

    ui.line_edit_master->setText(master_url);
    ui.line_edit_host->setText(host_url);

    bool remember = settings.value("remember_settings", false).toBool();
    ui.checkbox_remember_settings->setChecked(remember);
    bool checked = settings.value("use_environment_variables", false).toBool();
    ui.checkbox_use_environment->setChecked(checked);
    if ( checked ) {
    	ui.line_edit_master->setEnabled(false);
    	ui.line_edit_host->setEnabled(false);
    }
}

void MainWindow::WriteSettings() {
    QSettings settings("Qt-Ros Package", "tp_gui");
    settings.setValue("master_url",ui.line_edit_master->text());
    settings.setValue("host_url",ui.line_edit_host->text());
    settings.setValue("use_environment_variables",QVariant(ui.checkbox_use_environment->isChecked()));
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
    settings.setValue("remember_settings",QVariant(ui.checkbox_remember_settings->isChecked()));

}

void MainWindow::closeEvent(QCloseEvent *event)
{
	WriteSettings();
	QMainWindow::closeEvent(event);
}

}  // namespace tp_gui

