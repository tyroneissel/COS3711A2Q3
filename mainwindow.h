#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "album.h"
#include "music.h"

#include <QObject>
#include <QWidget>

class QPushButton;
class QLineEdit;
class QLabel;
class QDoubleSpinBox;
class QTableView;
class QSpinBox;
class QGridLayout;
class Album;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QPushButton *add;
    QLineEdit *albumName;
    QLineEdit *albumComposer;
    QDoubleSpinBox *albumCost;
    QSpinBox *albumRating;
    QTableView *table;
    Album *view;
    QGridLayout *layout;

private slots:
    void addItem();
    void setupGUI();
};

#endif // MAINWINDOW_H
