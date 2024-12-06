/***********************************************************************
          Universidad de las Fuerzas Armadas ESPE
 * Module:  Fraccion.h
 * Author:  Adonny Calero
 * Modified: domingo, 3 de noviembre de 2024 21:17:08
 * Purpose: Potenciaci�n de fracciones
 * Materia:  Estructura de Datos
 * Profesor:  Fernando Sol�s
 * NRC:  1978
 ***********************************************************************/

#include <iostream>
#include "Utilidades.cpp"
#include "Fraccion.cpp"

using namespace std;

int main() {
    int num = Utilidades::solicitarEntero("Ingrese el numerador de la fraccion: ");
    int den;
    do {
        den = Utilidades::solicitarEntero("Ingrese el denominador de la fraccion (no puede ser cero): ");
        if (den == 0) {
            cout << "El denominador no puede ser cero. Intente de nuevo." << endl;
        }
    } while (den == 0);
    Fraccion fraccion(num, den);

    int exponente = Utilidades::solicitarEntero("Ingrese el exponente: ");

    Fraccion resultado = fraccion.potenciar(exponente);
    cout << "Resultado de la potenciacion: ";
    resultado.mostrar();
    system("pause");

    return 0;
}


