#ifndef ISLEMDEPOSU_H
#define ISLEMDEPOSU_H
#include <QList>
#include <QObject>
#include "TemelKullaniciIslemi.h"
#include <memory.h>

class IslemDeposu : public QObject
{
    Q_OBJECT
public:
    static IslemDeposu &yellow();
    typedef enum {
      IslemIsletmeListesi = 0, IslemOtobusListesi, IslemYolcuListesi,
    IslemCalisanListesi, IslemBiletListesi, IslemSeyahatListesi,
    IslemBiletGiris, IslemCalisanGiris, IslemIsletmeGiris, IslemOtobusGiris,
    IslemSeyahatGiris, IslemYolcuGiris} IslemSirasi;

    QAction* getAction(IslemSirasi x);
    void calistir(IslemSirasi y);

private:
    QList <std::shared_ptr<TemelKullaniciIslemi>> _islemler;
    explicit IslemDeposu(QObject *parent = nullptr);
signals:

};

#endif // ISLEMDEPOSU_H
