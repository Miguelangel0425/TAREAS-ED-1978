#include <stdio.h>
#include <iostream>
#include <list>
#include <string>
#include "Nodo.h"
#pragma once

using namespace std;

template <typename T>
class Lista{

    private:
    T dato;
    Nodo<T>* cabeza;
    
    public:
    Lista();
    ~Lista();
    void agregar(T valor);
    void mostrar() const;
    void eliminarCaracter(char caracter);

};