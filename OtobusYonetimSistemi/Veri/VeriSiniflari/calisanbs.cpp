#include "calisanbs.h"

CalisanBS::CalisanBS(QObject *parent)
    : Insan{parent}
{

}
const Metin &CalisanBS::Gorevi() const
{
    return _Gorevi;
}

void CalisanBS::setGorevi(const Metin &newGorevi)
{
    if (_Gorevi == newGorevi)
        return;
    _Gorevi = newGorevi;
    emit GoreviChanged(_Gorevi);
}

TamSayi CalisanBS::CalisanId() const
{
    return _CalisanId;
}

void CalisanBS::setCalisanId(TamSayi newCalisanId)
{
    if (_CalisanId == newCalisanId)
        return;
    _CalisanId = newCalisanId;
    emit CalisanIdChanged(_CalisanId);
}

const Metin &CalisanBS::telefon() const
{
    return _telefon;
}

void CalisanBS::setTelefon(const Metin &newTelefon)
{
    if (_telefon == newTelefon)
        return;
    _telefon = newTelefon;
    emit telefonChanged(_telefon);
}
QDataStream  &operator<<(QDataStream &stream, const CalisanBS &veri){
    stream<<veri._Gorevi;
    stream<<veri._telefon;
    stream<<veri._CalisanId;
    stream<<veri._Ad;
    stream<<veri._SoyAd;
    stream<<veri._HesKodu;
    stream<<veri._Cinsiyet;
    stream<<veri._TcKimlikNo;
    return stream;
    }
QDataStream  &operator>>(QDataStream &stream,  CalisanBS &veri){
    stream>>veri._Gorevi;
    stream>>veri._telefon;
    stream>>veri._Ad;
    stream>>veri._SoyAd;
    stream>>veri._HesKodu;
    stream>>veri._Cinsiyet;
    stream>>veri._TcKimlikNo;
    stream>>veri._CalisanId;
    return stream;
}



