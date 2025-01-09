#ifndef SEYAHATBS_H
#define SEYAHATBS_H

#include "temelverisinifi.h"

class SeyahatBS : public TemelVeriSinifi
{
    Q_OBJECT
public:
    explicit SeyahatBS(QObject *parent = nullptr);
       Q_PROPERTY(Metin KalkisYeri READ KalkisYeri WRITE setKalkisYeri NOTIFY KalkisYeriChanged)
       Q_PROPERTY(Metin VarisYeri READ VarisYeri WRITE setVarisYeri NOTIFY VarisYeriChanged)
       Q_PROPERTY(TarihSaat KalkisTarihi READ KalkisTarihi WRITE setKalkisTarihi NOTIFY KalkisTarihiChanged)
       Q_PROPERTY(TarihSaat VarisTarihi READ VarisTarihi WRITE setVarisTarihi NOTIFY VarisTarihiChanged)
       Q_PROPERTY(TamSayi seyahatId READ seyahatId WRITE setSeyahatId NOTIFY seyahatIdChanged)

       const Metin &KalkisYeri() const;


       const Metin &VarisYeri() const;


       const TarihSaat &KalkisTarihi() const;


       const TarihSaat &VarisTarihi() const;

       TamSayi seyahatId() const;


public slots:
    void setKalkisYeri(const Metin &newKalkisYeri);
    void setVarisYeri(const Metin &newVarisYeri);
    void setKalkisTarihi(const TarihSaat &newKalkisTarihi);
    void setVarisTarihi(const TarihSaat &newVarisTarihi);
    void setSeyahatId(TamSayi newSeyahatId);
signals:
   void KalkisYeriChanged(const Metin &newKalkisYeri);

   void VarisYeriChanged(const Metin &newVarisYeri);

   void KalkisTarihiChanged(const TarihSaat &newKalkisTarihi);

   void VarisTarihiChanged(const TarihSaat &newVarisTarihi);

   void seyahatIdChanged(TamSayi newSeyahatId);

private:
   Metin _KalkisYeri;
   Metin _VarisYeri;
   TarihSaat _KalkisTarihi;
   TarihSaat _VarisTarihi;
   TamSayi _seyahatId;

   friend QDataStream  &operator<<(QDataStream &stream, const SeyahatBS &veri);
   friend QDataStream  &operator>>(QDataStream &stream,  SeyahatBS &veri);

};
QDataStream  &operator<<(QDataStream &stream, const SeyahatBS &veri);
QDataStream  &operator>>(QDataStream &stream,  SeyahatBS &veri);

#endif // SEYAHATBS_H
