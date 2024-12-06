/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Suma de matrices                                    *
 * Autor:                          Andrade Danna                                       *
 * Fecha de creacion:              01/11/2024                                          *
 * Fecha de modificacion:          05/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
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

    // M�todo para multiplicar dos fracciones
    Fraccion multiplicar(const Fraccion& otra) const;
};

#endif
