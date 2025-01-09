#ifndef SEYAHATGIRISISLEMI_H
#define SEYAHATGIRISISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemi.h>

class SeyahatGirisIslemi : public QObject, public TemelKullaniciIslemi
{
    Q_OBJECT
public:
    explicit SeyahatGirisIslemi(QObject *parent = nullptr);

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

#endif // SEYAHATGIRISISLEMI_H
