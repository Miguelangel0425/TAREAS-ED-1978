/*******************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                      *
 * Proposito:                      Programa sobre conversion de notacion infija a notacion *
 *                                 polaca                                                  *
 * Autor:                          Leandro Mendoza                                         *
 * Fecha de creacion:              30/11/2024                                              *
 * Fecha de modificacion:          6/12/2024                                               *
 * Materia:                        Estructura de datos                                     *
 * NRC :                           1978                                                    *
 ******************************************************************************************/

#include "Expresion.h"
#include <conio.h>
#include <iostream>

// Función para capturar la entrada de la expresión
char* capturarEntrada() {
    size_t capacidad = 100;  // Capacidad inicial
    size_t pos = 0;
    char* entrada = (char*)malloc(capacidad * sizeof(char));
    if (entrada == NULL) {
        perror("Error al asignar memoria para la entrada");
        exit(EXIT_FAILURE);
    }

    char* ptr = entrada;  // Puntero que recorre la entrada
    while (true) {
        char caracter = getch();

        // Si el caracter es un backspace, eliminar el último carácter
        if (caracter == 8) {  // Código ASCII para backspace
            if (pos > 0) {
                pos--;
                printf("\b \b");  // Mover el cursor hacia atrás y borrar el carácter en la pantalla
            }
        }
        // Permitir solo caracteres válidos: números y +-*/()
        else if (isdigit(caracter) || caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/' || caracter == '(' || caracter == ')') {
            if (pos + 1 >= capacidad) {
                capacidad *= 2;
                entrada = (char*)realloc(entrada, capacidad * sizeof(char));
                if (entrada == NULL) {
                    perror("Error al reasignar memoria para la entrada");
                    exit(EXIT_FAILURE);
                }
                ptr = entrada + pos; // Actualizar el puntero al nuevo bloque de memoria
            }
            *ptr = caracter;
            ptr++;
            pos++;
            printf("%c", caracter);
        }
        // Salir con Enter
        else if (caracter == '\r') {
            break; // Presionar Enter para finalizar
        }
    }
    *ptr = '\0'; // Terminar la cadena
    printf("\n");
    return entrada;
}

int main() {
    printf("Ingrese una expresion infija (sin espacios): ");
    char* entrada = capturarEntrada();

    // Validar entrada
    if (!Expresion<char>::validarEntrada(entrada)) {
        printf("Entrada invalida. Asegurese de que los paréntesis y operadores estén balanceados.\n");
        free(entrada);
        return 1;
    }

    // Crear objeto Expresion con la entrada
    Expresion<char> expresion(entrada);

    // Convertir a notación polaca prefija y inversa
    expresion.convertirAPolacaPrefija();
    //expresion.convertirAPolacaInversa();

    // Mostrar los resultados
    printf("Notacion Polaca Prefija: %s\n", expresion.obtenerPolacaPrefija());
    //printf("Notacion Polaca Inversa: %s\n", expresion.obtenerPolacaInversa());

    // Liberar memoria
    free(entrada);
    return 0;
}
