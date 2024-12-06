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



string generarContrasenia(const string& nombre1, const string& apellido) {
    return nombre1 + apellido; // Simple combinación para generar contraseña
}

string contraseniaCesar(const string& texto, int desplazamiento) {
    string resultado = texto;
    for (char& c : resultado) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + desplazamiento) % 26 + base;
        }
    }
    return resultado;
}

int mostrarMenuConFlechas(const vector<string>& opciones) {
    int seleccion = 0;
    char tecla;

    do {
        system("cls");
        for (size_t i = 0; i < opciones.size(); ++i) {
            if (i == seleccion) cout << "> ";
            else cout << "  ";
            cout << opciones[i] << endl;
        }

        tecla = _getch();
        if (tecla == 72 && seleccion > 0) --seleccion; // Flecha arriba
        else if (tecla == 80 && seleccion < opciones.size() - 1) ++seleccion; // Flecha abajo
    } while (tecla != 13); // Enter

    return seleccion;
}

