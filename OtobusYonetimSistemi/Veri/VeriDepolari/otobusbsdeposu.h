#ifndef OTOBUSBSDEPOSU_H
#define OTOBUSBSDEPOSU_H

#include <QObject>
#include "TemelVeriDeposu.h"
#include <Veri/VeriSiniflari/otobusbs.h>

class OtobusBSDeposu : public QObject, public TemelVeriDeposu<OtobusBS>
{
    Q_OBJECT
public:
    explicit OtobusBSDeposu(QObject *parent = nullptr);

signals:
private:
    friend QDataStream  &operator<<(QDataStream &stream, const OtobusBSDeposu &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  OtobusBSDeposu &veri);

};
QDataStream  &operator<<(QDataStream &stream, const OtobusBSDeposu &veri);
QDataStream  &operator>>(QDataStream &stream,  OtobusBSDeposu &veri);

#endif // OTOBUSBSDEPOSU_H
