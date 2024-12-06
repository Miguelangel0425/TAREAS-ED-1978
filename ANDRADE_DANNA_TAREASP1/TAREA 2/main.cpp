/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple Y validaciones          *
 * Autor:                          Andrade Danna                                       *
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include <iostream>
#include <conio.h> 
//#include "Validaciones.h"
#include "Validaciones.cpp"

void mostrarMenu(const std::string opciones[], int totalOpciones, int seleccionada) {
    system("cls"); // Limpia la pantalla
    std::cout << "===== Menu Validaciones =====\n\n"; 
    for (int i = 0; i < totalOpciones; i++) {
        if (i == seleccionada) {
            std::cout << " > " << opciones[i] << " <\n";
        } else {
            std::cout << "   " << opciones[i] << "\n"; 
        }
    }
    std::cout << "\nUse las flechas para navegar y presione Enter para seleccionar.\n"; 
}

int main() {
    Validaciones<int> entero;
    Validaciones<float> flotante;
    Validaciones<std::string> nombre;
    Validaciones<double> doble;
    Validaciones<char> letra;

    const std::string opciones[] = {
        "Ingresar un valor entero",
        "Ingresar un valor flotante",
        "Ingresar un nombre",
        "Ingresar una letra",
        "Salir"
    };

    const int totalOpciones = sizeof(opciones) / sizeof(opciones[0]);
    int seleccionada = 0; 

    while (true) {
        mostrarMenu(opciones, totalOpciones, seleccionada);

        char tecla = _getch(); 
        if (tecla == 72) { // Flecha arriba
            seleccionada = (seleccionada - 1 + totalOpciones) % totalOpciones;
        } else if (tecla == 80) { // Flecha abajo
            seleccionada = (seleccionada + 1) % totalOpciones;
        } else if (tecla == '\r') { // Enter
            system("cls"); 
            switch (seleccionada) {
                case 0: {
                    try {
                        int numeroEntero = entero.ingresar("\nIngrese un valor entero: ", "entero");
                        std::cout << "\nNumero entero ingresado: " << numeroEntero << "\n\n";
                    } catch (const std::exception& e) {
                        std::cerr << "\nError: " << e.what() << "\n\n";
                    }
                    break;
                }
                case 1: {
                    try {
                        float numeroFlotante = flotante.ingresar("\nIngrese un valor flotante: ", "flotante");
                        std::cout << "\nNumero flotante ingresado: " << numeroFlotante << "\n\n";
                    } catch (const std::exception& e) {
                        std::cerr << "\nError: " << e.what() << "\n\n";
                    }
                    break;
                }
                case 2: {
                    try {
                        std::string cadena = nombre.ingresar("\nIngrese su nombre: ", "string");
                        std::cout << "\nNombre ingresado: " << cadena << "\n\n";
                    } catch (const std::exception& e) {
                        std::cerr << "\nError: " << e.what() << "\n\n";
                    }
                    break;
                }
                case 3: {
                    try {
                        char let = letra.ingresar("\nIngrese una letra: ", "char");
                        std::cout << "\nLetra ingresada: " << let << "\n\n";
                    } catch (const std::exception& e) {
                        std::cerr << "\nError: " << e.what() << "\n\n";
                    }
                    break;
                }
                case 4: {
                    std::cout << "\nSaliendo del programa...\n\n";
                    return 0;
                }
            }
            std::cout << "Presione cualquier tecla para continuar...\n\n";
            _getch();
        }
    }

    system("pause"); 
    return 0;
}
