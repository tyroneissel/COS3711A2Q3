#include "album.h"
#include <QString>

Album::~Album()
{
    qDeleteAll(albumList);
}

Album::Album(QObject *parent): QAbstractTableModel(parent)
{
}

int Album::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return albumList.size();
}

int Album::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return 5;
}

QVariant Album::data(const QModelIndex& index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role == Qt::TextAlignmentRole)
    {
        return int(Qt::AlignRight | Qt::AlignVCenter);
    }

    if (role == Qt::DisplayRole)
    {
        int col = index.column();
        int row = index.row();
        if (col==0) return albumList.at(row)->getComposer();
        if (col==1) return albumList.at(row)->getName();
        if (col==2) return QString("%1").arg(albumList.at(row)->getCost(), 0, 'f', 2);
        else return albumList.at(row)->getRating();
    }

    return QVariant();
}
