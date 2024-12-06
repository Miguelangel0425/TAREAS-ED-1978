#include "Fraccion.h"
#include <iostream>
#include <cmath>

using namespace std;

Fraccion::Fraccion(int num, int den) : numerador(num), denominador(den) {
    if (den == 0) {
        cout << "El denominador no puede ser cero. Se establece a 1." << endl;
        denominador = 1;
    }
    simplificar();
}

int Fraccion::calcularMCD(int a, int b) const {
    if (b == 0) {
        return a;
    }
    return calcularMCD(b, a % b);
}

int Fraccion::getNumerador() const {
    return numerador;
}

int Fraccion::getDenominador() const {
    return denominador;
}

void Fraccion::setNumerador(int num) {
    numerador = num;
    simplificar();
}

void Fraccion::setDenominador(int den) {
    if (den == 0) {
        cout << "El denominador no puede ser cero." << endl;
    } else {
        denominador = den;
        simplificar();
    }
}

void Fraccion::simplificar() {
    int mcd = calcularMCD(abs(numerador), abs(denominador));
    numerador /= mcd;
    denominador /= mcd;

    if (denominador < 0) {
        numerador = -numerador;
        denominador = -denominador;
    }
}

int Fraccion::comparar(const Fraccion& otra) const {
    int resultado = numerador * otra.denominador - otra.numerador * denominador;
    return resultado;
}

void Fraccion::mostrar() const {
    cout << numerador << "/" << denominador << endl;
}
