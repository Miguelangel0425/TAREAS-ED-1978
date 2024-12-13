/***********************************************************************
          Universidad de las Fuerzas Armadas ESPE
 * Module:  Fraccion.h
 * Author:  Adonny Calero
 * Modified: sabado, 2 de noviembre de 2024 23:47:40
 * Purpose: Multiplicacion de fracciones
 * Materia:  Estructura de Datos
 * NRC :  1978
 ***********************************************************************/
#include <iostream>
#include "Utilidades.cpp"
#include "Fraccion.cpp"

using namespace std;

int main() {
    int num1 = Utilidades::solicitarEntero("Ingrese el numerador de la primera fraccion: ");
    int den1 = Utilidades::solicitarEntero("Ingrese el denominador de la primera fraccion: ");
    Fraccion f1(num1, den1);

    int num2 = Utilidades::solicitarEntero("Ingrese el numerador de la segunda fraccion: ");
    int den2 = Utilidades::solicitarEntero("Ingrese el denominador de la segunda fraccion: ");
    Fraccion f2(num2, den2);

    Fraccion resultado = f1.multiplicar(f2);
    resultado.simplificar();

    cout << "Resultado de la multiplicacion: ";
    resultado.mostrar();
    system("pause");

    return 0;
}



