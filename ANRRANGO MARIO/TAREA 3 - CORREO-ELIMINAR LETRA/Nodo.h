/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified:                                                           *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
#ifndef NODO_H
#define NODO_H

#include <string>

class Nodo {
public:
    std::string nombre1;
    std::string nombre2;
    std::string apellido1;
    std::string apellido2;
    Nodo* siguiente;

    Nodo(const std::string& nombre1, const std::string& nombre2, 
         const std::string& apellido1, const std::string& apellido2);
};

#endif