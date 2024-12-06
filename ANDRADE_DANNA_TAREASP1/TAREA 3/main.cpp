/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Eliminar letra del nombre y apellido                *
 * Autor:                          Andrade Danna                                       *
 * Fecha de creacion:              26/11/2024                                          *
 * Fecha de modificacion:          30/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/ 

#include <iostream>
#include <vector>
#include <string>
#include "Utils.h"
#include "Singly_Linked_List.h"

using namespace std;

enum ListaTipo {
    LISTA_SIMPLE
};

int main() {
    SinglyLinkedList<string> listaSimple;

    vector<string> menuPrincipal = {
        "Agregar persona (nombre, apellido, cedula)",
        "Mostrar elementos de la lista",
        "Salir"
    };

    while (true) {
        cout << "Seleccione una opcion:" << endl;
        for (size_t i = 0; i < menuPrincipal.size(); ++i) {
            cout << i + 1 << ". " << menuPrincipal[i] << endl;
        }
        cout << "Opcion: ";
        int opcion;
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1: { // Agregar persona
            cout << "Ingrese los datos de la persona:" << endl;

            string nombre1 = ingresarLetras("Primer nombre");
            string apellido = ingresarLetras("Apellido");
            string cedula = ingresar("Ingrese la cedula");

            if (!validarCedulaEcuatoriana(cedula)) {
                cerr << "Cedula no valida. Intente nuevamente." << endl;
                break;
            }

            listaSimple.insertarAlFinal(nombre1 + " " + apellido);
            cout << "Persona registrada con exito." << endl;
            break;
        }
        case 2: { // Mostrar elementos
            cout << "Elementos en la lista:" << endl;
            listaSimple.mostrar();
            break;
        }
        case 3: // Salir
            cout << "Saliendo del programa..." << endl;
            return 0;
        default:
            cerr << "Opcion no valida. Intente nuevamente." << endl;
        }
    }
}
