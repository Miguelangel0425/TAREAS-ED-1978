/***********************************************************************
          Universidad de las Fuerzas Armadas ESPE
 * Author:  Miguel Angel Caiza
 * Modified: lunes, 4 de noviembre de 2024 21:09:32
 * Purpose: Comparacion de fracciones
 * Materia:  Estructura de Datos
 * Profesor:  Fernando Solis
 * NRC :  1978
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
    Fraccion fraccion1(num1, den1);

    int num2 = Utilidades::solicitarEntero("Ingrese el numerador de la segunda fraccion: ");
    int den2;
    do {
        den2 = Utilidades::solicitarEntero("Ingrese el denominador de la segunda fraccion (no puede ser cero): ");
        if (den2 == 0) {
            cout << "El denominador no puede ser cero. Intente de nuevo." << endl;
        }
    } while (den2 == 0);
    Fraccion fraccion2(num2, den2);

    int comparacion = fraccion1.comparar(fraccion2);
    if (comparacion > 0) {
        cout << "La fraccion " << num1 << "/" << den1 << " es mayor que " << num2 << "/" << den2 << "." << endl;
    } else if (comparacion < 0) {
        cout << "La fraccion " << num1 << "/" << den1 << " es menor que " << num2 << "/" << den2 << "." << endl;
    } else {
        cout << "Las fracciones " << num1 << "/" << den1 << " y " << num2 << "/" << den2 << " son iguales." << endl;
    }
    system("pause");

    return 0;
}


