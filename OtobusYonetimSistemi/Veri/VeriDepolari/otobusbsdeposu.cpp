#include "otobusbsdeposu.h"

OtobusBSDeposu::OtobusBSDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<OtobusBS>{} {}

QDataStream  &operator<<(QDataStream &stream, const OtobusBSDeposu &veri){
    stream<<veri._sonId;
    stream<<veri._veriler;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  OtobusBSDeposu &veri){
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
