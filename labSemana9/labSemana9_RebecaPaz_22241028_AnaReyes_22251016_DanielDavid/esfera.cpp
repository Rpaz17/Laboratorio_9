#include "esfera.h"
#include <iostream>
#include <cmath>

esfera::esfera(double r, string nombre) : Circulo(r, nombre) {}
esfera::~esfera() {}

double esfera::getArea() const {
    return 4 * Circulo::getArea();
}

double esfera::getVolumen() const {
    return (4.0 / 3.0) * M_PI * pow(rad, 3);
}

void esfera::Soy() const {
    std::cout << "Soy una esfera llamada " << name << endl;
}

void esfera::Imprimir() const {
    std::cout << "Nombre: " << name << ", Radio: " << rad << "Área: " << getArea() << ", Volumen: " << getVolumen() << endl;
}
