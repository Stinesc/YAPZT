#ifndef TEST_EVENT_H
#define TEST_EVENT_H
#include <QtTest>
#include "event.h"
class Test_Event : public QObject {
    Q_OBJECT
private slots:
    void NameOfTask_data();
    void StartDate_data();
    void FinishDate_data();
    void StartTime_data();
    void FinishTime_data();
    void RepeatOfTask_data();
    void RemindOfTask_data();
    void RemindComplete_data();
    void RemindDate_data();
    void RemindTime_data();
    void DescriptionOfTask_data();
    void Color_data();
    void NameOfTask();
    void StartDate();
    void FinishDate();
    void StartTime();
    void FinishTime();
    void RepeatOfTask();
    void RemindOfTask();
    void RemindComplete();
    void RemindDate();
    void RemindTime();
    void DescriptionOfTask();
    void Color();
};
#endif // TEST_EVENT_H
