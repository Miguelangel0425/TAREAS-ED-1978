/***********************************************************************
          Universidad de las Fuerzas Armadas ESPE
 * Module:  Fraccion.h
 * Author:  Miguel Angel Caiza
 * Modified: sabado, 2 de noviembre de 2024 18:29:40
 * Purpose: Resta de fracciones
 * Materia:  Estructura de Datos
 * NRC:  1978
 ***********************************************************************/
#include <iostream>
#include "Utilidades.cpp"
#include "Fraccion.cpp"

using namespace std;

int main() {
    int num1 = Utilidades::leerEntero("Ingrese el numerador de la primera fraccion: ");
    int den1;
    while (true) {
        den1 = Utilidades::leerEntero("Ingrese el denominador de la primera fraccion: ");
        if (den1 != 0) break;
        cout << "Error: El denominador no puede ser cero." << endl;
    }

    int num2 = Utilidades::leerEntero("Ingrese el numerador de la segunda fraccion: ");
    int den2;
    while (true) {
        den2 = Utilidades::leerEntero("Ingrese el denominador de la segunda fraccion: ");
        if (den2 != 0) break;
        cout << "Error: El denominador no puede ser cero." << endl;
    }

    Fraccion fraccion1(num1, den1);
    Fraccion fraccion2(num2, den2);

    Fraccion resultado = fraccion1.restar(fraccion2);

    cout << "La resta de las fracciones es: ";
    resultado.mostrar();
    system("pause");

    return 0;
}



