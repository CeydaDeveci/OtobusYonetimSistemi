#ifndef BILETBS_H
#define BILETBS_H

#include "temelverisinifi.h"

class BiletBS : public TemelVeriSinifi
{
    Q_OBJECT
public:
    explicit BiletBS(QObject *parent = nullptr);
    Q_PROPERTY(Metin biletFiyati READ biletFiyati WRITE setBiletFiyati NOTIFY biletFiyatiChanged)
    Q_PROPERTY(Metin koltukNumarasi READ koltukNumarasi WRITE setKoltukNumarasi NOTIFY koltukNumarasiChanged)
    Q_PROPERTY(TarihSaat SeferTarihi READ SeferTarihi WRITE setSeferTarihi NOTIFY SeferTarihiChanged)
    Q_PROPERTY(Metin SeferYeri READ SeferYeri WRITE setSeferYeri NOTIFY SeferYeriChanged)
    Q_PROPERTY(TamSayi BiletId READ BiletId WRITE setBiletId NOTIFY BiletIdChanged)

    const Metin &biletFiyati() const;

    const Metin &koltukNumarasi() const;

    const TarihSaat &SeferTarihi() const;

    const Metin &SeferYeri() const;

    TamSayi BiletId() const;


public slots:
    void setBiletFiyati(const Metin &newBiletFiyati);
    void setKoltukNumarasi(const Metin &newKoltukNumarasi);
    void setSeferTarihi(const TarihSaat &newSeferTarihi);
    void setSeferYeri(const Metin &newSeferYeri);
    void setBiletId(TamSayi newBiletId);
signals:
    void biletFiyatiChanged(const Metin &newBiletFiyati);

    void koltukNumarasiChanged(const Metin &newKoltukNumarasi);

    void SeferTarihiChanged(const TarihSaat &newSeferTarihi);

    void SeferYeriChanged(const Metin &newSeferYeri);

    void BiletIdChanged(TamSayi newBiletId);

private:
    Metin _biletFiyati;
    Metin _koltukNumarasi;
    TarihSaat _SeferTarihi;
    Metin _SeferYeri;
    TamSayi _BiletId;

    friend QDataStream  &operator<<(QDataStream &stream, const BiletBS &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  BiletBS &veri);
};
QDataStream  &operator<<(QDataStream &stream, const BiletBS &veri);
QDataStream  &operator>>(QDataStream &stream,  BiletBS &veri);

#endif // BILETBS_H
