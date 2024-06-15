#ifndef MUSIC_H
#define MUSIC_H

#include <QString>

class Music
{

public:
    ~Music();
    Music(QString c, QString n, double cs, int r);

    //getters
    QString getComposer() const;
    QString getName() const;
    double getCost() const;
    int getRating() const;

    //setters
    void setComposer(QString c);
    void setName(QString n);
    void setCost(double cs);
    void setRating(int r);

private:
    QString composer;
    QString name;
    double cost;
    int rating;
};

#endif // MUSIC_H
