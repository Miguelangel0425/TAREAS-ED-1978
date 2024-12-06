#include "Utilidades.h"
#include <iostream>
#include <sstream>

using namespace std;

bool Utilidades::esEntero(const string& entrada) {
    for (char c : entrada) {
        if (!isdigit(c) && c != '-' && c != '+') {
            return false;
        }
    }
    return true;
}

int Utilidades::leerEntero(const string& mensaje) {
    string entrada;
    int valor;
    while (true) {
        cout << mensaje;
        cin >> entrada;

        if (esEntero(entrada) && entrada.find('.') == string::npos) {
            stringstream ss(entrada);
            ss >> valor;
            return valor;
        } else {
            cout << "Error: Ingrese un numero entero valido sin decimales." << endl;
        }
    }
}
