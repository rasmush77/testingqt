#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);

    Qt::WindowFlags flags = windowFlags();
    flags |= Qt::FramelessWindowHint;
    setWindowFlags(flags);

    currentSpeed = QString("%1 km/h").arg(speed);
    ui->currentSpeedLabel->setText(currentSpeed);

    currentRange = QString("%1 km").arg(range);
    ui->rangeBox->setText(currentRange);


    ui->battProgBar->setValue(100);
}

Home::~Home()
{
    delete ui;
}


void Home::on_playButton_clicked()
{
    timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(Speeder()));
    timer1->start(500);

    timer2 = new QTimer(this);
    connect(timer2, SIGNAL(timeout()), this, SLOT(BatteryEater()));
    timer2->start(5000);

    timer3 = new QTimer(this);
    connect(timer3, SIGNAL(timeout()), this, SLOT(RangeTracker()));
    timer3->start(2500);
}

void Home::on_stopButton_clicked()
{
    speed = 0;
    range = 0;
    battPercent = 100;

    currentSpeed = QString("%1 km/h").arg(speed);
    ui->currentSpeedLabel->setText(currentSpeed);

    currentRange = QString("%1 km").arg(range);
    ui->rangeBox->setText(currentRange);

    ui->battProgBar->setValue(battPercent);

    timer1->stop();
    timer2->stop();
    timer3->stop();
}

void Home::Speeder()
{
    speed += 5;
    currentSpeed = QString("%1 km/h").arg(speed);
    ui->currentSpeedLabel->setText(currentSpeed);

    if (speed == 90)
        timer1->stop();

}

void Home::BatteryEater()
{
    battPercent -= 1;
    ui->battProgBar->setValue(battPercent);

    if (battPercent == 0)
        timer2->stop();
}

void Home::RangeTracker()
{
    range += 2;
    currentRange = QString("%1 km").arg(range);
    ui->rangeBox->setText(currentRange);

}
