#include "cono.h"
#include <iostream>
#include <cmath>

cono::cono(double r, double h, string nombre) : Circulo(r, nombre), altura(h) {}
cono::~cono() {}

void cono::setAltura(double h) {
    altura = h;
}

double cono::getAltura() const {
    return altura;
}

double cono::getArea() const {
    return Circulo::getArea() + M_PI * rad * sqrt(altura * altura + rad * rad);
}

double cono::getVolumen() const {
    return (Circulo::getArea() * altura) / 3;
}

void cono::Soy() const {
    std::cout << "Soy un cono llamado " << name << endl;
}

void cono::Imprimir() const {
    std::cout << "Nombre: " << name << ", Radio: " << rad << ", Altura: " << altura <<
                 "Área: " << getArea() << ", Volumen: " << getVolumen() << endl;
}
