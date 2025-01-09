#ifndef CALISANBS_H
#define CALISANBS_H

#include "temelverisinifi.h"
#include <Veri/VeriSiniflari/insan.h>

class CalisanBS : public Insan
{
    Q_OBJECT
public:
    explicit CalisanBS(QObject *parent = nullptr);
    Q_PROPERTY(Metin telefon READ telefon WRITE setTelefon NOTIFY telefonChanged)
    Q_PROPERTY(Metin Gorevi READ Gorevi WRITE setGorevi NOTIFY GoreviChanged)
    Q_PROPERTY(TamSayi CalisanId READ CalisanId WRITE setCalisanId NOTIFY CalisanIdChanged)

    const Metin &Gorevi() const;

    TamSayi CalisanId() const;


    const Metin &telefon() const;

public slots:
    void setGorevi(const Metin &newGorevi);
    void setCalisanId(TamSayi newCalisanId);
    void setTelefon(const Metin &newTelefon);

signals:
    void GoreviChanged(const Metin &newGorevi);

    void CalisanIdChanged(TamSayi newCalisanId);

    void telefonChanged(const Metin &newTelefon);

private:
    Metin _Gorevi;
    TamSayi _CalisanId;
    Metin _telefon;

    friend QDataStream  &operator<<(QDataStream &stream, const CalisanBS &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  CalisanBS &veri);

};
QDataStream  &operator<<(QDataStream &stream, const CalisanBS &veri);
QDataStream  &operator>>(QDataStream &stream,  CalisanBS &veri);

#endif // CALISANBS_H
