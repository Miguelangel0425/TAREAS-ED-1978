#include "Lista.h"
#include "Nodo.h"

// Constructor
template <typename T>
Lista<T>::Lista() : cabeza(nullptr) {}

// Destructor
template <typename T>
Lista<T>::~Lista() {
    while (cabeza != nullptr) {
        Nodo<T>* temp = cabeza;
        cabeza = cabeza->getSiguiente();
        delete temp;
    }
}


template <typename T>
void Lista<T>::agregar(T valor) {
    Nodo<T>* nuevoNodo = new Nodo<T>(valor);
    nuevoNodo->setSiguiente(cabeza);
    cabeza = nuevoNodo;
}

template <typename T>
void Lista<T>::mostrar() const {
    Nodo<T>* temp = cabeza;
    if (temp == nullptr) {

        printf("La lista está vacía.\n");
        return;
    }
    // Mientras haya nodos en la lista
    while (temp != nullptr) {
        printf("%s ", temp->getDato().c_str());
        temp = temp->getSiguiente(); 
    }
    printf("\n");
}

template <typename T>
void Lista<T>::eliminarCaracter(char caracter) {
    Nodo<T>* actual = this->cabeza;
    while (actual != nullptr) {
        if constexpr (std::is_same<T, std::string>::value) {
      
            std::string dato = actual->getDato();
            dato.erase(std::remove(dato.begin(), dato.end(), caracter), dato.end());
            actual->setDato(dato);
        }
        actual = actual->getSiguiente();
    }
    printf("\nCaracter '%c' eliminado de todos los elementos.\n", caracter);
}





template class Lista<string>;
