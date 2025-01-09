#include "data.h"
#include <QStandardPaths>
#include <QDir>
#include <QDataStream>
#include <QFile>

#include <QDebug>

void Data::kaydet()
{
    QFile dosya(dosyaYolu());
    if(dosya.open(QIODevice::WriteOnly)){
        QDataStream out(&dosya);

        out << *this;
        dosya.close();
    }
}

void Data::yukle()
{
    QFile dosya(dosyaYolu());
    if(dosya.open(QIODevice::ReadOnly)){
        QDataStream in(&dosya);

        in >> *this;
        dosya.close();
    }
}

Data::~Data()
{   qDebug() << "Data sonlandırılıyor, veri kaydediliyor...";
    kaydet();

}

Data::Data(QObject *parent) : QObject{parent} {
    qDebug() << "Data ilklendiriliyor, veri yükleniyor...";
    yukle();
}

QString Data::dosyaYolu() {
    auto klasor =
            QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir a(klasor);
    if(!a.exists()){
        a.mkpath(klasor);
    }
    qDebug() << klasor + "/veri.dat";
    return klasor+"/Veri.dat";
}

QDataStream  &operator<<(QDataStream &stream, const Data &veri) {
    stream << veri._isletme;
    stream << veri._otobus;
    stream << veri._bilet;
    stream << veri._seyahat;
    stream << veri._calisan;
    stream << veri._yolcu;
    return stream;
}

QDataStream  &operator>>(QDataStream &stream, Data &veri) {
    stream >> veri._isletme;
    stream >> veri._otobus;
    stream >> veri._bilet;
    stream >> veri._seyahat;
    stream >> veri._calisan;
    stream >> veri._yolcu;
    return stream;
}

