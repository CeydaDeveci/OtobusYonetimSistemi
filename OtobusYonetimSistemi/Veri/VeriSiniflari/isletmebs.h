#ifndef ISLETMEBS_H
#define ISLETMEBS_H

#include "temelverisinifi.h"

class IsletmeBS : public TemelVeriSinifi
{
    Q_OBJECT
public:
    explicit IsletmeBS(QObject *parent = nullptr);
    Q_PROPERTY(Metin isletmeAdi READ isletmeAdi WRITE setIsletmeAdi NOTIFY isletmeAdiChanged)
    Q_PROPERTY(Metin ruhsatNumarasi READ ruhsatNumarasi WRITE setRuhsatNumarasi NOTIFY ruhsatNumarasiChanged)
    Q_PROPERTY(Metin Adres READ Adres WRITE setAdres NOTIFY AdresChanged)
    Q_PROPERTY(Metin Telefon READ Telefon WRITE setTelefon NOTIFY TelefonChanged)
    Q_PROPERTY(TamSayi isletmeId READ isletmeId WRITE setIsletmeId NOTIFY isletmeIdChanged)

    const Metin &isletmeAdi() const;


    const Metin &ruhsatNumarasi() const;


    const Metin &Adres() const;


    const Metin &Telefon() const;


    TamSayi isletmeId() const;


public slots:
    void setIsletmeAdi(const Metin &newIsletmeAdi);
    void setRuhsatNumarasi(const Metin &newRuhsatNumarasi);
    void setAdres(const Metin &newAdres);
    void setTelefon(const Metin &newTelefon);
    void setIsletmeId(TamSayi newIsletmeId);
signals:
    void isletmeAdiChanged(const Metin &newIsletmeAdi);

    void ruhsatNumarasiChanged(const Metin &newRuhsatNumarasi);

    void AdresChanged(const Metin &newAdres);

    void TelefonChanged(const Metin &newTelefon);

    void isletmeIdChanged(TamSayi newIsletmeId);

private:
    Metin _isletmeAdi;
    Metin _ruhsatNumarasi;
    Metin _Adres;
    Metin _Telefon;
    TamSayi _isletmeId;

    friend QDataStream  &operator<<(QDataStream &stream, const IsletmeBS &veri);
    friend QDataStream  &operator>>(QDataStream &stream, IsletmeBS &veri);

};
QDataStream  &operator<<(QDataStream &stream, const IsletmeBS &veri);
QDataStream  &operator>>(QDataStream &stream,  IsletmeBS &veri);

#endif // ISLETMEBS_H
