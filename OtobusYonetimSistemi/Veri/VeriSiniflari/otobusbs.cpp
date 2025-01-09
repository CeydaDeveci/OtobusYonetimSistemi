#include "otobusbs.h"

OtobusBS::OtobusBS(QObject *parent)
    : TemelVeriSinifi{parent}
{

}

const Metin &OtobusBS::otobusPlakasi() const
{
    return _otobusPlakasi;
}

void OtobusBS::setOtobusPlakasi(const Metin &newOtobusPlakasi)
{
    if (_otobusPlakasi == newOtobusPlakasi)
        return;
    _otobusPlakasi = newOtobusPlakasi;
    emit otobusPlakasiChanged(_otobusPlakasi);
}

TamSayi OtobusBS::otobusKoltukSayisi() const
{
    return _otobusKoltukSayisi;
}

void OtobusBS::setOtobusKoltukSayisi(TamSayi newOtobusKoltukSayisi)
{
    if (_otobusKoltukSayisi == newOtobusKoltukSayisi)
        return;
    _otobusKoltukSayisi = newOtobusKoltukSayisi;
    emit otobusKoltukSayisiChanged(_otobusKoltukSayisi);
}

const Metin &OtobusBS::valizKapasitesi() const
{
    return _valizKapasitesi;
}

void OtobusBS::setValizKapasitesi(const Metin &newValizKapasitesi)
{
    if (_valizKapasitesi == newValizKapasitesi)
        return;
    _valizKapasitesi = newValizKapasitesi;
    emit valizKapasitesiChanged(_valizKapasitesi);
}

TamSayi OtobusBS::OtobusId() const
{
    return _OtobusId;
}

void OtobusBS::setOtobusId(TamSayi newOtobusId)
{
    if (_OtobusId == newOtobusId)
        return;
    _OtobusId = newOtobusId;
    emit OtobusIdChanged(_OtobusId);
}

QDataStream  &operator<<(QDataStream &stream, const OtobusBS &veri){
    stream<<veri._otobusKoltukSayisi;
    stream<<veri._valizKapasitesi;
    stream<<veri._otobusPlakasi;
    stream<<veri._OtobusId;
    return stream;
}
QDataStream  &operator>>(QDataStream &stream,  OtobusBS &veri){
    stream>>veri._otobusKoltukSayisi;
    stream>>veri._valizKapasitesi;
    stream>>veri._otobusPlakasi;
    stream>>veri._OtobusId;
    return stream;
}
