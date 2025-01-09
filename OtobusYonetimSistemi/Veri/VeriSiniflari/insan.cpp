#include "insan.h"

Insan::Insan(QObject *parent)
    : TemelVeriSinifi{parent}
{

}
const Metin &Insan::TcKimlikNo() const
{
    return _TcKimlikNo;
}

void Insan::setTcKimlikNo(const Metin &newTcKimlikNo)
{
    if (_TcKimlikNo == newTcKimlikNo)
        return;
    _TcKimlikNo = newTcKimlikNo;
    emit TcKimlikNoChanged(_TcKimlikNo);
}

const Metin &Insan::Ad() const
{
    return _Ad;
}

void Insan::setAd(const Metin &newAd)
{
    if (_Ad == newAd)
        return;
    _Ad = newAd;
    emit AdChanged(_Ad);
}

const Metin &Insan::SoyAd() const
{
    return _SoyAd;
}

void Insan::setSoyAd(const Metin &newSoyAd)
{
    if (_SoyAd == newSoyAd)
        return;
    _SoyAd = newSoyAd;
    emit SoyAdChanged( _SoyAd);
}

const Metin &Insan::HesKodu() const
{
    return _HesKodu;
}

void Insan::setHesKodu(const Metin &newHesKodu)
{
    if (_HesKodu == newHesKodu)
        return;
    _HesKodu = newHesKodu;
    emit HesKoduChanged(_HesKodu);
}


ECinsiyet Insan::Cinsiyet() const
{
    return _Cinsiyet;
}

void Insan::setCinsiyet(ECinsiyet newCinsiyet)
{
    if (_Cinsiyet == newCinsiyet)
        return;
    _Cinsiyet = newCinsiyet;
    emit CinsiyetChanged(_Cinsiyet);
}

QDataStream  &operator<<(QDataStream &stream, const Insan &veri){
    stream<<veri._Ad;
    stream<<veri._Cinsiyet;
    stream<<veri._HesKodu;
    stream<<veri._SoyAd;
    stream<<veri._TcKimlikNo;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  Insan &veri){
    stream>>veri._Ad;
    stream>>veri._HesKodu;
    stream>>veri._SoyAd;
    stream>>veri._Cinsiyet;
    stream>>veri._TcKimlikNo;
    return stream;
}







