/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified:                                                           *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include <string>

class Lista {
private:
    Nodo* cabeza;
public:
    Lista();
    ~Lista();

    void agregarNodo(const std::string& nombre1, const std::string& nombre2, 
                     const std::string& apellido1, const std::string& apellido2);
    void eliminarCaracter(char caracter);
    void imprimirLista();
};

#endif