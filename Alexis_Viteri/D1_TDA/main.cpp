/*
Universidad de las Fuerzas Armadas ESPE
Programa TDA
Alexis Viteri
Fecha de creacion:  31/10/2024
Ultima fecha de modificacion:   01/11/2024
Estructura de Datos
NRC:  1978
*/
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <string>
#include "Validaciones.cpp"
#include "Calculo.cpp"
#include "Fraccion.cpp"

using namespace std;

int main(){

    int numeroEntero1, numeroEntero2, resultadoEntero;
    float numeroFlotante1,numeroFlotante2, resultadoFlotante;
    double numeroDoble1,numeroDoble2, resultadoDoble;
    char let;
    string cadena;
    Fraccion<float> frac1, frac2, resultadoFraccion;

    Validaciones<int> entero;
    Validaciones<float> flotante;
    Validaciones<string> nombre;
    Validaciones<double> doble;
    Validaciones<char> letra;

    frac1.ingresarFraccion();
    cout << endl;
    frac1.imprimirFraccion();
    cout << endl;

    frac2.ingresarFraccion();
    cout << endl;
    frac2.imprimirFraccion();
    cout << endl;
    resultadoFraccion = resultadoFraccion.SumarFraccion(frac1, frac2);
    resultadoFraccion.imprimirResultado();
    resultadoFraccion = resultadoFraccion.RestarFraccion(frac1, frac2);
    resultadoFraccion.imprimirResultado();
    resultadoFraccion = resultadoFraccion.DividirFraccion(frac1, frac2);
    resultadoFraccion.imprimirResultado();
    resultadoFraccion = resultadoFraccion.MultiplicarFraccion(frac1, frac2);
    resultadoFraccion.imprimirResultado();
    
    system("pause");
    return 0;
}