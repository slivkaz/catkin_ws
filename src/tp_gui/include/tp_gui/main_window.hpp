/**
 * @file /include/tp_gui/main_window.hpp
 *
 * @brief Qt based gui for tp_gui.
 *
 * @date November 2010
 **/
#ifndef tp_gui_MAIN_WINDOW_H
#define tp_gui_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace tp_gui {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();

	void ReadSettings(); // Load up qt program settings at startup
	void WriteSettings(); // Save qt program settings when closing

	void closeEvent(QCloseEvent *event); // Overloaded function
	void showNoMasterMessage();
  void showButtonTestMessage();

public Q_SLOTS:
	/******************************************
	** Auto-connections (connectSlotsByName())
	*******************************************/
	void on_actionAbout_triggered();
	void on_button_connect_clicked(bool check );
	void on_checkbox_use_environment_stateChanged(int state);

    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    void moveStop();
    void getBatteries();

private:
	Ui::MainWindowDesign ui;
	QNode qnode;
  QStringListModel* logging_model;
};

}  // namespace tp_gui

#endif // tp_gui_MAIN_WINDOW_H
