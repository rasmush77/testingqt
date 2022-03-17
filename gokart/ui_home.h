/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QProgressBar *battProgBar;
    QPushButton *pauseButton;
    QPushButton *playButton;
    QPushButton *stopButton;
    QLabel *currentSpeedLabel;
    QLabel *speedLabel;
    QLabel *battCapLabel;
    QTextBrowser *rangeBox;
    QLabel *rangeLabel;
    QTextBrowser *modeBox;
    QLabel *modeLabel;
    QWidget *ddTab;
    QWidget *batteryTab;
    QWidget *mpTab;
    QWidget *alarmTab;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(480, 272);
        Home->setMaximumSize(QSize(480, 272));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 480, 272));
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        homeTab = new QWidget();
        homeTab->setObjectName(QString::fromUtf8("homeTab"));
        battProgBar = new QProgressBar(homeTab);
        battProgBar->setObjectName(QString::fromUtf8("battProgBar"));
        battProgBar->setGeometry(QRect(10, 200, 281, 31));
        battProgBar->setValue(24);
        pauseButton = new QPushButton(homeTab);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(360, 200, 51, 41));
        pauseButton->setStyleSheet(QString::fromUtf8("#pauseButton \n"
"{\n"
"	background-color: transparent;\n"
"	border-image: url(:/img/pause_icon_96.png);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        playButton = new QPushButton(homeTab);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(310, 200, 41, 41));
        playButton->setStyleSheet(QString::fromUtf8("#playButton \n"
"{\n"
"	background-color: transparent;\n"
"	border-image: url(:/img/play_icon_100.png);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        stopButton = new QPushButton(homeTab);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(420, 200, 41, 41));
        stopButton->setStyleSheet(QString::fromUtf8("#stopButton \n"
"{\n"
"	background-color: transparent;\n"
"	border-image: url(:/img/stop_icon_100.png);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        currentSpeedLabel = new QLabel(homeTab);
        currentSpeedLabel->setObjectName(QString::fromUtf8("currentSpeedLabel"));
        currentSpeedLabel->setGeometry(QRect(10, 30, 201, 61));
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        currentSpeedLabel->setFont(font);
        currentSpeedLabel->setTextFormat(Qt::PlainText);
        speedLabel = new QLabel(homeTab);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setGeometry(QRect(10, 10, 67, 17));
        battCapLabel = new QLabel(homeTab);
        battCapLabel->setObjectName(QString::fromUtf8("battCapLabel"));
        battCapLabel->setGeometry(QRect(10, 180, 191, 17));
        rangeBox = new QTextBrowser(homeTab);
        rangeBox->setObjectName(QString::fromUtf8("rangeBox"));
        rangeBox->setGeometry(QRect(360, 30, 91, 41));
        rangeLabel = new QLabel(homeTab);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));
        rangeLabel->setGeometry(QRect(360, 10, 67, 17));
        modeBox = new QTextBrowser(homeTab);
        modeBox->setObjectName(QString::fromUtf8("modeBox"));
        modeBox->setGeometry(QRect(360, 100, 91, 41));
        modeLabel = new QLabel(homeTab);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));
        modeLabel->setGeometry(QRect(360, 80, 67, 17));
        tabWidget->addTab(homeTab, QString());
        ddTab = new QWidget();
        ddTab->setObjectName(QString::fromUtf8("ddTab"));
        tabWidget->addTab(ddTab, QString());
        batteryTab = new QWidget();
        batteryTab->setObjectName(QString::fromUtf8("batteryTab"));
        tabWidget->addTab(batteryTab, QString());
        mpTab = new QWidget();
        mpTab->setObjectName(QString::fromUtf8("mpTab"));
        tabWidget->addTab(mpTab, QString());
        alarmTab = new QWidget();
        alarmTab->setObjectName(QString::fromUtf8("alarmTab"));
        tabWidget->addTab(alarmTab, QString());
        Home->setCentralWidget(centralwidget);

        retranslateUi(Home);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Home", nullptr));
        pauseButton->setText(QString());
        playButton->setText(QString());
        stopButton->setText(QString());
        currentSpeedLabel->setText(QApplication::translate("Home", "90 km/h", nullptr));
        speedLabel->setText(QApplication::translate("Home", "Speed:", nullptr));
        battCapLabel->setText(QApplication::translate("Home", "Battery capacity remaining:", nullptr));
        rangeBox->setHtml(QApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">69 km</span></p></body></html>", nullptr));
        rangeLabel->setText(QApplication::translate("Home", "Range:", nullptr));
        modeBox->setHtml(QApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Race</span></p></body></html>", nullptr));
        modeLabel->setText(QApplication::translate("Home", "Mode:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("Home", "Home", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ddTab), QApplication::translate("Home", "Driving Details", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(batteryTab), QApplication::translate("Home", "Battery", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mpTab), QApplication::translate("Home", "Music Player", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(alarmTab), QApplication::translate("Home", "Alarms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
