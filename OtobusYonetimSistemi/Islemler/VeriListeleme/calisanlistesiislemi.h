#ifndef CALISANLISTESIISLEMI_H
#define CALISANLISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemi.h>

class CalisanListesiIslemi : public QObject, public TemelKullaniciIslemi
{
    Q_OBJECT
public:
    explicit CalisanListesiIslemi(QObject *parent = nullptr);

signals:

private:
    QAction *_islem;


    // TemelKullaniciIslemi interface
public slots:
    void main() override;
public:
    QAction *islem() override;
};

#endif // CALISANLISTESIISLEMI_H
