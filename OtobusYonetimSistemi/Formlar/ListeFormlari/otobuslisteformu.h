#ifndef OTOBUSLISTEFORMU_H
#define OTOBUSLISTEFORMU_H

#include <QWidget>
#include <Veri/tanimlar.h>

namespace Ui {
class OtobusListeFormu;
}

class OtobusListeFormu : public QWidget
{
    Q_OBJECT

public:
    explicit OtobusListeFormu(QWidget *parent = nullptr);
    ~OtobusListeFormu();

    const OtobusListesi &liste() const;

public slots:

    void setListe(const OtobusListesi &newListe);

private:
    Ui::OtobusListeFormu *ui;
    OtobusListesi _liste;
    void ekranGuncelle();
};

#endif // OTOBUSLISTEFORMU_H
