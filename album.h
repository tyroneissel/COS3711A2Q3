#ifndef ALBUM_H
#define ALBUM_H

#include "music.h"
#include <QList>
#include <QAbstractTableModel>

class Album : public QAbstractTableModel
{
    Q_OBJECT

public:
    Album(QObject *parent=0);
    ~Album();

    //create the table
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    Qt::ItemFlags flags(const QModelIndex &index) const;

private:
    QList<Music *> albumList; //display music in list

public slots:
    void addAlbum(Music *disc); //adds music to the table

};

#endif // ALBUM_H
