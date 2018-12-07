#include "guitest.h"
void Test_QDateEdit::edit()
{
    QDateEdit date;
    QTest::keyClicks(&date, "88");
    QCOMPARE(date.date(), QDate(1993, 07, 01));
}
QTEST_MAIN(Test_QDateEdit)
