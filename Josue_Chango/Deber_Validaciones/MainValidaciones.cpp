/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Josue Chango, Adonny Calero, Eduardo altamirano     *
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
    
    int numeroEntero1, numeroEntero2, resultadoEntero;
    float numeroFlotante1,numeroFlotante2, resultadoFlotante;
    double numeroDoble1,numeroDoble2, resultadoDoble;
    char let;
    string cadena;

    Validaciones<int> entero;
    Validaciones<float> flotante;
    Validaciones<string> nombre;
    Validaciones<double> doble;
    Validaciones<char> letra;


    numeroEntero1 = entero.ingresar("ingrese un valor entero: ", "entero");
    cout << endl << numeroEntero1 << endl;
    numeroEntero2 = entero.ingresar("ingrese un valor entero: ", "entero");
    cout << endl << numeroEntero2 << endl;


    numeroFlotante1 = flotante.ingresar("ingrese un valor flotante: ", "flotante");
    cout << endl << numeroFlotante1 << endl;
    numeroFlotante2 = flotante.ingresar("ingrese un valor flotante: ", "flotante");
    cout << endl << numeroFlotante2 << endl;


    numeroDoble1 = doble.ingresar("ingrese un valor double: ", "double");
    cout << endl << numeroDoble1 << endl;
    let = letra.ingresar("ingrese una letra: ", "char");
    cout << endl << let << endl;
    cadena = nombre.ingresar("ingrese su nombre: ", "string");
    cout << endl << cadena << endl;
    system("pause");
    return 0;
}