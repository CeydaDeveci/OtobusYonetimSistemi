#include "biletbsdeposu.h"

BiletBSDeposu::BiletBSDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<BiletBS>{} {}

QDataStream  &operator<<(QDataStream &stream, const BiletBSDeposu &veri){
    stream<<veri._sonId;
    stream<<veri._veriler;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  BiletBSDeposu &veri){
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
