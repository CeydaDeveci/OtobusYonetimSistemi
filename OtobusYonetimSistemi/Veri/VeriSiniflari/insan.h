#ifndef INSAN_H
#define INSAN_H

#include "temelverisinifi.h"

class Insan : public TemelVeriSinifi
{
    Q_OBJECT


public:
    explicit Insan(QObject *parent = nullptr);
    Q_PROPERTY(Metin TcKimlikNo READ TcKimlikNo WRITE setTcKimlikNo NOTIFY TcKimlikNoChanged)
    Q_PROPERTY(Metin Ad READ Ad WRITE setAd NOTIFY AdChanged)
    Q_PROPERTY(Metin SoyAd READ SoyAd WRITE setSoyAd NOTIFY SoyAdChanged)
    Q_PROPERTY(Metin HesKodu READ HesKodu WRITE setHesKodu NOTIFY HesKoduChanged)
    Q_PROPERTY(ECinsiyet Cinsiyet READ Cinsiyet WRITE setCinsiyet NOTIFY CinsiyetChanged)

    const Metin &TcKimlikNo() const;


    const Metin &Ad() const;


    const Metin &SoyAd() const;


    const Metin &HesKodu() const;



    ECinsiyet Cinsiyet() const;


public slots:
     void setTcKimlikNo(const Metin &newTcKimlikNo);
     void setAd(const Metin &newAd);
     void setSoyAd(const Metin &newSoyAd);
     void setHesKodu(const Metin &newHesKodu);
     void setCinsiyet(ECinsiyet newCinsiyet);
signals:
    void TcKimlikNoChanged(const Metin &newTcKimlikNo);

    void AdChanged(const Metin &newAd);

    void SoyAdChanged(const Metin &newSoyAd);

    void HesKoduChanged(const Metin &newHesKodu);

    void CinsiyetChanged(ECinsiyet newCinsiyet);

protected:
    Metin _TcKimlikNo;
    Metin _Ad;
    Metin _SoyAd;
    Metin _HesKodu;
    ECinsiyet _Cinsiyet;

    friend QDataStream  &operator<<(QDataStream &stream, const Insan &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  Insan &veri);
};
QDataStream  &operator<<(QDataStream &stream, const Insan &veri);
QDataStream  &operator>>(QDataStream &stream,  Insan &veri);

#endif // INSAN_H
