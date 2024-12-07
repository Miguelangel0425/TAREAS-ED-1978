/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified:                                                           *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
#pragma once
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

template<typename T>
class Nodo {
private:
    T dato;
    T nombre1;
    T nombre2;
    T apellido;
    T cedula;
    Nodo* siguiente;
    string correo;
public:
    Nodo(T);
    Nodo(T, T, T, T, T);
    void setDato(T);
    T getDato();
    void setSiguiente(Nodo*);
    Nodo* getSiguiente();
    void setNombre1(T);
    T getNombre1();
    void setNombre2(T);
    T getNombre2();
    void setApellido(T);
    T getApellido();
    void setCorrero(T);
    string getCorreo();
    void setCedula(T);
    string getCedula();


    friend class ListaSimples;

};

