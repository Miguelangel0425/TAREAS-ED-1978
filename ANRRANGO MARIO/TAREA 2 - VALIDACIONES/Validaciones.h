/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified: Lunes, 4 de noviembre de 2024 21:09:32                    *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>
using namespace std;

class Validaciones {
public:
    int ingresar(const char *msj);
    float ingresarFloat(const char *msj);
    char ingresarLetra(const char *msj);
    string ingresarString(const char *msj);
    double ingresarDouble(const char *msj);

private:
};

#endif