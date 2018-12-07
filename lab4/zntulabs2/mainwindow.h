#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QLocale>
#include <QStringList>
#include <QList>
#include <QRegExp>
#include <qmath.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void DIT(QString str);

    void on_openfile_clicked();

    void on_Metrics_clicked();

    void MWC(QString str);

    void LCOM(QString str);

    void NOC(QString str);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
