#ifndef ESFERA_H
#define ESFERA_H
#include <iostream>
#include "circulo.h"

using namespace std;

class esfera : public Circulo {
public:
    esfera(double r = 0.0, string nombre = "");
    ~esfera();

    double getArea() const;
    double getVolumen() const;

    void Soy() const override;
    void Imprimir() const override;
};

#endif // ESFERA_H
