#ifndef YOLCULISTESIISLEMI_H
#define YOLCULISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemi.h>

class YolcuListesiIslemi : public QObject, public TemelKullaniciIslemi
{
    Q_OBJECT
public:
    explicit YolcuListesiIslemi(QObject *parent = nullptr);

signals:

private:
    QAction *_islem;

    // TemelKullaniciIslemi interface
public slots:
    void main() override;
private:
    QAction *islem() override;
};

#endif // YOLCULISTESIISLEMI_H
