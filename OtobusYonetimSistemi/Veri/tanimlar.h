#ifndef TANIMLAR_H
#define TANIMLAR_H

#include <QString>
#include <QDateTime>
#include <memory>
#include <QList>


typedef QString Metin;
typedef int TamSayi;
typedef enum { Kadin = 1,  Erkek = 2 } ECinsiyet;
typedef QDate Tarih;
typedef QTime Saat;
typedef QDateTime TarihSaat;


class IsletmeBS;
class OtobusBS;
class YolcuBS;
class BiletBS;
class SeyahatBS;
class CalisanBS;
class Insan;


typedef std::shared_ptr<Insan> InsanPtr;
typedef std::shared_ptr<IsletmeBS> IsletmePtr;
typedef std::shared_ptr<OtobusBS> OtobusPtr;
typedef std::shared_ptr<YolcuBS> YolcuPtr;
typedef std::shared_ptr<BiletBS> BiletPtr;
typedef std::shared_ptr<SeyahatBS> SeyahatPtr;
typedef std::shared_ptr<CalisanBS> CalisanPtr;

typedef QList<IsletmePtr> IsletmeListesi;
typedef QList<OtobusPtr> OtobusListesi;
typedef QList<YolcuPtr> YolcuListesi;
typedef QList<BiletPtr> BiletListesi;
typedef QList<SeyahatPtr> SeyahatListesi;
typedef QList<CalisanPtr> CalisanListesi;
typedef QList<InsanPtr> InsanListesi;


class IsletmeBSDeposu;
class OtobusBSDeposu;
class YolcuBSDeposu;
class BiletBSDeposu;
class SeyahatBSDeposu;
class CalisanBSDeposu;

#endif // TANIMLAR_H
