#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include "Lista.cpp"
#include "Nodo.cpp"
#include "Validaciones.cpp"

using namespace std;

int main() {
    Lista<string> lista;
    int opcion;
    string elemento;

    do {
        printf("\nMENU:\n");
        printf("1. Agregar elemento a la lista\n");
        printf("2. Mostrar elementos de la lista\n");
        printf("3. Eliminar caracter de los elementos\n");
        printf("4. Salir\n");
        opcion = ingresar("Seleccione una opcion: ");

        switch (opcion) {
            case 1:
                elemento = ingresarTexto("\nIngrese el elemento a agregar: ");
                lista.agregar(elemento);
                printf("\nElemento agregado con exito.\n");
                break;

            case 2:
                printf("\nElementos en la lista: ");
                lista.mostrar();
                break;

            case 3: {
                char caracter;
                printf("\nIngrese el caracter a eliminar: ");
                cin >> caracter;
                lista.eliminarCaracter(caracter);
                break;
            }

            case 4:
                printf("\nSaliendo del programa.\n");
                break;

            default:
                printf("\nOpcion invalida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}

