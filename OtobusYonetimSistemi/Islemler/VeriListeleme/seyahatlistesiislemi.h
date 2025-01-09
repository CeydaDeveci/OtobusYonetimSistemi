#ifndef SEYAHATLISTESIISLEMI_H
#define SEYAHATLISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemi.h>

class SeyahatListesiIslemi : public QObject, public TemelKullaniciIslemi
{
    Q_OBJECT
public:
    explicit SeyahatListesiIslemi(QObject *parent = nullptr);

signals:

private:
    QAction *_islem;

    // TemelKullaniciIslemi interface
public slots:
    void main() override;
public:
    QAction *islem() override;
};

#endif // SEYAHATLISTESIISLEMI_H
