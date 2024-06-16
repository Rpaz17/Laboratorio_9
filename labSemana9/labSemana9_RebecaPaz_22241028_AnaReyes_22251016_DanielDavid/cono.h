#ifndef CONO_H
#define CONO_H

#include "circulo.h"

class cono : public Circulo {
private:
    double altura;

public:
    cono(double r = 0.0, double h = 0.0, string nombre = "");
    ~cono();

    void setAltura(double h);
    double getAltura() const;

    double getArea() const;
    double getVolumen() const;

    void Soy() const override;
    void Imprimir() const override;
};

#endif // CONO_H
