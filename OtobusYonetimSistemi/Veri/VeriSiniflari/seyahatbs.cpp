#include "seyahatbs.h"

SeyahatBS::SeyahatBS(QObject *parent)
    : TemelVeriSinifi{parent}
{

}
const Metin &SeyahatBS::KalkisYeri() const
{
    return _KalkisYeri;
}

void SeyahatBS::setKalkisYeri(const Metin &newKalkisYeri)
{
    if (_KalkisYeri == newKalkisYeri)
        return;
    _KalkisYeri = newKalkisYeri;
    emit KalkisYeriChanged(_KalkisYeri);
}

const Metin &SeyahatBS::VarisYeri() const
{
    return _VarisYeri;
}

void SeyahatBS::setVarisYeri(const Metin &newVarisYeri)
{
    if (_VarisYeri == newVarisYeri)
        return;
    _VarisYeri = newVarisYeri;
    emit VarisYeriChanged(_VarisYeri);
}

const TarihSaat &SeyahatBS::KalkisTarihi() const
{
    return _KalkisTarihi;
}

void SeyahatBS::setKalkisTarihi(const TarihSaat &newKalkisTarihi)
{
    if (_KalkisTarihi == newKalkisTarihi)
        return;
    _KalkisTarihi = newKalkisTarihi;
    emit KalkisTarihiChanged(_KalkisTarihi);
}

const TarihSaat &SeyahatBS::VarisTarihi() const
{
    return _VarisTarihi;
}

void SeyahatBS::setVarisTarihi(const TarihSaat &newVarisTarihi)
{
    if (_VarisTarihi == newVarisTarihi)
        return;
    _VarisTarihi = newVarisTarihi;
    emit VarisTarihiChanged(_VarisTarihi);
}

TamSayi SeyahatBS::seyahatId() const
{
    return _seyahatId;
}

void SeyahatBS::setSeyahatId(TamSayi newSeyahatId)
{
    if (_seyahatId == newSeyahatId)
        return;
    _seyahatId = newSeyahatId;
    emit seyahatIdChanged(_seyahatId);
}
QDataStream  &operator<<(QDataStream &stream, const SeyahatBS &veri){
    stream<<veri._KalkisTarihi;
    stream<<veri._KalkisYeri;
    stream<<veri._VarisTarihi;
    stream<<veri._VarisYeri;
    stream<<veri._seyahatId;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  SeyahatBS &veri){
    stream>>veri._KalkisTarihi;
    stream>>veri._KalkisYeri;
    stream>>veri._VarisTarihi;
    stream>>veri._VarisYeri;
    stream>>veri._seyahatId;
    return stream;
}

