#include "calisanbsdeposu.h"
#include "TemelVeriDeposu.h"

CalisanBSDeposu::CalisanBSDeposu(QObject *parent)
    : QObject{parent},  TemelVeriDeposu<CalisanBS>{} {}

QDataStream  &operator<<(QDataStream &stream, const CalisanBSDeposu &veri){
    stream<<veri._sonId;
    stream<<veri._veriler;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  CalisanBSDeposu &veri){
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
