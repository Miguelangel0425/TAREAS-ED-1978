/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Deber 1*
 * Autor:                          Ivan Mantilla*
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
#include <iostream>
#include "Calculo.h"

int main() {
    // Crear un objeto de la clase Calculo para el tipo int
    Calculo<int> calculoInt(10, 5);

    std::cout << "Suma: " << calculoInt.sumar() << std::endl;
    std::cout << "Resta: " << calculoInt.restar() << std::endl;
    std::cout << "Multiplicacion: " << calculoInt.multiplicar() << std::endl;

    // Crear un objeto de la clase Calculo para el tipo float
    Calculo<float> calculoFloat(10.5f, 5.2f);

    std::cout << "Suma: " << calculoFloat.sumar() << std::endl;
    std::cout << "Resta: " << calculoFloat.restar() << std::endl;
    std::cout << "Multiplicacion: " << calculoFloat.multiplicar() << std::endl;

    return 0;
}