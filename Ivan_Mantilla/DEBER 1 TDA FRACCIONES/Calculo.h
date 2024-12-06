/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Deber 1*
 * Autor:                          Ivan Mantilla*
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
#ifndef CALCULO_H
#define CALCULO_H

#include <iostream>

template <typename T>
class Calculo {
public:
    // Constructor que inicializa las variables privadas 'a' y 'b'
    Calculo(T a, T b) : a(a), b(b) {}

    // Función para sumar los valores de 'a' y 'b'
    T sumar();

    // Función para restar los valores de 'a' y 'b'
    T restar();

    // Función para multiplicar los valores de 'a' y 'b'
    T multiplicar();

    // Getters
    T getA() const;
    T getB() const;

    // Setters
    void setA(T value);
    void setB(T value);

private:
    // Atributos que almacenan los valores de tipo T
    T a;
    T b;
};

// **Implementación de las funciones miembro fuera de la clase**

template <typename T>
T Calculo<T>::sumar() {
    return a + b;
}

template <typename T>
T Calculo<T>::restar() {
    return a - b;
}

template <typename T>
T Calculo<T>::multiplicar() {
    return a * b;
}


// Implementación de los getters
template <typename T>
T Calculo<T>::getA() const {
    return a;
}

template <typename T>
T Calculo<T>::getB() const {
    return b;
}


// Implementación de los setters
template <typename T>
void Calculo<T>::setA(T value) {
    a = value;
}

template <typename T>
void Calculo<T>::setB(T value) {
    b = value;
}

#endif // CALCULO_H