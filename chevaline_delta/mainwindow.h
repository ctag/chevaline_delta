#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QLabel>
#include <QSql>
#include <QtSql>
#include <QSqlDatabase>
#include <QIntValidator>
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlError>
#include <QAction>
#include <QSqlTableModel>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QBrush>
#include <QRect>
#include <QIntValidator>
#include <QRegularExpressionValidator>
#include <QDoubleValidator>
#include <QTextBrowser>
#include <QTextEdit>
#include <QInputEvent>
#include <QKeyEvent>
#include <stdio.h>
#include <stdlib.h>
#include <QTimer>

namespace std {
class Course;
class student;
}

class Course
{
public:



private:



};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
