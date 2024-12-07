/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified: Lunes, 4 de noviembre de 2024 21:09:32                    *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
#include "Validaciones.h"
#include <iostream>

using namespace std;

int main() {
    Validaciones validador;

    int imprimirNumeros = validador.ingresar("Ingrese un valor entero: ");
    cout << endl << "Valor entero ingresado: " << imprimirNumeros << endl;

    char imprimirLetras = validador.ingresarLetra("Ingrese una letra: ");
    cout << endl << "Letra ingresada: " << imprimirLetras << endl;

    float imprimirFloats = validador.ingresarFloat("Ingrese un valor flotante: ");
    cout << endl << "Valor flotante ingresado: " << imprimirFloats << endl;

    string imprimirString = validador.ingresarString("Ingrese un string: ");
    cout << endl << "String ingresado: " << imprimirString << endl;

    double imprimirDouble = validador.ingresarDouble("Ingrese un valor double: ");
    cout << endl << "Valor double ingresado: " << imprimirDouble << endl;

    return 0;
}
