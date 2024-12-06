


#include <iostream>
#include <vector>
#include <string>
#include "Utils.cpp"
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
        cout << "Seleccione una opci�n:" << endl;
        for (size_t i = 0; i < menuPrincipal.size(); ++i) {
            cout << i + 1 << ". " << menuPrincipal[i] << endl;
        }
        cout << "Opci�n: ";
        int opcion;
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1: { // Agregar persona
            cout << "Ingrese los datos de la persona:" << endl;

            string nombre1 = ingresarLetras("Primer nombre");
            string apellido = ingresarLetras("Apellido");
            string cedula = ingresar("Ingrese la c�dula");

            if (!validarCedulaEcuatoriana(cedula)) {
                cerr << "C�dula no v�lida. Intente nuevamente." << endl;
                break;
            }

            listaSimple.insertarAlFinal(nombre1 + " " + apellido);
            cout << "Persona registrada con �xito." << endl;
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
            cerr << "Opci�n no v�lida. Intente nuevamente." << endl;
        }
    }
}
