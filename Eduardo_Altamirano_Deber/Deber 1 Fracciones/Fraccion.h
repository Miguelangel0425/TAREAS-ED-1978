

#pragma once
#include <iostream>

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    // Constructor
    Fraccion(int numerador = 0, int denominador = 1);

    // Métodos para realizar operaciones
    Fraccion multiplicar(const Fraccion &otra) const;

    // Métodos de acceso
    int getNumerador() const;
    int getDenominador() const;
    double valorDecimal() const;

    // Simplificación de la fracción
    void simplificar();
};

