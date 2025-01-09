#ifndef CALISANLISTEFORMU_H
#define CALISANLISTEFORMU_H

#include <QWidget>
#include <Veri/tanimlar.h>

namespace Ui {
class CalisanListeFormu;
}

class CalisanListeFormu : public QWidget
{
    Q_OBJECT

public:
    explicit CalisanListeFormu(QWidget *parent = nullptr);
    ~CalisanListeFormu();

    const CalisanListesi &liste() const;

public slots:

    void setListe(const CalisanListesi &newListe);

private:
    Ui::CalisanListeFormu *ui;
    CalisanListesi _liste;
    void ekranGuncelle();
};

#endif // CALISANLISTEFORMU_H
