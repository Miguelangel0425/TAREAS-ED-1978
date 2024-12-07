/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Heidy Mera                                          *
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <string>
#include "Validaciones.cpp"

using namespace std;

int main(){
    
    int numeroEntero1;
    float numeroFlotante1;
    double numeroDoble1;
    char let;
    string cadena;

    Validaciones<int> entero;
    Validaciones<float> flotante;
    Validaciones<string> nombre;
    Validaciones<double> doble;
    Validaciones<char> letra;


    numeroEntero1 = entero.ingresar("Ingrese un valor entero: ", "entero");
    cout << endl << numeroEntero1 << endl;


    numeroFlotante1 = flotante.ingresar("Ingrese un valor flotante: ", "flotante");
    cout << endl << numeroFlotante1 << endl;


    numeroDoble1 = doble.ingresar("Ingrese un valor double: ", "double");
    cout << endl << numeroDoble1 << endl;
    let = letra.ingresar("Ingrese una letra: ", "char");
    cout << endl << let << endl;
    cadena = nombre.ingresar("Ingrese su nombre: ", "string");
    cout << endl << cadena << endl;
    system("pause");
    return 0;
}