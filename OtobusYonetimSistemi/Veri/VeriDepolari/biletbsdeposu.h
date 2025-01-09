#ifndef BILETBSDEPOSU_H
#define BILETBSDEPOSU_H

#include <QObject>
#include "TemelVeriDeposu.h"
#include <Veri/VeriSiniflari/biletbs.h>

class BiletBSDeposu : public QObject, public TemelVeriDeposu<BiletBS>
{
    Q_OBJECT
public:
    explicit BiletBSDeposu(QObject *parent = nullptr);

signals:
private:
    friend QDataStream  &operator<<(QDataStream &stream, const BiletBSDeposu &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  BiletBSDeposu &veri);

};
QDataStream  &operator<<(QDataStream &stream, const BiletBSDeposu &veri);
QDataStream  &operator>>(QDataStream &stream,  BiletBSDeposu &veri);

#endif // BILETBSDEPOSU_H
