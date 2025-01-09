#ifndef YOLCUBS_H
#define YOLCUBS_H

#include "insan.h"
#include "temelverisinifi.h"

class YolcuBS : public Insan
{
    Q_OBJECT
public:
    explicit YolcuBS(QObject *parent = nullptr);
    Q_PROPERTY(Metin BiletNumarasi READ BiletNumarasi WRITE setBiletNumarasi NOTIFY BiletNumarasiChanged)
    Q_PROPERTY(TamSayi yolcuId READ yolcuId WRITE setYolcuId NOTIFY yolcuIdChanged)

    const Metin &BiletNumarasi() const;

    TamSayi yolcuId() const;


public slots:
    void setBiletNumarasi(const Metin &newBiletNumarasi);
    void setYolcuId(TamSayi newYolcuId);
signals:
    void BiletNumarasiChanged(const Metin &newBiletNumarasi);

    void yolcuIdChanged(TamSayi newYolcuId);

private:

    Metin _BiletNumarasi;
    TamSayi _yolcuId;

    friend QDataStream  &operator<<(QDataStream &stream, const YolcuBS &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  YolcuBS &veri);
};
QDataStream  &operator<<(QDataStream &stream, const YolcuBS &veri);
QDataStream  &operator>>(QDataStream &stream,  YolcuBS &veri);


#endif // YOLCUBS_H
