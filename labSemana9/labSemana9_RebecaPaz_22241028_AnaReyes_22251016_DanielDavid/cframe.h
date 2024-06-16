#ifndef CFRAME_H
#define CFRAME_H
#include "circulo.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class cFrame; }
QT_END_NAMESPACE

class cFrame : public QMainWindow
{
    Q_OBJECT

public:
    cFrame(QWidget *parent = nullptr);
    ~cFrame();

private slots:
    void on_btn_generar_clicked();
    void generarListaPredefinida();
    void limpiarListaPolimorfica();
    void on_btn_ingresar_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_btn_guardar_clicked();
    void exportar();

private:
    Ui::cFrame *ui;
    vector<Circulo*> listaPolimorfica;
    string arch;
};
#endif // CFRAME_H
