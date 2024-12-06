#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Funciones auxiliares
string ingresarLetras(const string& mensaje);
string generarContrasenia(const string& nombre1, const string& apellido);
string contraseniaCesar(const string& texto, int desplazamiento);
int mostrarMenuConFlechas(const vector<string>& opciones);

#endif

