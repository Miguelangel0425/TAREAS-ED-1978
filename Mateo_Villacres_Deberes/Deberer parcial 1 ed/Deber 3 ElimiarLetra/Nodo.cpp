#include "Nodo.h"

using namespace std;

// Constructor
template <typename T>
Nodo<T>::Nodo(T valor) : dato(valor), siguiente(nullptr) {}


template <typename T>
T Nodo<T>::getDato() const {
    return dato;
}

template <typename T>
void Nodo<T>::setDato(T valor) {
    dato = valor;
}


template <typename T>
Nodo<T>* Nodo<T>::getSiguiente() const {
    return siguiente;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo<T>* siguiente) {
    this->siguiente = siguiente;
}


template class Nodo<string>;

