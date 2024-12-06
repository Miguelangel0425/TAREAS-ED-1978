#include <stdio.h>
#include <iostream>
#include <list>
#include <string>
#pragma once

using namespace std;

template <typename T>
class Nodo{

    private:
    T dato;
    Nodo<T>* siguiente;

    public:
    Nodo(T valor);
    T getDato() const;
    void setDato(T valor);                 
    Nodo<T>* getSiguiente() const;         
    void setSiguiente(Nodo<T>* siguiente);
};