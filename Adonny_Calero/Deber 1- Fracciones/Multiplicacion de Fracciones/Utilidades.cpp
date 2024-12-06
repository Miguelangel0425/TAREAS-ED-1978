#include "Utilidades.h"
#include <iostream>
#include <cstdlib>

using namespace std;

bool Utilidades::esEntero(const string& str) {
    if (str.empty()) return false;
    int inicio = (str[0] == '-') ? 1 : 0;
    for (int i = inicio; i < str.size(); ++i) {
        if (!isdigit(str[i])) return false;
    }
    return true;
}

int Utilidades::solicitarEntero(const string& mensaje) {
    string entrada;
    while (true) {
        cout << mensaje;
        cin >> entrada;

        if (esEntero(entrada)) {
            return stoi(entrada);
        } else {
            cout << "Entrada invalida. Por favor, ingrese un numero entero sin decimales." << endl;
        }
    }
}
