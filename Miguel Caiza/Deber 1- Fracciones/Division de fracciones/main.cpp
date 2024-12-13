/***********************************************************************
          Universidad de las Fuerzas Armadas ESPE
 * Module:  Fraccion.h
 * Author:  Miguel Angel Caiza
 * Modified: domingo, 3 de noviembre de 2024 14:10:17
 * Purpose: Division de fracciones
 * Materia:  Estructura de Datos
 * Profesor:  Fernando Solis
 * NRC:  1978
 ***********************************************************************/
#include <iostream>
#include "Utilidades.cpp"
#include "Fraccion.cpp"

using namespace std;

int main() {
    int num1 = Utilidades::solicitarEntero("Ingrese el numerador de la primera fraccion: ");
    int den1;
    do {
        den1 = Utilidades::solicitarEntero("Ingrese el denominador de la primera fraccion (no puede ser cero): ");
        if (den1 == 0) {
            cout << "El denominador no puede ser cero. Intente de nuevo." << endl;
        }
    } while (den1 == 0);
    Fraccion f1(num1, den1);

    int num2 = Utilidades::solicitarEntero("Ingrese el numerador de la segunda fraccion: ");
    int den2;
    do {
        den2 = Utilidades::solicitarEntero("Ingrese el denominador de la segunda fraccion (no puede ser cero): ");
        if (den2 == 0) {
            cout << "El denominador no puede ser cero. Intente de nuevo." << endl;
        }
    } while (den2 == 0);
    Fraccion f2(num2, den2);

    try {
        Fraccion resultado = f1.dividir(f2);
        cout << "Resultado de la division: ";
        resultado.mostrar();
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    system("pause");

    return 0;
}

