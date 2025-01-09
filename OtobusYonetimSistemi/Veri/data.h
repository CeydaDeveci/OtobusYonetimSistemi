#ifndef DATA_H
#define DATA_H

#include <QObject>
#include <QDataStream>
#include <Veri/VeriDepolari/isletmebsdeposu.h>
#include <Veri/VeriDepolari/biletbsdeposu.h>
#include <Veri/VeriDepolari/calisanbsdeposu.h>
#include <Veri/VeriDepolari/seyahatbsdeposu.h>
#include <Veri/VeriDepolari/otobusbsdeposu.h>
#include <Veri/VeriDepolari/yolcubsdeposu.h>

class Data : public QObject
{
    Q_OBJECT
public:

    IsletmeBSDeposu &isletme(){return _isletme; }
    OtobusBSDeposu  &otobus(){return _otobus; }
    CalisanBSDeposu &calisan(){return _calisan; }
    YolcuBSDeposu   &yolcu(){return _yolcu; }
    SeyahatBSDeposu &seyahat(){return _seyahat; }
    BiletBSDeposu   &bilet(){return _bilet; }

    void kaydet();
    void yukle();
    ~Data();



static Data& yellow(){
    static Data white;
    return white;

          }

signals:

private:
    explicit Data(QObject *parent = nullptr);
    IsletmeBSDeposu _isletme;
    OtobusBSDeposu  _otobus;
    CalisanBSDeposu _calisan;
    YolcuBSDeposu   _yolcu;
    SeyahatBSDeposu _seyahat;
    BiletBSDeposu   _bilet;

    QString dosyaYolu();

    friend QDataStream  &operator<<(QDataStream &stream, const Data &veri);
    friend QDataStream  &operator>>(QDataStream &stream,  Data &veri);

};

QDataStream  &operator<<(QDataStream &stream, const Data &veri);
QDataStream  &operator>>(QDataStream &stream,  Data &veri);


#endif // DATA_H
