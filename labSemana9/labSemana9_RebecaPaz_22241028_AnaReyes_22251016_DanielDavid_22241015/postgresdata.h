#ifndef POSTGRESDATA_H
#define POSTGRESDATA_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QVariant>
#include "circulo.h"
#include "cono.h"
#include "esfera.h"
#include <vector>


class postgresdata
{
public:

    postgresdata();
    ~postgresdata();
    QSqlDatabase db;
    bool connect();
    bool isOpen();
    vector<Circulo *> getListaFromDB();
    cono* getCono(QString nombre);
    esfera* getEsfera(QString nombre);
    bool insertUpdateCono(cono* nuevoCono);
    bool insertUpdateEsfera(esfera* nuevaEsfera);

private:
    vector<Circulo*> listaFromDB;
    void limpiarListaFromDB();
    void getlistaConos();
    void getlistaEsferas();
};

#endif // POSTGRESDATA_H
