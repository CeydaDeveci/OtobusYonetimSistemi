#ifndef OTOBUSBS_H
#define OTOBUSBS_H

#include "temelverisinifi.h"

class OtobusBS : public TemelVeriSinifi
{
    Q_OBJECT
public:
    explicit OtobusBS(QObject *parent = nullptr);

        Q_PROPERTY(Metin otobusPlakasi READ otobusPlakasi WRITE setOtobusPlakasi NOTIFY otobusPlakasiChanged)
        Q_PROPERTY(TamSayi otobusKoltukSayisi READ otobusKoltukSayisi WRITE setOtobusKoltukSayisi NOTIFY otobusKoltukSayisiChanged)
        Q_PROPERTY(Metin valizKapasitesi READ valizKapasitesi WRITE setValizKapasitesi NOTIFY valizKapasitesiChanged)
        Q_PROPERTY(TamSayi OtobusId READ OtobusId WRITE setOtobusId NOTIFY OtobusIdChanged)

        const Metin &otobusPlakasi() const;


        TamSayi otobusKoltukSayisi() const;

        const Metin &valizKapasitesi() const;


        TamSayi OtobusId() const;

public slots:
        void setOtobusPlakasi(const Metin &newOtobusPlakasi);
        void setOtobusKoltukSayisi(TamSayi newOtobusKoltukSayisi);
        void setValizKapasitesi(const Metin &newValizKapasitesi);
        void setOtobusId(TamSayi newOtobusId);
    signals:
        void otobusPlakasiChanged(const Metin &newOtobusPlakasi);

        void otobusKoltukSayisiChanged(TamSayi newOtobusKoltukSayisi);

        void valizKapasitesiChanged(const Metin &newValizKapasitesi);

        void OtobusIdChanged(TamSayi newOtobusId);

private:
    Metin _otobusPlakasi;
    TamSayi _otobusKoltukSayisi;
    Metin _valizKapasitesi;
    TamSayi _OtobusId;

    friend QDataStream  &operator<<(QDataStream &stream, const OtobusBS &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  OtobusBS &veri);

};

QDataStream  &operator<<(QDataStream &stream, const OtobusBS &veri);
QDataStream  &operator>>(QDataStream &stream,  OtobusBS &veri);

#endif // OTOBUSBS_H
