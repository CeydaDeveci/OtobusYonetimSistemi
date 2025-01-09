#include "biletbs.h"

BiletBS::BiletBS(QObject *parent)
    : TemelVeriSinifi{parent}
{

}

const Metin &BiletBS::biletFiyati() const
{
    return _biletFiyati;
}

void BiletBS::setBiletFiyati(const Metin &newBiletFiyati)
{
    if (_biletFiyati == newBiletFiyati)
        return;
    _biletFiyati = newBiletFiyati;
    emit biletFiyatiChanged(_biletFiyati);
}

const Metin &BiletBS::koltukNumarasi() const
{
    return _koltukNumarasi;
}

void BiletBS::setKoltukNumarasi(const Metin &newKoltukNumarasi)
{
    if (_koltukNumarasi == newKoltukNumarasi)
        return;
    _koltukNumarasi = newKoltukNumarasi;
    emit koltukNumarasiChanged(_koltukNumarasi);
}

const TarihSaat &BiletBS::SeferTarihi() const
{
    return _SeferTarihi;
}

void BiletBS::setSeferTarihi(const TarihSaat &newSeferTarihi)
{
    if (_SeferTarihi == newSeferTarihi)
        return;
    _SeferTarihi = newSeferTarihi;
    emit SeferTarihiChanged(_SeferTarihi);
}

const Metin &BiletBS::SeferYeri() const
{
    return _SeferYeri;
}

void BiletBS::setSeferYeri(const Metin &newSeferYeri)
{
    if (_SeferYeri == newSeferYeri)
        return;
    _SeferYeri = newSeferYeri;
    emit SeferYeriChanged(_SeferYeri);
}

TamSayi BiletBS::BiletId() const
{
    return _BiletId;
}

void BiletBS::setBiletId(TamSayi newBiletId)
{
    if (_BiletId == newBiletId)
        return;
    _BiletId = newBiletId;
    emit BiletIdChanged(_BiletId);
}
QDataStream  &operator<<(QDataStream &stream, const BiletBS &veri){
    stream<<veri._biletFiyati;
    stream<<veri._SeferYeri;
    stream<<veri._SeferTarihi;
    stream<<veri._koltukNumarasi;
    stream<<veri._BiletId;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  BiletBS &veri){
    stream>>veri._biletFiyati;
    stream>>veri._SeferYeri;
    stream>>veri._SeferTarihi;
    stream>>veri._koltukNumarasi;
    stream>>veri._BiletId;
    return stream;

}
