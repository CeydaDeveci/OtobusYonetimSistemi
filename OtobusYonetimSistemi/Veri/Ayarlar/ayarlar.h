#ifndef AYARLAR_H
#define AYARLAR_H

#include <QObject>
#include "../tanimlar.h"

class Ayarlar : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(TamSayi ocakId READ ocakId WRITE setOcakId NOTIFY ocakIdChanged)
    static Ayarlar& ayar();
    ~Ayarlar();

    TamSayi ocakId() const;

public slots:
    void setOcakId(TamSayi newOcakId);

signals:
    void ocakIdChanged(TamSayi newOcakId);

private:
     explicit Ayarlar(QObject *parent = nullptr);
     TamSayi _ocakId;


};

#endif // AYARLAR_H
