#include "cframe.h"
#include "ui_cframe.h"
#include <iostream>
#include <sstream>
#include <vector>
#include "cono.h"
#include "esfera.h"
#include <fstream>
#include <QMessageBox>
#include <algorithm>
#include <iterator>
using std::string;
using std::ifstream;
using std::ofstream;
using std::stringstream;


cFrame::cFrame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cFrame)
{
    ui->setupUi(this);
    ui->lE_altura->setEnabled(false);
    ui->lE_nombre->setEnabled(false);
    ui->lE_radio->setEnabled(false);

    arch = "Ciruclo.xls";

    baseD.connect();
}

cFrame::~cFrame()
{
    delete ui;
}


void cFrame::on_btn_generar_clicked()
{
    generarListaPredefinida();
}

void cFrame::generarListaPredefinida()
{
    // Verificar si la lista está vacía
    if (listaPolimorfica.empty()) {
        ui->tE_listaPredef->setText("No hay elementos en la lista.");
        std::cout << "Lista polimorfica vacia." << std::endl;
        return;
    }

    // Limpiar el contenido anterior del QTextEdit
    ui->tE_listaPredef->clear();
    // Mostrar los datos en el QTextEdit
    for (const auto& figura : listaPolimorfica) {
        std::stringstream ss;
        if (cono* c = dynamic_cast<cono*>(figura)) {
            ss << "Cono: Nombre: " << c->getNombre() << ", Radio: " << c->getRad() << ", Altura: " << c->getAltura();
        } else if (esfera* e = dynamic_cast<esfera*>(figura)) {
            ss << "Esfera: Nombre: " << e->getNombre()<< ", Radio: " << e->getRad();
        } else {
            ss << "Círculo: Nombre: " << figura->getNombre() << ", Radio: " << figura->getRad();
        }
        ss << std::endl;
        ui->tE_listaPredef->insertPlainText(QString::fromStdString(ss.str()));
    }

    std::cout << "Lista polimorfica predefinida generada." << std::endl;
}

void cFrame::limpiarListaPolimorfica()
{
    for (auto figura : listaPolimorfica) {
        delete figura;
    }
    listaPolimorfica.clear();
}


void cFrame::on_btn_ingresar_clicked()
{
    double radio = ui->lE_radio->text().toDouble();
    string nombre = ui->lE_nombre->text().toStdString();
    double altura = ui->lE_altura->text().toDouble();

    bool figuraExistente = false;

    for(const auto* figura : listaPolimorfica){
        if(figura->getNombre() == nombre){
            figuraExistente = true;
            break;
        }
    }

    if (figuraExistente) {
        QMessageBox::warning(this, "Figura Existente", "La figura ya está ingresada en la lista.");
    } else {
        if(ui->radioButton->isChecked()) {
            cono* nuevoCono = new cono(radio, altura, nombre);
            listaPolimorfica.push_back(nuevoCono);
        }
        else if(ui->radioButton_2->isChecked()) {
            esfera* nuevaEsfera = new esfera(radio, nombre);
            listaPolimorfica.push_back(nuevaEsfera);
        }
    }

    ui->lE_radio->clear();
    ui->lE_nombre->clear();
    ui->lE_altura->clear();
}


void cFrame::on_radioButton_clicked()
{
    ui->lE_altura->setEnabled(true);
    ui->lE_nombre->setEnabled(true);
    ui->lE_radio->setEnabled(true);
}


void cFrame::on_radioButton_2_clicked()
{
    ui->lE_altura->setEnabled(false);
    ui->lE_nombre->setEnabled(true);
    ui->lE_radio->setEnabled(true);
}


void cFrame::on_btn_guardar_clicked()
{
    exportar();
}

void cFrame::exportar()
{
    if(listaPolimorfica.empty()){
        QMessageBox::warning(this, "Advertencia", "No hay elementos en la lista para guardar.");
        return;
    }

    ofstream archivo(arch, std::ios::out | std::ios::app);
    if (!archivo.is_open()) {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo para escribir.");
        return;
    }

    for (const auto& figura : listaPolimorfica) {
        archivo << figura->getNombre() << "\t"; // Nombre en la primera columna
        if (cono* c = dynamic_cast<cono*>(figura)) {
            archivo << "Cono\t"; // Tipo en la segunda columna
            archivo << figura->getRad() << "\t"; // Radio en la tercera columna
            archivo << c->getAltura() << std::endl; // Altura en la última columna
        } else if (esfera* e = dynamic_cast<esfera*>(figura)) {
            archivo << "Esfera\t"; // Tipo en la segunda columna
            archivo << e->getRad() << "\t"; // Radio en la tercera columna
            archivo << "\t" << std::endl; // No hay altura, dejar la columna vacía
        } else {
            archivo << "Circulo\t"; // Tipo en la segunda columna
            archivo << figura->getRad() << "\t"; // Radio en la tercera columna
            archivo << "\t" << std::endl; // No hay altura, dejar la columna vacía
        }
    }
    archivo.close();
    QMessageBox::information(this, "Guardado", "Los datos se han guardado correctamente en el archivo Excel.");

}


void cFrame::on_btn_cargarAL_clicked()
{
    std::ifstream archivo(arch);

    if (!archivo.is_open())
    {
        QMessageBox::warning(this, "ERORR!!", "Intente otra vez..");
        return;
    }

    limpiarListaPolimorfica();

    string linea;


    while (std::getline(archivo, linea))
    {
        stringstream ss(linea);
        string nombre, tipo;
        double radio, altura = 0.0;

        getline(ss, nombre, '\t');
        getline(ss, tipo, '\t');
        ss >> radio;

        if (tipo == "Cono")
        {
            ss >> altura;
            cono* nuevoCono = new cono(radio, altura, nombre);
            listaPolimorfica.push_back(nuevoCono);
        } else if (tipo == "Esfera")
        {
            esfera* nuevaEsfera = new esfera(radio, nombre);
            listaPolimorfica.push_back(nuevaEsfera);
        }
    }

    archivo.close();
    QMessageBox::information(this, "Datos Cargados", "Los datos han sido importados correctamente.");
}




void cFrame::on_btn_insertarBD_clicked()
{
    if(baseD.connect()){
        if(listaPolimorfica.empty()){
            QMessageBox::warning(this, "Advertencia", "No hay elementos en la lista para guardar.");
            return;
        }

        for (const auto& figura : listaPolimorfica) {

            if (cono* c = dynamic_cast<cono*>(figura)) {
                baseD.insertUpdateCono(c);
            } else if (esfera* e = dynamic_cast<esfera*>(figura)) {
                baseD.insertUpdateEsfera(e);
            } else {

            }
            QMessageBox::information(this, "Datos cargados", "se exportaron los datos a la base de datos.");
        }

    }else{
        QMessageBox::critical(this, "ERORR!!", "No hubo conexion a la basbe de datos.");
    }

}


void cFrame::on_btn_cargarBDL_clicked()
{

    if(baseD.isOpen()){
        limpiarListaPolimorfica();
        vector<Circulo*> listaFromDB = baseD.getListaFromDB();
        if(listaFromDB.empty()){
            QMessageBox::warning(this, "Advertencia", "No hay elementos en la base de datos para importar.");
        }else{
            for (const auto& figura: listaFromDB)
            {
                if (cono* c = dynamic_cast<cono*>(figura)) {
                    listaPolimorfica.push_back(c);
                } else if (esfera* e = dynamic_cast<esfera*>(figura)) {
                    listaPolimorfica.push_back(e);
                }
            }
            QMessageBox::information(this, "Datos cargados", "se importaron los datos de la base de datos.");
        }
    }
}


void cFrame::on_btn_salir_clicked()
{
    exit(0);
}

bool cFrame::insertarUpdateCono(cono *nuevoCono)
{
    ifstream archivo(arch);

       if (!archivo.is_open())
       {
          QMessageBox::critical(this, "EROR", "que dundis no puede :p.");
           return false;
       }

       string linea;
       while (std::getline(archivo, linea))
       {
           stringstream ss(linea);
           string nombre, tipo;
           double radio, altura = 0.0;

           getline(ss, nombre, '\t');
           getline(ss, tipo, '\t');
           ss >> radio;
           ss >> altura;

           if (tipo == "Cono" && nombre == nuevoCono->getNombre())
           {
               archivo.close();
               return false;
           }
       }
       archivo.close();

      ofstream archivo_out(arch, std::ios::out | std::ios::app);
       if (!archivo_out.is_open())
       {
           QMessageBox::critical(this, "EROR", "que dundis no puede :p.");
           return false;
       }

       archivo_out << nuevoCono->getNombre() << "Cono\t" << nuevoCono->getRad() << "\t" << nuevoCono->getAltura() <<endl;
       archivo_out.close();
       return true;
}

bool cFrame::insertarUpdateEsfera(esfera *nuevaEsfera)
{
    ifstream archivo(arch);

      if (!archivo.is_open())
      {
          QMessageBox::critical(this, "EROR", "que dundis no puede :p.");
          return false;
      }

      string linea;
      while (std::getline(archivo, linea)) {
          stringstream ss(linea);
          string nombre, tipo;
          double radio;

          getline(ss, nombre, '\t');
          getline(ss, tipo, '\t');
          ss >> radio;

          if (tipo == "Esfera" && nombre == nuevaEsfera->getNombre())
          {
              archivo.close();
              return false;
          }
      }
      archivo.close();

      ofstream archivo_out(arch, std::ios::out | std::ios::app);
      if (!archivo_out.is_open())
      {
          QMessageBox::critical(this, "EROR", "que dundis no puede :p.");
          return false;
      }

      archivo_out << nuevaEsfera->getNombre() << "Esfera\t" << nuevaEsfera->getRad() << "\t" <<endl;
      archivo_out.close();
      return true;
}

