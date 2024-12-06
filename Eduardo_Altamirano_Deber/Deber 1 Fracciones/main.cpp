/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre Fraccion                             *
 * Autor:                          Eduardo Altamirano                                  *
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include "Fraccion.cpp"
#include <iostream>
using namespace std;

// Función para validar la entrada del denominador
int ingresarDenominador(const string &mensaje) {
    int denominador;
    while (true) {
        cout << mensaje;
        cin >> denominador;
        if (denominador != 0) {
            return denominador;
        } else {
            cerr << "El denominador no puede ser cero. Inténtelo de nuevo." << endl;
        }
    }
}

int main() {
    try {
        // Ingreso de datos
        int num1, denom1, num2, denom2;
        cout << "Ingrese el numerador de la primera fracción: ";
        cin >> num1;
        denom1 = ingresarDenominador("Ingrese el denominador de la primera fracción: ");

        cout << "Ingrese el numerador de la segunda fracción: ";
        cin >> num2;
        denom2 = ingresarDenominador("Ingrese el denominador de la segunda fracción: ");

        // Crear las fracciones
        Fraccion fraccion1(num1, denom1);
        Fraccion fraccion2(num2, denom2);

        // Operación de multiplicación
        Fraccion resultado = fraccion1.multiplicar(fraccion2);

        // Mostrar los resultados
        cout << "El resultado de la multiplicación es: "
             << resultado.getNumerador() << "/" << resultado.getDenominador()
             << " (" << resultado.valorDecimal() << ")" << endl;

    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
