/*******************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                      *
 * Proposito:                      Programa sobre ingreso de nombre y creacion de correo   *
 *                                 institucional.                                          *
 * Autor:                          Leandro Mendoza                                         *
 * Fecha de creacion:              20/11/2024                                              *
 * Fecha de modificacion:          6/12/2024                                               *
 * Materia:                        Estructura de datos                                     *
 * NRC :                           1978                                                    *
 ******************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "EmailList.h"

int ingresarNumero(const char* mensaje) {
    printf("%s", mensaje);
    int numero = 0;
    char c;
    while (1) {
        c = getch(); // Captura un solo carácter
        if (c == 13) { // Si presionan Enter
            break;
        } else if (c >= '0' && c <= '5') { // Solo números
            printf("%c", c);  // Mostrar el número en pantalla
            numero = numero * 10 + (c - '0'); // Construir el número
        } else if (c == 8 && numero > 0) { // Si presionan Backspace
            printf("\b \b");  // Eliminar el último carácter
            numero = numero / 10; // Eliminar el último dígito del número
        }
    }
    printf("\n");
    return numero;  // Retorna el número ingresado
}


char* ingresarEmail(const char* mensaje) {
    printf("%s", mensaje);
    char* texto = (char*)malloc(1);
    if (texto == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        exit(1);
    }
    *texto = '\0';  // Inicializar el texto
    char c;
    int length = 0;

    while ((c = getch()) != 13) { // Enter
        if (c != '\b' || length > 0) { // Permitir cualquier carácter excepto backspace inválido
            if (c == 8 && length > 0) { // Backspace
                printf("\b \b");
                length--;
                *(texto + length) = '\0';  // Usamos aritmética de punteros
                texto = (char*)realloc(texto, length + 1);
                if (texto == NULL) {
                    printf("\nError: no se pudo reasignar memoria.\n");
                    exit(1);
                }
            } else if (c != 8) { // Otros caracteres
                printf("%c", c);
                length++;
                texto = (char*)realloc(texto, length + 1);
                if (texto == NULL) {
                    printf("\nError: no se pudo reasignar memoria.\n");
                    exit(1);
                }
                *(texto + length - 1) = c;  // Usamos aritmética de punteros
                *(texto + length) = '\0';   // Terminamos la cadena con '\0'
            }
        }
    }
    printf("\n");
    return texto;
}


char* ingresar(const char* mensaje) {
    printf("%s", mensaje);
    char* texto = (char*)malloc(1);
    if (texto == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        exit(1);
    }
    *texto = '\0';
    char c;
    int length = 0;

    while ((c = getch()) != 13) { // Enter
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ') {
            printf("%c", c);
            length++;
            texto = (char*)realloc(texto, length + 1);
            if (texto == NULL) {
                printf("\nError: no se pudo reasignar memoria.\n");
                exit(1);
            }
            texto[length - 1] = c;
            texto[length] = '\0';
        } else if (c == 8 && length > 0) { // Backspace
            printf("\b \b");
            length--;
            texto[length] = '\0';
            texto = (char*)realloc(texto, length + 1);
            if (texto == NULL) {
                printf("\nError: no se pudo reasignar memoria.\n");
                exit(1);
            }
        }
    }
    printf("\n");
    return texto;
}

char* obtenerPrimeraPalabra(const char* texto) {
    const char* inicio = texto;
    while (*inicio == ' ') inicio++;
    const char* fin = inicio;
    while (*fin && *fin != ' ') fin++;
    int longitud = fin - inicio;
    char* resultado = (char*)malloc(longitud + 1);
    if (resultado == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        exit(1);
    }
    strncpy(resultado, inicio, longitud);
    resultado[longitud] = '\0';
    return resultado;
}

char* obtenerUltimaPalabra(const char* texto) {
    const char* fin = texto + strlen(texto) - 1;
    while (fin > texto && *fin == ' ') fin--;
    const char* inicio = fin;
    while (inicio > texto && *(inicio - 1) != ' ') inicio--;
    int longitud = fin - inicio + 1;
    char* resultado = (char*)malloc(longitud + 1);
    if (resultado == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        exit(1);
    }
    strncpy(resultado, inicio, longitud);
    resultado[longitud] = '\0';
    return resultado;
}

int ingresarNumero(const char* mensaje);

void menu() {
    printf("\n===== Menu =====\n");
    printf("1. Ingresar datos\n");
    printf("2. Buscar email\n");
    printf("3. Eliminar email\n");
    printf("4. Imprimir lista de correos\n");
    printf("5. Salir\n");
    printf("Seleccione una opcion: ");
}

int main() {
    EmailList<char> emailList;
    initEmailList(&emailList);

    int opcion;
    do {
        menu();
        opcion = ingresarNumero("Ingrese una opcion: ");
        //getchar(); // Limpiar el buffer

        switch (opcion) {
            case 1: { // Ingresar datos
                char *nombreCompleto, *apellidoCompleto;
                char *nombre1, *nombre2, *apellido1;

                nombreCompleto = ingresar("Ingrese sus dos nombres: ");
                apellidoCompleto = ingresar("Ingrese sus dos apellidos: ");

                nombre1 = obtenerPrimeraPalabra(nombreCompleto);
                nombre2 = obtenerUltimaPalabra(nombreCompleto);
                apellido1 = obtenerPrimeraPalabra(apellidoCompleto);

                addEmail(&emailList, nombre1, nombre2, apellido1);

                free(nombreCompleto);
                free(apellidoCompleto);
                free(nombre1);
                free(nombre2);
                free(apellido1);

                printf("Correo generado e ingresado con exito.\n");
                break;
            }
            case 2: { // Buscar email
                char* emailABuscar = ingresarEmail("Ingrese el email a buscar: ");
                if (emailExists(emailABuscar, &emailList)) {
                    printf("El email '%s' existe en la lista.\n", emailABuscar);
                } else {
                    printf("El email '%s' no se encuentra en la lista.\n", emailABuscar);
                }
                free(emailABuscar);
                break;
            }
            case 3: { // Eliminar email
                // Captura del correo a eliminar similar a la búsqueda
    char* emailAEliminar = ingresarEmail("Ingrese el email a eliminar: ");
    
    if (removeEmail(&emailList, emailAEliminar)) {
        printf("El email '%s' ha sido eliminado.\n", emailAEliminar);
    } else {
        printf("El email '%s' no se encontró en la lista.\n", emailAEliminar);
    }
    
    free(emailAEliminar);
    break;
            }
            case 4: { // Imprimir lista de correos
                printf("\nLista de correos:\n");
                showEmails(&emailList);
                break;
            }
            case 5: // Salir
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    destroyEmailList(&emailList);
    return 0;
}
