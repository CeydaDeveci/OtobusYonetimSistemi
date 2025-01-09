#ifndef BILETLISTESIISLEMI_H
#define BILETLISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemi.h>

class BiletListesiIslemi : public QObject, public TemelKullaniciIslemi
{
    Q_OBJECT
public:
    explicit BiletListesiIslemi(QObject *parent = nullptr);

signals:

private:
    QAction *_islem;


    // TemelKullaniciIslemi interface
public slots:
    void main() override;
public:
    QAction *islem() override;
};

#endif // BILETLISTESIISLEMI_H
