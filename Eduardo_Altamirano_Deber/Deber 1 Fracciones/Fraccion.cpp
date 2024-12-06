/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Eduardo Altamirano     *
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
#include "Fraccion.h"
#include <stdexcept>
#include <numeric> // Para std::__gcd

// Constructor
Fraccion::Fraccion(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::invalid_argument("El denominador no puede ser cero.");
    }
    this->numerador = numerador;
    this->denominador = denominador;
    simplificar(); // Simplificar la fracción al inicializar
}

// Multiplicación de fracciones
Fraccion Fraccion::multiplicar(const Fraccion &otra) const {
    int nuevoNumerador = this->numerador * otra.numerador;
    int nuevoDenominador = this->denominador * otra.denominador;

    if (nuevoDenominador == 0) {
        throw std::overflow_error("Resultado con denominador igual a cero.");
    }

    Fraccion resultado(nuevoNumerador, nuevoDenominador);
    resultado.simplificar(); // Simplificar el resultado
    return resultado;
}

// Obtener el numerador
int Fraccion::getNumerador() const {
    return numerador;
}

// Obtener el denominador
int Fraccion::getDenominador() const {
    return denominador;
}

// Obtener el valor decimal
double Fraccion::valorDecimal() const {
    return static_cast<double>(numerador) / denominador;
}

// Simplificar la fracción
void Fraccion::simplificar() {
    int mcd = std::gcd(numerador, denominador); // Calcular el MCD
    numerador /= mcd;
    denominador /= mcd;
    if (denominador < 0) { // Asegurar que el signo esté en el numerador
        numerador = -numerador;
        denominador = -denominador;
    }
}
