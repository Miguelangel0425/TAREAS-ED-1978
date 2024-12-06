#include "Fraccion.h"
#include "Utilidades.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Fraccion::Fraccion(int num, int den) : numerador(num), denominador(den) {
    if (denominador == 0) {
        cout << "Error: el denominador no puede ser cero." << endl;
        exit(1);
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
    simplificar();
}

void Fraccion::setDenominador(int den) {
    if (den == 0) {
        cout << "Error: el denominador no puede ser cero." << endl;
        exit(1);
    }
    denominador = den;
    simplificar();
}

Fraccion Fraccion::restar(const Fraccion& otra) const {
    int nuevoNumerador = numerador * otra.denominador - otra.numerador * denominador;
    int nuevoDenominador = denominador * otra.denominador;
    Fraccion resultado(nuevoNumerador, nuevoDenominador);
    resultado.simplificar();
    return resultado;
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

void Fraccion::simplificar() {
    int divisor = calcularMCD(numerador, denominador);
    numerador /= divisor;
    denominador /= divisor;
}
