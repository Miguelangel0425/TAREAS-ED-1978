#include "Fraccion.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Fraccion::Fraccion(int num, int den) : numerador(num), denominador(den) {
    while (denominador == 0) {
        cout << "El denominador no puede ser cero. Ingrese de nuevo: ";
        denominador = Utilidades::solicitarEntero("");
    }
    simplificar();
}

int Fraccion::getNumerador() const {
    return numerador;
}

int Fraccion::getDenominador() const {
    return denominador;
}

void Fraccion::setNumerador(int num) {
    numerador = num;
}

void Fraccion::setDenominador(int den) {
    if (den != 0) {
        denominador = den;
    } else {
        cout << "El denominador no puede ser cero." << endl;
    }
}

Fraccion Fraccion::multiplicar(const Fraccion& otra) const {
    int nuevoNumerador = this->numerador * otra.numerador;
    int nuevoDenominador = this->denominador * otra.denominador;
    return Fraccion(nuevoNumerador, nuevoDenominador);
}

void Fraccion::simplificar() {
    int mcd = calcularMCD(numerador, denominador);
    numerador /= mcd;
    denominador /= mcd;
}

void Fraccion::mostrar() const {
    cout << numerador << "/" << denominador << endl;
}

int Fraccion::calcularMCD(int a, int b) const {
    if (b == 0) {
        return a;
    }
    return calcularMCD(b, a % b);
}
