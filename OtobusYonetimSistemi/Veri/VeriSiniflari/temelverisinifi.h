#ifndef TEMELVERISINIFI_H
#define TEMELVERISINIFI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TemelVeriSinifi : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(TamSayi id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(bool silindiMi READ silindiMi WRITE setSilindiMi NOTIFY silindiMiChanged)
    explicit TemelVeriSinifi(QObject *parent = nullptr);
    TamSayi id() const;


    bool silindiMi() const;


public slots:
    void setId(TamSayi newId);
    void setSilindiMi(bool newSilindiMi);
signals:

    void idChanged(TamSayi newId);

    void silindiMiChanged(bool newSilindiMi);

private:
    TamSayi _id;
    bool _silindiMi;


};

#endif // TEMELVERISINIFI_H
