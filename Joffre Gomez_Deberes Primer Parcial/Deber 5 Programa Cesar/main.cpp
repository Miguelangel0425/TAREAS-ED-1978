/********************************************************
*********************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE		        **
** Alumno: Joffre Gómez                                     **
** Fecha de Creacion: Lunes, 25 de noviembre de 2024        **
** Fecha de Modificacion:Miércoles, 27 de noviembre de 2024 **
** Enunciado: Contraseña cifrada césar                      **
** NRC: 1978                                                **
*******************************************************
*******************************************************/


#include <iostream>
#include <vector>
#include <string>
#include "Utils.h"
#include "Singly_Linked_List.h"
#include "Circular_Linked_List.h"
#include "Doubly_Linked_List.h"
#include "Doubly_Circular_Linked_List.h"

using namespace std;

enum ListaTipo {
    LISTA_SIMPLE,
    LISTA_CIRCULAR,
    LISTA_DOBLE,
    LISTA_CIRCULAR_DOBLE
};

int main() {
    // Listas
    SinglyLinkedList<string> listaSimple;
    CircularLinkedList<string> listaCircular;
    DoublyLinkedList<string> listaDoble;
    DoublyCircularLinkedList<string> listaCircularDoble;

    vector<string> menuTipoLista = {
        "Lista Simple",
        "Lista Circular",
        "Lista Doble",
        "Lista Circular Doble"
    };

    vector<string> menuPrincipal = {
        "Agregar persona (nombre y apellido, contrasena cifrada)",
        "Mostrar elementos de la lista",
        "Salir"
    };

    cout << "Seleccione el tipo de lista:" << endl;
    int tipoLista = mostrarMenuConFlechas(menuTipoLista);

    ListaTipo listaSeleccionada;
    if (tipoLista == 0) listaSeleccionada = LISTA_SIMPLE;
    else if (tipoLista == 1) listaSeleccionada = LISTA_CIRCULAR;
    else if (tipoLista == 2) listaSeleccionada = LISTA_DOBLE;
    else if (tipoLista == 3) listaSeleccionada = LISTA_CIRCULAR_DOBLE;

    while (true) {
        int opcion = mostrarMenuConFlechas(menuPrincipal);

        switch (opcion) {
        case 0: { // Agregar persona
            cout << "Ingrese los datos de la persona:" << endl;

            string nombre1 = ingresarLetras("Primer nombre");
            string apellido = ingresarLetras("Apellido");

            string contrasenia = generarContrasenia(nombre1, apellido);
            string contraseniaCifrada = contraseniaCesar(contrasenia, 3); // Ejemplo con rotación de 3

            cout << "Datos registrados:" << endl;
            cout << "Contrasena cifrada: " << contraseniaCifrada << endl;

            // Agregar datos a la lista seleccionada
            if (listaSeleccionada == LISTA_SIMPLE) listaSimple.insertarAlFinal(contraseniaCifrada);
            else if (listaSeleccionada == LISTA_CIRCULAR) listaCircular.insertarAlFinal(contraseniaCifrada);
            else if (listaSeleccionada == LISTA_DOBLE) listaDoble.insertarAlFinal(contraseniaCifrada);
            else if (listaSeleccionada == LISTA_CIRCULAR_DOBLE) listaCircularDoble.insertarAlFinal(contraseniaCifrada);

            system("pause");
            break;
        }
        case 1: { // Mostrar elementos
            cout << "Elementos en la lista seleccionada:" << endl;

            if (listaSeleccionada == LISTA_SIMPLE) listaSimple.mostrar();
            else if (listaSeleccionada == LISTA_CIRCULAR) listaCircular.mostrar();
            else if (listaSeleccionada == LISTA_DOBLE) listaDoble.mostrar();
            else if (listaSeleccionada == LISTA_CIRCULAR_DOBLE) listaCircularDoble.mostrar();

            system("pause");
            break;
        }
        case 2: // Salir
            cout << "Saliendo del programa..." << endl;
            return 0;
        }
    }
}
