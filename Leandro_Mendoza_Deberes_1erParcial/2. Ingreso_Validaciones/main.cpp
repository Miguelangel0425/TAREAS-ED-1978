/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Validacion de Ingreso de Datos                      *
 * Autor:                          Leandro Mendoza                                     *
 * Fecha de creacion:              7/11/2024                                           *
 * Fecha de modificacion:          5/12/2024                                           *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include <iostream>
#include <conio.h>
#include "validaciones.h" // Incluye las funciones de validación

using namespace std;

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "*               Menú de opciones de ingreso                  *" << endl;
    cout << "**************************************************" << endl;
    cout << "1. Ingresar Entero" << endl;
    cout << "2. Ingresar Float" << endl;
    cout << "3. Ingresar Double" << endl;
    cout << "4. Ingresar Char" << endl;
    cout << "5. Ingresar String" << endl;
    cout << "6. Salir" << endl;
    cout << "**************************************************" << endl;
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;

    do {
        system("cls"); // Limpia la consola
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpia el buffer del input

        switch (opcion) {
            case 1: {
                int entero = ingresarEntero("Ingrese un valor entero: ");
                cout << "\nValor entero ingresado: " << entero << endl;
                break;
            }
            case 2: {
                float flotante = ingresarFloat("Ingrese un valor decimal (float): ");
                cout << "\nValor float ingresado: " << flotante << endl;
                break;
            }
            case 3: {
                double doble = ingresarDouble("Ingrese un valor decimal (double): ");
                cout << "\nValor double ingresado: " << doble << endl;
                break;
            }
            case 4: {
                char caracter = ingresarChar("Ingrese una letra: ");
                cout << "\nLetra ingresada: " << caracter << endl;
                break;
            }
            case 5: {
                string texto = ingresarString("Ingrese un texto: ");
                cout << "\nTexto ingresado: " << texto << endl;
                break;
            }
            case 6:
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }

        if (opcion != 6) {
            cout << "\nPresione cualquier tecla para continuar...";
            getch();
        }
    } while (opcion != 6);

    return 0;
}