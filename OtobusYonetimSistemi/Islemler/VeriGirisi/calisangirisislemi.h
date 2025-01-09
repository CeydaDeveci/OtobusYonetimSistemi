#ifndef CALISANGIRISISLEMI_H
#define CALISANGIRISISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemi.h>

class CalisanGirisIslemi : public QObject, public TemelKullaniciIslemi
{
    Q_OBJECT
public:
    explicit CalisanGirisIslemi(QObject *parent = nullptr);

signals:


    // TemelKullaniciIslemi interface
public:

    QAction *islem() override;
public slots:
    void main() override;
    void depoEkle();
private:
    QAction *_islem;
};

#endif // CALISANGIRISISLEMI_H
