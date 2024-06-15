#include "mainwindow.h"

#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QTableView>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent),
    add(new QPushButton("Add")),
    albumName(new QLineEdit),
    albumComposer(new QLineEdit),
    albumCost(new QDoubleSpinBox),
    albumRating(new QSpinBox),
    table(new QTableView),
    view(new Album(this))
{
    setWindowTitle("Music Informarion");
    setMinimumSize(400, 250);

    setupGUI();
    table->setModel(view);
    table->horizontalHeader();

    QObject::connect(add, SIGNAL(clicked(bool)), this, SLOT(addItem()));
}

void MainWindow::addItem()
{
    albumName->text();
    albumComposer->text();
    albumCost->setPrefix("R ");
    albumRating->setValue(0);
    albumName->clear();

    QString name = static_cast<QLineEdit*>(layout->itemAtPosition(0, 1)->widget())->text();
    QString composer = static_cast<QLineEdit*>(layout->itemAtPosition(1, 1)->widget())->text();
    double cost = static_cast<QDoubleSpinBox*>(layout->itemAtPosition(2, 1)->widget())->value();
    int rating = static_cast<QSpinBox*>(layout->itemAtPosition(3, 1)->widget())->value();

    //clears the GUI
    albumName->clear();
    albumComposer->clear();
    albumCost->setValue(0.00);
    albumRating->setValue(0);

    Music *disc = new Music(name, composer, cost, rating);
    view->addAlbum(disc);
}

void MainWindow::setupGUI()
{
    layout = new QGridLayout(this);
    QLabel *enterAlbum(new QLabel("Album Name: "));
    QLabel *enterComposer(new QLabel("Composer: "));
    QLabel *enterCost(new QLabel("Cost (R)"));
    QLabel *enterRating(new QLabel("Rating"));
    QDoubleSpinBox *costSpin = new QDoubleSpinBox(this);
    QSpinBox *ratingSpin = new QSpinBox(this);

    costSpin->setMinimum(0.00);
    costSpin->setMaximum(100000.00);
    costSpin->setSingleStep(0.01);
    costSpin->setDecimals(2);

    ratingSpin->setMinimum(0);
    ratingSpin->setMaximum(100);

    layout->addWidget(enterAlbum);
    layout->addWidget(albumName);
    layout->addWidget(enterComposer);
    layout->addWidget(albumComposer);
    layout->addWidget(enterCost);
    layout->addWidget(costSpin);
    layout->addWidget(enterRating);
    layout->addWidget(ratingSpin);
    layout->addWidget(add);
    layout->addWidget(table);

    table->resizeColumnsToContents();
}

MainWindow::~MainWindow()
{

}
