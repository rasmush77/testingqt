#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Home; }
QT_END_NAMESPACE

class Home : public QMainWindow
{
    Q_OBJECT

public:
    Home(QWidget *parent = nullptr);
    ~Home();

public slots:
    void Speeder();
    void BatteryEater();
    void RangeTracker();

private slots:
    void on_playButton_clicked();
    void on_stopButton_clicked();

private:
    Ui::Home *ui;

    QString currentSpeed;
    QString currentRange;

    QTimer *timer1;
    QTimer *timer2;
    QTimer *timer3;

    int speed = 0;
    int range = 0;
    int battPercent = 100;

};
#endif // HOME_H
