#include "isletmebsdeposu.h"

IsletmeBSDeposu::IsletmeBSDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<IsletmeBS>{}
{

}
QDataStream  &operator<<(QDataStream &stream, const IsletmeBSDeposu &veri){
    stream<<veri._sonId;
    stream<<veri._veriler;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  IsletmeBSDeposu &veri){
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
