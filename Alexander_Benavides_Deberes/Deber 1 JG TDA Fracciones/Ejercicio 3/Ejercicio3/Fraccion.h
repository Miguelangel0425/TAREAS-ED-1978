#pragma once
// Fraccion.h
#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    // Constructor
    Fraccion(int num = 0, int denom = 1);

    // M�todos de acceso
    int getNumerador() const;
    int getDenominador() const;

    // M�todo para calcular el valor decimal de la fracci�n
    float valorDecimal() const;

    // M�todo para restar dos fracciones
    Fraccion restar(const Fraccion& otra) const;
};

#endif
