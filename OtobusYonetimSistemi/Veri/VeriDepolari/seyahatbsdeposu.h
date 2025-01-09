#ifndef SEYAHATBSDEPOSU_H
#define SEYAHATBSDEPOSU_H

#include <QObject>
#include "TemelVeriDeposu.h"
#include <Veri/VeriSiniflari/seyahatbs.h>

class SeyahatBSDeposu : public QObject, public TemelVeriDeposu<SeyahatBS>
{
    Q_OBJECT
public:
    explicit SeyahatBSDeposu(QObject *parent = nullptr);

signals:
private:
    friend QDataStream  &operator<<(QDataStream &stream, const SeyahatBSDeposu &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  SeyahatBSDeposu &veri);

};
QDataStream  &operator<<(QDataStream &stream, const SeyahatBSDeposu &veri);
QDataStream  &operator>>(QDataStream &stream,  SeyahatBSDeposu &veri);
#endif // SEYAHATBSDEPOSU_H
