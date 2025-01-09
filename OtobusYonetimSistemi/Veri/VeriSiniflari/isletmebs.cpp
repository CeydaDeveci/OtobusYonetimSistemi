#include "isletmebs.h"

IsletmeBS::IsletmeBS(QObject *parent)
    : TemelVeriSinifi{parent}
{

}
const Metin &IsletmeBS::isletmeAdi() const
{
    return _isletmeAdi;
}

void IsletmeBS::setIsletmeAdi(const Metin &newIsletmeAdi)
{
    if (_isletmeAdi == newIsletmeAdi)
        return;
    _isletmeAdi = newIsletmeAdi;
    emit isletmeAdiChanged( _isletmeAdi);
}

const Metin &IsletmeBS::ruhsatNumarasi() const
{
    return _ruhsatNumarasi;
}

void IsletmeBS::setRuhsatNumarasi(const Metin &newRuhsatNumarasi)
{
    if (_ruhsatNumarasi == newRuhsatNumarasi)
        return;
    _ruhsatNumarasi = newRuhsatNumarasi;
    emit ruhsatNumarasiChanged(_ruhsatNumarasi);
}

const Metin &IsletmeBS::Adres() const
{
    return _Adres;
}

void IsletmeBS::setAdres(const Metin &newAdres)
{
    if (_Adres == newAdres)
        return;
    _Adres = newAdres;
    emit AdresChanged(_Adres);
}

const Metin &IsletmeBS::Telefon() const
{
    return _Telefon;
}

void IsletmeBS::setTelefon(const Metin &newTelefon)
{
    if (_Telefon == newTelefon)
        return;
    _Telefon = newTelefon;
    emit TelefonChanged(_Telefon);
}

TamSayi IsletmeBS::isletmeId() const
{
    return _isletmeId;
}

void IsletmeBS::setIsletmeId(TamSayi newIsletmeId)
{
    if (_isletmeId == newIsletmeId)
        return;
    _isletmeId = newIsletmeId;
    emit isletmeIdChanged(_isletmeId);
}
QDataStream  &operator<<(QDataStream &stream, const IsletmeBS &veri){
    stream<<veri._Adres;
    stream<<veri._Telefon;
    stream<<veri._isletmeAdi;
    stream<<veri._ruhsatNumarasi;
    stream<<veri._isletmeId;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  IsletmeBS &veri){
    stream>>veri._Adres;
    stream>>veri._Telefon;
    stream>>veri._isletmeAdi;
    stream>>veri._ruhsatNumarasi;
    stream>>veri._isletmeId;
    return stream;
}

