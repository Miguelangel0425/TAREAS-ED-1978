//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
// POGRAMA:
// AUTOR: Villacreces Murgueitio Luis Mateo
// FECHA DE CREACIÓN:
// FECHA DE MODIFICACIÓN:
// NRC:
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include <iostream>
#include "Fraccion.h"

using namespace std;

int main() {
    int num1, denom1, num2, denom2, num3, denom3;

    cout << "Ingrese el numerador de la primera fraccion: ";
    cin >> num1;
    cout << "Ingrese el denominador de la primera fraccion: ";
    cin >> denom1;

    cout << "Ingrese el numerador de la segunda fraccion: ";
    cin >> num2;
    cout << "Ingrese el denominador de la segunda fraccion: ";
    cin >> denom2;

    cout << "Ingrese el numerador de la tercera fraccion: ";
    cin >> num3;
    cout << "Ingrese el denominador de la tercera fraccion: ";
    cin >> denom3;

    try {
        Fraccion fraccion1(num1, denom1);
        Fraccion fraccion2(num2, denom2);
        Fraccion fraccion3(num3, denom3);

        // Multiplicar las tres fracciones
        Fraccion resultado = fraccion1.multiplicar(fraccion2).multiplicar(fraccion3);

        cout << "El resultado de la multiplicacion de las tres fracciones es: " << resultado.valorDecimal() << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
