/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Validacion de Ingreso de Datos                      *
 * Autor:                          Leandro Mendoza                                     *
 * Fecha de creacion:              7/11/2024                                           *
 * Fecha de modificacion:          5/12/2024                                           *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/


#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>

// Declaración de funciones
int ingresarEntero(const char *msj);
float ingresarFloat(const char *msj);
double ingresarDouble(const char *msj);
char ingresarChar(const char *msj);
std::string ingresarString(const char *msj);

// Definición de funciones

int ingresarEntero(const char *msj) {
    printf("%s", msj);
    char cad[10], c;
    int valor, i = 0;
    while ((c = getch()) != 13) { // Mientras no se presione Enter
        if (c >= '0' && c <= '9' && i < 9) { // Solo acepta números
            printf("%c", c);
            cad[i++] = c;
        }
    }
    cad[i] = '\0';
    valor = atoi(cad); // Convierte la cadena en un entero
    return valor;
}

float ingresarFloat(const char *msj) {
    printf("%s", msj);
    char cad[20], c;
    int i = 0;
    bool punto = false;

    while ((c = getch()) != 13) { // Mientras no se presione Enter
        if ((c >= '0' && c <= '9' && i < 19) || (c == '.' && !punto && i < 19)) {
            if (c == '.') {
                punto = true; // Marca que ya se ha ingresado un punto decimal
            }
            printf("%c", c);
            cad[i++] = c; // Almacena el carácter
        }
    }
    cad[i] = '\0';
    return atof(cad); // Convierte la cadena en un flotante
}

double ingresarDouble(const char *msj) {
    printf("%s", msj);
    char cad[30], c;
    int i = 0;
    bool punto = false;

    while ((c = getch()) != 13) {
        if ((c >= '0' && c <= '9' && i < 29) || (c == '.' && !punto && i < 29)) {
            if (c == '.') {
                punto = true;
            }
            printf("%c", c);
            cad[i++] = c;
        }
    }
    cad[i] = '\0';
    return atof(cad); // Convierte la cadena en un double
}

char ingresarChar(const char *msj) {
    printf("%s", msj);
    char c;
    while (true) {
        c = getch(); // Captura una tecla
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) { // Solo letras
            printf("%c", c);
            return c; // Devuelve el carácter
        }
    }
}

std::string ingresarString(const char *msj) {
    printf("%s", msj);
    std::string texto;
    char c;

    while ((c = getch()) != 13) { // Mientras no se presione Enter
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ') {
            printf("%c", c); // Muestra el carácter ingresado
            texto += c; // Agrega el carácter a la cadena
        }
    }
    return texto; // Devuelve la cadena completa
}

#endif