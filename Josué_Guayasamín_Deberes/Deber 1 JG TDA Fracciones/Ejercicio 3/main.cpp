
/********************************************************
*********************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE		    **
** Alumno: Josue Guayasamin                             **
** Fecha de Creacion: Sabado, 1 de noviembre de 2024   **
** Fecha de Modificacion:Martes, 5 de noviembre de 2024 **
** Enunciado: Tipos de datos Abstractos                 **
** NRC: 1978                                            **
*******************************************************
*******************************************************/




#include <iostream>
#include "Fraccion.h"

using namespace std;

int main() {
    int num1, denom1, num2, denom2;

    cout << "Ingrese el numerador de la primera fraccion: ";
    cin >> num1;
    cout << "Ingrese el denominador de la primera fraccion: ";
    cin >> denom1;

    cout << "Ingrese el numerador de la segunda fraccion: ";
    cin >> num2;
    cout << "Ingrese el denominador de la segunda fraccion: ";
    cin >> denom2;

    try {
        Fraccion fraccion1(num1, denom1);
        Fraccion fraccion2(num2, denom2);

        Fraccion resultado = fraccion1.restar(fraccion2);

        cout << "El resultado de la resta es: " << resultado.valorDecimal() << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
