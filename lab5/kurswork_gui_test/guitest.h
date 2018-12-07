#ifndef GUITEST_H
#define GUITEST_H
#include <QtWidgets>
#include <QRadioButton>
#include <QtTest>
#include <QtGui>
class TestGui: public QObject
{
    Q_OBJECT

private slots:
    void testQRadioButton();
};
#endif // GUITEST_H
