#ifndef CIRCULO_H
#define CIRCULO_H
#include <cmath>
#include <QString>
#include <iostream>

using namespace std;

class Circulo
{
protected:
    double rad;
    string name;
public:
    Circulo(double radio = 0.0, string nombre = "") : rad(radio), name(nombre){}
    virtual ~Circulo() {}

    void setRad(double radio){
        rad = radio;
    }

    double getRad() const{
        return rad;
    }

    string getNombre() const {
        return name;
    }

    double getDiametro() const{
        return 2*rad;
    }

    double getCircunferencia() const {
        return M_PI * getDiametro();
    }

    double getArea() const{
        return M_PI * rad * rad;
    }

    virtual void Soy() const = 0;
    virtual void Imprimir() const = 0;

};

#endif // CIRCULO_H
