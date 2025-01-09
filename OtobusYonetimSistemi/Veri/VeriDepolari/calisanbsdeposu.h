#ifndef CALISANBSDEPOSU_H
#define CALISANBSDEPOSU_H

#include <QObject>
#include "TemelVeriDeposu.h"
#include <Veri/VeriSiniflari/calisanbs.h>

class CalisanBSDeposu : public QObject, public TemelVeriDeposu<CalisanBS>
{
    Q_OBJECT
public:
    explicit CalisanBSDeposu(QObject *parent = nullptr);

signals:
private:
    friend QDataStream  &operator<<(QDataStream &stream, const CalisanBSDeposu &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  CalisanBSDeposu &veri);

};
QDataStream  &operator<<(QDataStream &stream, const CalisanBSDeposu &veri);
QDataStream  &operator>>(QDataStream &stream,  CalisanBSDeposu &veri);


#endif // CALISANBSDEPOSU_H
