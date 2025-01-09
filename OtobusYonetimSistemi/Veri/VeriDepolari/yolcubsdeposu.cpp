#include "yolcubsdeposu.h"

YolcuBSDeposu::YolcuBSDeposu(QObject *parent)
    : QObject{parent},  TemelVeriDeposu<YolcuBS>{}
{

}
QDataStream  &operator<<(QDataStream &stream, const YolcuBSDeposu &veri){
    stream<<veri._sonId;
    stream<<veri._veriler;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  YolcuBSDeposu &veri){
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
