#include "test_event.h"
void Test_Event::NameOfTask_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QString>("result");
    QTest::newRow("NameOfTask_test1") << "Task" << "Task";
    QTest::newRow("NameOfTask_test2") << "Задача" << "Задача";
    QTest::newRow("NameOfTask_test3") << "ІІІїїїїііЇ" << "ІІІїїїїііЇ";
}
void Test_Event::DescriptionOfTask_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QString>("result");
    QTest::newRow("DescriptionOfTask_test1") << "Description" << "Description";
    QTest::newRow("DescriptionOfTask_test2") << "Описание" << "Описание";
    QTest::newRow("DescriptionOfTask_test3") << "ІІІїїїїііЇ" << "ІІІїїїїііЇ";
}
void Test_Event::StartDate_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QDate>("result");
    QTest::newRow("StartDate_test1") << QString("10.07.1993") << QDate(1993, 7, 10);
    QTest::newRow("StartDate_test2") << QString("07.11.2018") << QDate::fromString("07.11.2018", "dd.MM.yyyy");
    QTest::newRow("StartDate_test3") << QString("01.01.2019") << QDate::fromString("01.01.2019", "dd.MM.yyyy");
}
void Test_Event::FinishDate_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QDate>("result");
    QTest::newRow("FinishDate_test1") << QString("10.07.1993") << QDate(1993, 7, 10);
    QTest::newRow("FinishDate_test2") << QString("07.11.2018") << QDate::fromString("07.11.2018", "dd.MM.yyyy");
    QTest::newRow("FinishDate_test3") << QString("01.01.2019") << QDate::fromString("01.01.2019", "dd.MM.yyyy");
}
void Test_Event::RemindDate_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QDate>("result");
    QTest::newRow("FinishDate_test1") << QString("10.07.1993") << QDate(1993, 7, 10);
    QTest::newRow("FinishDate_test2") << QString("07.11.2018") << QDate::fromString("07.11.2018", "dd.MM.yyyy");
    QTest::newRow("FinishDate_test3") << QString("01.01.2019") << QDate::fromString("01.01.2019", "dd.MM.yyyy");
}
void Test_Event::StartTime_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QTime>("result");
    QTest::newRow("StartTime_test1") << QString("00:00") << QTime(0, 0);
    QTest::newRow("StartTime_test2") << QString("20:10") << QTime::fromString("20:10", "hh:mm");
    QTest::newRow("StartTime_test3") << QString("13:15") << QTime::fromString("13:15", "hh:mm");
}
void Test_Event::FinishTime_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QTime>("result");
    QTest::newRow("FinishTime_test1") << QString("00:00") << QTime(0, 0);
    QTest::newRow("FinishTime_test2") << QString("20:10") << QTime::fromString("20:10", "hh:mm");
    QTest::newRow("FinishTime_test3") << QString("13:15") << QTime::fromString("13:15", "hh:mm");
}
void Test_Event::RemindTime_data()
{
    QTest::addColumn<QString>("arg");
    QTest::addColumn<QTime>("result");
    QTest::newRow("FinishTime_test1") << QString("00:00") << QTime(0, 0);
    QTest::newRow("FinishTime_test2") << QString("20:10") << QTime::fromString("20:10", "hh:mm");
    QTest::newRow("FinishTime_test3") << QString("13:15") << QTime::fromString("13:15", "hh:mm");
}
void Test_Event::RepeatOfTask_data()
{
    QTest::addColumn<short>("arg");
    QTest::addColumn<short>("result");
    QTest::newRow("RepeatOfTask_test1") << short(1) << short(1);
    QTest::newRow("RepeatOfTask_test2") << short(3) << short(3);
    QTest::newRow("RepeatOfTask_test3") << short(5) << short(5);
}
void Test_Event::RemindOfTask_data()
{
    QTest::addColumn<short>("arg");
    QTest::addColumn<short>("result");
    QTest::newRow("RemindOfTask_test1") << short(1) << short(1);
    QTest::newRow("RemindOfTask_test2") << short(3) << short(3);
    QTest::newRow("RemindOfTask_test3") << short(5) << short(5);
}
void Test_Event::RemindComplete_data()
{
    QTest::addColumn<short>("arg");
    QTest::addColumn<short>("result");
    QTest::newRow("RemindComplete_test1") << short(1) << short(1);
    QTest::newRow("RemindComplete_test2") << short(3) << short(3);
    QTest::newRow("RemindComplete_test3") << short(5) << short(5);
}
void Test_Event::Color_data()
{
    QTest::addColumn<QColor>("arg");
    QTest::addColumn<QColor>("result");
    QTest::newRow("Color_test1") << QColor(255, 0, 0, 127) << QColor(255, 0, 0, 127);
    QTest::newRow("Color_test2") << QColor(0, 0, 0, 127) << QColor(0, 0, 0, 127);
    QTest::newRow("Color_test3") << QColor(255, 255, 255, 127) << QColor(255, 255, 255, 127);
}
void Test_Event::StartDate()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QDate, result);
    myEvent.SetStartDate(arg);
    QCOMPARE(myEvent.GetStartDate(), result);
}
void Test_Event::FinishDate()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QDate, result);
    myEvent.SetFinishDate(arg);
    QCOMPARE(myEvent.GetFinishDate(), result);
}
void Test_Event::RemindDate()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QDate, result);
    myEvent.SetRemindDate(arg);
    QCOMPARE(myEvent.GetRemindDate(), result);
}
void Test_Event::StartTime()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QTime, result);
    myEvent.SetStartTime(arg);
    QCOMPARE(myEvent.GetStartTime(), result);
}
void Test_Event::FinishTime()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QTime, result);
    myEvent.SetFinishTime(arg);
    QCOMPARE(myEvent.GetFinishTime(), result);
}
void Test_Event::RemindTime()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QTime, result);
    myEvent.SetRemindTime(arg);
    QCOMPARE(myEvent.GetRemindTime(), result);
}
void Test_Event::RepeatOfTask()
{
    Event myEvent;
    QFETCH(short, arg);
    QFETCH(short, result);
    myEvent.SetRepeatOfTask(arg);
    QCOMPARE(myEvent.GetRepeatOfTask(), result);
}
void Test_Event::RemindOfTask()
{
    Event myEvent;
    QFETCH(short, arg);
    QFETCH(short, result);
    myEvent.SetRemindOfTask(arg);
    QCOMPARE(myEvent.GetRemindOfTask(), result);
}
void Test_Event::RemindComplete()
{
    Event myEvent;
    QFETCH(short, arg);
    QFETCH(short, result);
    myEvent.SetRemindComplete(arg);
    QCOMPARE(myEvent.GetRemindComplete(), result);
}
void Test_Event::NameOfTask()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QString, result);
    myEvent.SetNameOfTask(arg);
    QCOMPARE(myEvent.GetNameOfTask(), result);
}
void Test_Event::DescriptionOfTask()
{
    Event myEvent;
    QFETCH(QString, arg);
    QFETCH(QString, result);
    myEvent.SetDescriptionOfTask(arg);
    QCOMPARE(myEvent.GetDescriptionOfTask(), result);
}
void Test_Event::Color()
{
    Event myEvent;
    myEvent.SetColor(QColor(255, 0, 0, 127));
    QCOMPARE(myEvent.GetColor(), QColor(255, 0, 0, 127));
}


QTEST_MAIN(Test_Event)


