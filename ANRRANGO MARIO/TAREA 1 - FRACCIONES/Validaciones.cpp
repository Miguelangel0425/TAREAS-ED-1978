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
#include <cctype>

using namespace std;

bool Validaciones::esEntero(const string& str) {
    if (str.empty()) return false;
    int inicio = (str[0] == '-') ? 1 : 0;
    for (int i = inicio; i < str.size(); ++i) {
        if (!isdigit(str[i])) return false;
    }
    return true;
}

int Validaciones::solicitarEntero(const string& mensaje) {
    string entrada;
    while (true) {
        cout << mensaje;
        cin >> entrada;

        if (esEntero(entrada)) {
            return stoi(entrada);
        } else {
            cout << "Entrada inválida. Por favor, ingrese un número entero sin decimales." << endl;
        }
    }
}
