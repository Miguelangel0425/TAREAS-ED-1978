/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Eduardo Altamirano     *
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

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

