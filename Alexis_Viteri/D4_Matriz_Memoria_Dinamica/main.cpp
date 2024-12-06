/*
Universidad de las Fuerzas Armadas ESPE
Programa Matriz en memoria dinamica
Alexis Viteri
Fecha de creacion:  20/11/2024
Ultima fecha de modificacion:   20/11/2024
Estructura de Datos
NRC:  1978
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "Matriz.h"

using namespace std;

int main(int argc, char** argv) {
    int** mat1 = new int*[3];
    int** mat2 = new int*[3];
    Matriz matriz; // Crear objeto de la clase Matriz

    for (int i = 0; i < 3; i++) {
        mat1[i] = new int[3];
        mat2[i] = new int[3];
    }

    // Llenar matrices con números aleatorios
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat1[i][j] = rand() % 1000; // Números aleatorios entre 0 y 999
            mat2[i][j] = rand() % 1000;
        }
    }

    // Mostrar las matrices
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriz 2:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Sumar matrices de forma recursiva
    int suma = matriz.sumaRecursivaMatrices(mat1, mat2, 2, 2);
    cout << "Suma de todos los elementos de las matrices: " << suma << endl;

    // Liberar memoria dinámica
    for (int i = 0; i < 3; i++) {
        delete[] mat1[i];
        delete[] mat2[i];
    }
    delete[] mat1;
    delete[] mat2;

    system("pause");
    return 0;
}
