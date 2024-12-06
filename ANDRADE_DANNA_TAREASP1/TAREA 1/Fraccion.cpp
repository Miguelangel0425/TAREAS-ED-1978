/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Suma de matrices                                    *
 * Autor:                          Andrade Danna                                       *
 * Fecha de creacion:              01/11/2024                                          *
 * Fecha de modificacion:          05/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
#include "Fraccion.h"
#include <stdexcept>

Fraccion::Fraccion(int num, int denom) : numerador(num), denominador(denom) {
    if (denominador == 0) {
        throw std::invalid_argument("El denominador no puede ser cero.");
    }
}

int Fraccion::getNumerador() const {
    return numerador;
}

int Fraccion::getDenominador() const {
    return denominador;
}

float Fraccion::valorDecimal() const {
    return static_cast<float>(numerador) / denominador;
}

Fraccion Fraccion::multiplicar(const Fraccion& otra) const {
    int nuevoNumerador = numerador * otra.getNumerador();
    int nuevoDenominador = denominador * otra.getDenominador();
    return Fraccion(nuevoNumerador, nuevoDenominador);
}
