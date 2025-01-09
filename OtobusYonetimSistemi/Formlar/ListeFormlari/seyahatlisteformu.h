#ifndef SEYAHATLISTEFORMU_H
#define SEYAHATLISTEFORMU_H

#include <QWidget>
#include <Veri/tanimlar.h>

namespace Ui {
class SeyahatListeFormu;
}

class SeyahatListeFormu : public QWidget
{
    Q_OBJECT

public:
    explicit SeyahatListeFormu(QWidget *parent = nullptr);
    ~SeyahatListeFormu();

    const SeyahatListesi &liste() const;
public slots:

    void setListe(const SeyahatListesi &newListe);

private:
    Ui::SeyahatListeFormu *ui;
    SeyahatListesi _liste;
    void ekranGuncelle();
};

#endif // SEYAHATLISTEFORMU_H
