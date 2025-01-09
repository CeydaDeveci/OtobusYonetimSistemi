#ifndef ISLETMEBSDEPOSU_H
#define ISLETMEBSDEPOSU_H

#include <QObject>
#include "TemelVeriDeposu.h"
#include <Veri/VeriSiniflari/isletmebs.h>


class IsletmeBSDeposu : public QObject, public TemelVeriDeposu<IsletmeBS>
{
    Q_OBJECT
public:
    explicit IsletmeBSDeposu(QObject *parent = nullptr);

signals:
private:
    friend QDataStream  &operator<<(QDataStream &stream, const IsletmeBSDeposu &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  IsletmeBSDeposu &veri);


};
QDataStream  &operator<<(QDataStream &stream, const IsletmeBSDeposu &veri);
QDataStream  &operator>>(QDataStream &stream,  IsletmeBSDeposu &veri);

#endif // ISLETMEBSDEPOSU_H
