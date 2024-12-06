/***********************************************************************
          Universidad de las Fuerzas Armadas ESPE
 * Author:  Adonny Calero
 * Modified: viernes, 13 de noviembre de 2024 14:01:37
 * Purpose: Matriz dinámica
 * Materia:  Estructura de Datos
 * Profesor:  Fernando Solis
 * NRC :  1978
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Matriz.cpp"

using namespace std;

int main(int argc, char** argv) {
    int dim;

    // Solicitar la dimensión de las matrices
    cout << "Ingrese la dimension de la matriz (n x n): ";
    cin >> dim;

    // Reservar memoria dinámica para las matrices
    int** mat1 = new int*[dim];
    int** mat2 = new int*[dim];
    int** matR = new int*[dim];

    for (int i = 0; i < dim; i++) {
        mat1[i] = new int[dim];
        mat2[i] = new int[dim];
        matR[i] = new int[dim];
    }

    srand(time(NULL));
    
    // Llenar las matrices con números aleatorios
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            mat1[i][j] = (rand() % 1000);  // Números aleatorios entre 0 y 999
            mat2[i][j] = (rand() % 1000);
        }
    }

    // Imprimir las dos matrices
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriz 2:" << endl;
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Sumar las matrices recursivamente
    Matriz m(mat1, mat2, matR, dim);
    cout << "Suma de matrices (recursiva):" << endl;
    int suma = m.sumaRecursivaMatrices(mat1, mat2, dim - 1, dim - 1);
    cout << "Suma total: " << suma << endl;

    // Liberar la memoria dinámica
    for (int i = 0; i < dim; i++) {
        delete[] mat1[i];
        delete[] mat2[i];
        delete[] matR[i];
    }
    delete[] mat1;
    delete[] mat2;
    delete[] matR;
    system("pause");

    return 0;
}




