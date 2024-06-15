#include "music.h"

#include <QLineEdit>
#include <QPushButton>

#include <QLabel>
#include <QTableView>
#include <QDoubleSpinBox>
#include <QSpinBox>

Music::~Music()
{
}

Music::Music(QString c, QString n, double cs, int r): composer("Unkown"), name("Unkown"), cost(0.0), rating(0)
{

}

QString Music::getComposer() const
{
    return composer;
}

QString Music::getName() const
{
    return name;
}

double Music::getCost() const
{
    return cost;
}

int Music::getRating() const
{
    return rating;
}

void Music::setComposer(QString c)
{
    composer = c;
}

void Music::setName(QString n)
{
    name = n;
}

void Music::setCost(double cs)
{
    cost = cs;
}

void Music::setRating(int r)
{
    rating = r;
}

