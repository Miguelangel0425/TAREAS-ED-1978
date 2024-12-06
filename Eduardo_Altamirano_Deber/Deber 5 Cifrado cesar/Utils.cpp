#include "Utils.h"
#include <algorithm>
#include <cctype>
#include <conio.h>
#include <vector>

string ingresarLetras(const string& mensaje) {
    string input;
    bool valido = false;

    do {
        cout << mensaje << ": ";
        getline(cin, input);

        // Verificar que solo contenga letras y espacios
        valido = all_of(input.begin(), input.end(), [](char c) {
            return isalpha(c) || isspace(c);
            });

        if (!valido) {
            cout << "Error: Solo se permiten letras. Intente nuevamente." << endl;
        }
    } while (!valido);

    return input;
}