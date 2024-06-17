#ifndef CFRAME_H
#define CFRAME_H
#include "circulo.h"
#include "postgresdata.h"
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
    void on_btn_cargarAL_clicked();
    void on_btn_insertarBD_clicked();
    void on_btn_cargarBDL_clicked();
    void on_btn_salir_clicked();
    bool insertarUpdateCono(cono* nuevoCono);
    bool insertarUpdateEsfera(esfera* nuevaEsfera);

private:
    Ui::cFrame *ui;
    vector<Circulo*> listaPolimorfica;
    string arch;
    postgresdata baseD;
};
#endif // CFRAME_H
