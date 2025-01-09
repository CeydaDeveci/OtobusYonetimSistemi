#ifndef YOLCUBSDEPOSU_H
#define YOLCUBSDEPOSU_H

#include <QObject>
#include "TemelVeriDeposu.h"
#include <Veri/VeriSiniflari/yolcubs.h>

class YolcuBSDeposu : public QObject, public TemelVeriDeposu<YolcuBS>
{
    Q_OBJECT
public:
    explicit YolcuBSDeposu(QObject *parent = nullptr);

signals:
private:
    friend QDataStream  &operator<<(QDataStream &stream, const YolcuBSDeposu &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  YolcuBSDeposu &veri);

};
QDataStream  &operator<<(QDataStream &stream, const YolcuBSDeposu &veri);
QDataStream  &operator>>(QDataStream &stream,  YolcuBSDeposu &veri);

#endif // YOLCUBSDEPOSU_H
