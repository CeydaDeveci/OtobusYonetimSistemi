#ifndef ISLETMELISTEFORMU_H
#define ISLETMELISTEFORMU_H

#include <QWidget>
#include <Veri/tanimlar.h>
#include <Veri/VeriDepolari/isletmebsdeposu.h>

namespace Ui {
class IsletmeListeFormu;
}


class IsletmeListeFormu : public QWidget
{
    Q_OBJECT

public:
    explicit IsletmeListeFormu(IsletmeBSDeposu &depo,
                               QWidget *parent = nullptr);
    ~IsletmeListeFormu();

    const IsletmeListesi &liste() const;
public slots:

    void setListe(const IsletmeListesi &newListe);

private:
    Ui::IsletmeListeFormu *ui;
    IsletmeListesi _liste;
    IsletmeBSDeposu &_depo;
    void ekranGuncelle();

};

#endif // ISLETMELISTEFORMU_H
