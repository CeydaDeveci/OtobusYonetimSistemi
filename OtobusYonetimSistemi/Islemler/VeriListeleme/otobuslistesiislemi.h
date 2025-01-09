#ifndef OTOBUSLISTESIISLEMI_H
#define OTOBUSLISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemi.h>

class OtobusListesiIslemi : public QObject, public TemelKullaniciIslemi
{
    Q_OBJECT
public:
    explicit OtobusListesiIslemi(QObject *parent = nullptr);

signals:

private:
    QAction *_islem;



    // TemelKullaniciIslemi interface
public slots:
    void main() override;
public:

    QAction *islem() override;
};

#endif // OTOBUSLISTESIISLEMI_H
