/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_3;
    QListView *view_logging;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_percentage;
    QLabel *label_voltage;
    QLabel *label_current;
    QLabel *label_charge;
    QLabel *label_capacity;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_percentage_value;
    QLabel *label_voltage_value;
    QLabel *label_current_value;
    QLabel *label_charge_value;
    QLabel *label_capacity_value;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_power_supply;
    QLabel *label_ps_status;
    QLabel *label_ps_health;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLabel *label_power_supply_status;
    QLabel *label_power_supply_health;
    QLabel *label_power_supply_technology;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QDockWidget *dock_status;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *line_edit_topic;
    QLabel *label;
    QCheckBox *checkbox_remember_settings;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *line_edit_master;
    QLabel *label_3;
    QCheckBox *checkbox_use_environment;
    QPushButton *button_connect;
    QLineEdit *line_edit_host;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *button_up;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *button_left;
    QPushButton *button_stop;
    QPushButton *button_right;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *button_down;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *quit_button;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(944, 625);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QString::fromUtf8("tab_status"));
        verticalLayout_2 = new QVBoxLayout(tab_status);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_12 = new QGroupBox(tab_status);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_12);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QString::fromUtf8("view_logging"));
        view_logging->setMinimumSize(QSize(0, 279));

        gridLayout_3->addWidget(view_logging, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_12);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Waree"));
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_percentage = new QLabel(groupBox_12);
        label_percentage->setObjectName(QString::fromUtf8("label_percentage"));

        verticalLayout_5->addWidget(label_percentage);

        label_voltage = new QLabel(groupBox_12);
        label_voltage->setObjectName(QString::fromUtf8("label_voltage"));

        verticalLayout_5->addWidget(label_voltage);

        label_current = new QLabel(groupBox_12);
        label_current->setObjectName(QString::fromUtf8("label_current"));

        verticalLayout_5->addWidget(label_current);

        label_charge = new QLabel(groupBox_12);
        label_charge->setObjectName(QString::fromUtf8("label_charge"));

        verticalLayout_5->addWidget(label_charge);

        label_capacity = new QLabel(groupBox_12);
        label_capacity->setObjectName(QString::fromUtf8("label_capacity"));

        verticalLayout_5->addWidget(label_capacity);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_percentage_value = new QLabel(groupBox_12);
        label_percentage_value->setObjectName(QString::fromUtf8("label_percentage_value"));
        label_percentage_value->setMinimumSize(QSize(70, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("URW Bookman L"));
        font1.setBold(true);
        font1.setWeight(75);
        label_percentage_value->setFont(font1);

        verticalLayout_6->addWidget(label_percentage_value);

        label_voltage_value = new QLabel(groupBox_12);
        label_voltage_value->setObjectName(QString::fromUtf8("label_voltage_value"));
        label_voltage_value->setMinimumSize(QSize(70, 0));
        label_voltage_value->setFont(font1);

        verticalLayout_6->addWidget(label_voltage_value);

        label_current_value = new QLabel(groupBox_12);
        label_current_value->setObjectName(QString::fromUtf8("label_current_value"));
        label_current_value->setMinimumSize(QSize(70, 0));
        label_current_value->setFont(font1);

        verticalLayout_6->addWidget(label_current_value);

        label_charge_value = new QLabel(groupBox_12);
        label_charge_value->setObjectName(QString::fromUtf8("label_charge_value"));
        label_charge_value->setMinimumSize(QSize(70, 0));
        label_charge_value->setFont(font1);

        verticalLayout_6->addWidget(label_charge_value);

        label_capacity_value = new QLabel(groupBox_12);
        label_capacity_value->setObjectName(QString::fromUtf8("label_capacity_value"));
        label_capacity_value->setMinimumSize(QSize(70, 0));
        label_capacity_value->setFont(font1);

        verticalLayout_6->addWidget(label_capacity_value);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_power_supply = new QLabel(groupBox_12);
        label_power_supply->setObjectName(QString::fromUtf8("label_power_supply"));

        verticalLayout_7->addWidget(label_power_supply);

        label_ps_status = new QLabel(groupBox_12);
        label_ps_status->setObjectName(QString::fromUtf8("label_ps_status"));

        verticalLayout_7->addWidget(label_ps_status);

        label_ps_health = new QLabel(groupBox_12);
        label_ps_health->setObjectName(QString::fromUtf8("label_ps_health"));

        verticalLayout_7->addWidget(label_ps_health);

        label_6 = new QLabel(groupBox_12);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_7->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_7 = new QLabel(groupBox_12);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(70, 26));

        verticalLayout_8->addWidget(label_7);

        label_power_supply_status = new QLabel(groupBox_12);
        label_power_supply_status->setObjectName(QString::fromUtf8("label_power_supply_status"));
        label_power_supply_status->setMinimumSize(QSize(100, 0));
        label_power_supply_status->setFont(font1);

        verticalLayout_8->addWidget(label_power_supply_status);

        label_power_supply_health = new QLabel(groupBox_12);
        label_power_supply_health->setObjectName(QString::fromUtf8("label_power_supply_health"));
        label_power_supply_health->setMinimumSize(QSize(100, 0));
        label_power_supply_health->setFont(font1);

        verticalLayout_8->addWidget(label_power_supply_health);

        label_power_supply_technology = new QLabel(groupBox_12);
        label_power_supply_technology->setObjectName(QString::fromUtf8("label_power_supply_technology"));
        label_power_supply_technology->setMinimumSize(QSize(100, 0));
        label_power_supply_technology->setFont(font1);

        verticalLayout_8->addWidget(label_power_supply_technology);


        horizontalLayout->addLayout(verticalLayout_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_12);

        tab_manager->addTab(tab_status, QString());

        hboxLayout->addWidget(tab_manager);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 944, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);
        dock_status = new QDockWidget(MainWindowDesign);
        dock_status->setObjectName(QString::fromUtf8("dock_status"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dock_status->sizePolicy().hasHeightForWidth());
        dock_status->setSizePolicy(sizePolicy2);
        dock_status->setMinimumSize(QSize(382, 561));
        dock_status->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(dockWidgetContents_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QString::fromUtf8("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        gridLayout->addWidget(line_edit_topic, 5, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QString::fromUtf8("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_remember_settings, 7, 0, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(170, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QString::fromUtf8("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QString::fromUtf8("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_use_environment, 6, 0, 1, 2);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));
        button_connect->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(button_connect, 8, 1, 1, 1);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QString::fromUtf8("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_3 = new QSpacerItem(20, 233, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        button_up = new QPushButton(frame);
        button_up->setObjectName(QString::fromUtf8("button_up"));

        horizontalLayout_5->addWidget(button_up);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        button_left = new QPushButton(frame);
        button_left->setObjectName(QString::fromUtf8("button_left"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(button_left->sizePolicy().hasHeightForWidth());
        button_left->setSizePolicy(sizePolicy4);
        button_left->setMinimumSize(QSize(109, 0));

        horizontalLayout_3->addWidget(button_left);

        button_stop = new QPushButton(frame);
        button_stop->setObjectName(QString::fromUtf8("button_stop"));

        horizontalLayout_3->addWidget(button_stop);

        button_right = new QPushButton(frame);
        button_right->setObjectName(QString::fromUtf8("button_right"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(button_right->sizePolicy().hasHeightForWidth());
        button_right->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(button_right);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        button_down = new QPushButton(frame);
        button_down->setObjectName(QString::fromUtf8("button_down"));

        horizontalLayout_4->addWidget(button_down);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_4);

        quit_button = new QPushButton(frame);
        quit_button->setObjectName(QString::fromUtf8("quit_button"));
        sizePolicy3.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(quit_button);


        verticalLayout->addWidget(frame);

        dock_status->setWidget(dockWidgetContents_2);
        MainWindowDesign->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dock_status);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));
        QObject::connect(quit_button, SIGNAL(clicked()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowDesign", "Batteries:", 0, QApplication::UnicodeUTF8));
        label_percentage->setText(QApplication::translate("MainWindowDesign", "Percentage [%]=", 0, QApplication::UnicodeUTF8));
        label_voltage->setText(QApplication::translate("MainWindowDesign", "voltage [V]=", 0, QApplication::UnicodeUTF8));
        label_current->setText(QApplication::translate("MainWindowDesign", "curent [A]=", 0, QApplication::UnicodeUTF8));
        label_charge->setText(QApplication::translate("MainWindowDesign", "charge [Ah]=", 0, QApplication::UnicodeUTF8));
        label_capacity->setText(QApplication::translate("MainWindowDesign", "capacity [Ah]=", 0, QApplication::UnicodeUTF8));
        label_percentage_value->setText(QString());
        label_voltage_value->setText(QString());
        label_current_value->setText(QString());
        label_charge_value->setText(QString());
        label_capacity_value->setText(QString());
        label_power_supply->setText(QApplication::translate("MainWindowDesign", "Power Supply:", 0, QApplication::UnicodeUTF8));
        label_ps_status->setText(QApplication::translate("MainWindowDesign", "Status=", 0, QApplication::UnicodeUTF8));
        label_ps_health->setText(QApplication::translate("MainWindowDesign", "Health=", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowDesign", "Technology=", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_power_supply_status->setText(QString());
        label_power_supply_health->setText(QString());
        label_power_supply_technology->setText(QString());
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Logging and Battery Status", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", 0, QApplication::UnicodeUTF8));
        dock_status->setWindowTitle(QApplication::translate("MainWindowDesign", "Command Panel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", 0, QApplication::UnicodeUTF8));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", 0, QApplication::UnicodeUTF8));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", 0, QApplication::UnicodeUTF8));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", 0, QApplication::UnicodeUTF8));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", 0, QApplication::UnicodeUTF8));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowDesign", "                          Controls:", 0, QApplication::UnicodeUTF8));
        button_up->setText(QApplication::translate("MainWindowDesign", "Up", 0, QApplication::UnicodeUTF8));
        button_left->setText(QApplication::translate("MainWindowDesign", "Left", 0, QApplication::UnicodeUTF8));
        button_stop->setText(QApplication::translate("MainWindowDesign", "Stop", 0, QApplication::UnicodeUTF8));
        button_right->setText(QApplication::translate("MainWindowDesign", "Right", 0, QApplication::UnicodeUTF8));
        button_down->setText(QApplication::translate("MainWindowDesign", "Down", 0, QApplication::UnicodeUTF8));
        quit_button->setText(QApplication::translate("MainWindowDesign", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
