#include "yolcubs.h"
#include "insan.h"

YolcuBS::YolcuBS(QObject *parent)
    : Insan{parent}
{

}
const Metin &YolcuBS::BiletNumarasi() const
{
    return _BiletNumarasi;
}

void YolcuBS::setBiletNumarasi(const Metin &newBiletNumarasi)
{
    if (_BiletNumarasi == newBiletNumarasi)
        return;
    _BiletNumarasi = newBiletNumarasi;
    emit BiletNumarasiChanged(_BiletNumarasi);
}

TamSayi YolcuBS::yolcuId() const
{
    return _yolcuId;
}

void YolcuBS::setYolcuId(TamSayi newYolcuId)
{
    if (_yolcuId == newYolcuId)
        return;
    _yolcuId = newYolcuId;
    emit yolcuIdChanged(_yolcuId);
}
QDataStream  &operator<<(QDataStream &stream, const YolcuBS &veri){
    stream<<veri._BiletNumarasi;
    stream<<veri._Ad;
    stream<<veri._SoyAd;
    stream<<veri._HesKodu;
    stream<<veri._TcKimlikNo;
    stream<<veri._yolcuId;
    stream<<veri._Cinsiyet;
    return stream;

}

QDataStream  &operator>>(QDataStream &stream,  YolcuBS &veri){
    stream>>veri._BiletNumarasi;
    stream>>veri._Ad;
    stream>>veri._SoyAd;
    stream>>veri._HesKodu;
    stream>>veri._TcKimlikNo;
    stream>>veri._Cinsiyet;
    stream>>veri._yolcuId;
    return stream;
}
