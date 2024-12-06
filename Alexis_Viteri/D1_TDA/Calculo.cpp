/*
Universidad de las Fuerzas Armadas ESPE
Programa TDA
Alexis Viteri
Fecha de creacion:  31/10/2024
Ultima fecha de modificacion:   01/11/2024
Estructura de Datos
NRC:  1978
*/
#include<iostream> 
#include<conio.h> 
#include "Calculo.h" 
#include <stdio.h> 
using namespace std;
template <typename T>
Calculo<T>::Calculo(T a, T b)
{
    numero1 = a;
    numero2 = b;
}
// **Funci�n para sumar los valores de a y b**
template <typename T> 
T Calculo<T>::sumar() { 
    T resultado;
    return resultado = numero1 + numero2;  
} 
// **Funci�n para restar los valores de a y b** 
template <typename T> 
T Calculo<T>::restar() { 
    T resultado;
    return resultado = numero1 - numero2;  
 } 
// **Funci�n para multiplicar los valores de a y b**
template <typename T> 
T Calculo<T>::multiplicar() { 
    T resultado;
    return resultado = numero1 * numero2;  
 } 
 

