#include "seyahatbsdeposu.h"

SeyahatBSDeposu::SeyahatBSDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<SeyahatBS>{}
{

}
QDataStream  &operator<<(QDataStream &stream, const SeyahatBSDeposu &veri){
    stream<<veri._sonId;
    stream<<veri._veriler;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  SeyahatBSDeposu &veri){
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
