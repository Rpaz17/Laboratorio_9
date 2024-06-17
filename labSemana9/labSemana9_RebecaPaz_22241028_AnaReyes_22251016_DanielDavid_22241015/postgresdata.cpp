#include "postgresdata.h"

postgresdata::postgresdata()
{
    db = QSqlDatabase::addDatabase("QPSQL");
}

postgresdata::~postgresdata()
{
  db.close();
}

bool postgresdata::connect()
{
    db.setHostName("localhost");
    db.setPort(5432);
    db.setDatabaseName("FigurasG");
    db.setUserName("postgres");
    db.setPassword("SqL_ser_170905@pg");
    bool ok = db.open();
    return ok;
}

bool postgresdata::isOpen()
{
    bool open = db.isOpen();
    return open;
}


void postgresdata::limpiarListaFromDB()
{
    for (auto figura : listaFromDB) {
        delete figura;
    }
    listaFromDB.clear();
}

vector<Circulo*> postgresdata::getListaFromDB()
{
    limpiarListaFromDB();
    getlistaConos();
    getlistaEsferas();
    return listaFromDB;
}


void postgresdata::getlistaConos()
{
    QSqlQuery query("SELECT * FROM public.conos");
    int iNombre = query.record().indexOf("nombre");
    int iRadio = query.record().indexOf("radio");
    int iAltura = query.record().indexOf("altura");
    while (query.next()) {
        QString Nombre= query.value(iNombre).toString().trimmed();
        double Radio = query.value(iRadio).toDouble();
        double Altura = query.value(iAltura).toDouble();
        cono* nuevoCono = new cono(Radio, Altura, Nombre.toStdString());
        listaFromDB.push_back(nuevoCono);
    }
}

void postgresdata::getlistaEsferas()
{
    QSqlQuery query("SELECT * FROM public.esferas");
    int iNombre = query.record().indexOf("nombre");
    int iRadio = query.record().indexOf("radio");
    while (query.next()) {
        QString Nombre= query.value(iNombre).toString().trimmed();
        double Radio = query.value(iRadio).toDouble();
        esfera* nuevaEsfera = new esfera(Radio, Nombre.toStdString());
        listaFromDB.push_back(nuevaEsfera);
    }
}

cono* postgresdata::getCono(QString nombre)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM public.conos WHERE nombre = :nombreCono");
    query.bindValue(":nombreCono", nombre);
    query.exec();
    cono* nuevoCono;
    int iNombre = query.record().indexOf("nombre");
    int iRadio = query.record().indexOf("radio");
    int iAltura = query.record().indexOf("altura");
    if(query.next()) {
        QString Nombre= query.value(iNombre).toString();
        double Radio = query.value(iRadio).toDouble();
        double Altura = query.value(iAltura).toDouble();
        nuevoCono = new cono(Radio, Altura, Nombre.toStdString());
    }else
    {
        nuevoCono = new cono();
    }
    return nuevoCono;
}

esfera* postgresdata::getEsfera(QString nombre)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM public.esferas WHERE nombre = :nombreEsfera");
    query.bindValue(":nombreEsfera", nombre);
    query.exec();
    esfera* nuevaEsfera;
    int iNombre = query.record().indexOf("nombre");
    int iRadio = query.record().indexOf("radio");
    if(query.next()) {
        QString Nombre= query.value(iNombre).toString();
        double Radio = query.value(iRadio).toDouble();
        nuevaEsfera = new esfera(Radio, Nombre.toStdString());
        return nuevaEsfera;
    }
    nuevaEsfera = new esfera();
    return nuevaEsfera;
}


bool postgresdata::insertUpdateCono(cono* nuevoCono)
{
    try {
        QString name = QString::fromStdString(nuevoCono->getNombre());
        cono* Cono = getCono(name);
        QSqlQuery query;
        if(Cono->getNombre().empty()){
            query.prepare("INSERT INTO public.conos(nombre, radio, altura) "
                          "VALUES (:nombre, :radio, :altura)");
            query.bindValue(":nombre", name);
            query.bindValue(":radio", nuevoCono->getRad());
            query.bindValue(":altura", nuevoCono->getAltura());
            query.exec();
        }else{
            if(Cono->getRad()!=nuevoCono->getRad() || Cono->getAltura()!=nuevoCono->getAltura())
            {
                query.prepare("UPDATE public.conos SET radio=:radio, altura:altura "
                          "WHERE nombre=:nombre");
                query.bindValue(":nombre", name);
                query.bindValue(":radio", nuevoCono->getRad());
                query.bindValue(":altura", nuevoCono->getAltura());
                query.exec();
            }
        }
        return true;
    }  catch (const std::exception& ex) {
        return false;

    }
}

bool postgresdata::insertUpdateEsfera(esfera* nuevaEsfera)
{
    try {
        QString name = QString::fromStdString(nuevaEsfera->getNombre());
        esfera* Esfera = getEsfera(name);
        QSqlQuery query;
        if(Esfera->getNombre().empty()){
            query.prepare("INSERT INTO public.esferas(nombre, radio) "
                          "VALUES (:nombre, :radio)");
            query.bindValue(":nombre", name);
            query.bindValue(":radio", nuevaEsfera->getRad());
            query.exec();
        }else{
            if(Esfera->getRad()!=nuevaEsfera->getRad())
            {
                query.prepare("UPDATE public.esferas SET radio=:radio"
                              "WHERE nombre=:nombre");
                query.bindValue(":nombre", name);
                query.bindValue(":radio", nuevaEsfera->getRad());
                query.exec();
            }
        }
        return true;

    }  catch (const std::exception& ex) {
        return false;
    }
}

