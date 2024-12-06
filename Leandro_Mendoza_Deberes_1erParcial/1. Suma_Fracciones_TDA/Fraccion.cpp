/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre ingreso de dos fracciones-TDA        *
 * Autor:                          Leandro Mendoza                                     *
 * Fecha de creacion:              5/11/2024                                           *
 * Fecha de modificacion:          5/12/2024                                           *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int ingresar(char *msj) {
    printf("%s", msj);
    char cad[10], c;
    int valor, i = 0;
    while ((c = getch()) != 13) { 
        if (c >= '0' && c <= '9' && i < 9) {
            printf("%c", c);
            cad[i++] = c;
        }
    }
    cad[i] = '\0';
    valor = atoi(cad);
    return valor;
}

int main() {
    printf("\n%d\n", ingresar("Ingrese un valor entero: "));
    return 0;
}

#include "Fraccion.h"

int main() {
    Fraccion<int> fraccion1, fraccion2, resultado;

    printf("Ingrese la primera fraccion:\n");
    fraccion1.ingresarFraccion();

    printf("Ingrese la segunda fraccion:\n");
    fraccion2.ingresarFraccion();

    resultado = fraccion1.sumarFracciones(fraccion2);
    resultado.simplificarFraccion();

    printf("La suma de las fracciones es: ");
    resultado.mostrarFraccion();

    return 0;
}

