/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre suma de matrices con memoria dinamica*
 * Autor:                          Leandro Mendoza                                     *
 * Fecha de creacion:              7/11/2024                                           *
 * Fecha de modificacion:          5/12/2024                                           *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Matrices.h"

using namespace std;

template<typename T>
Matrices<T>::Matrices(int size) : size(size) {
    mat1 = (T**)malloc(size * sizeof(T*));
    mat2 = (T**)malloc(size * sizeof(T*));
    result = (T**)malloc(size * sizeof(T*));
    for (int i = 0; i < size; ++i) {
        *(mat1 + i) = (T*)malloc(size * sizeof(T));
        *(mat2 + i) = (T*)malloc(size * sizeof(T));
        *(result + i) = (T*)malloc(size * sizeof(T));
    }
    srand(time(NULL));
}

template<typename T>
Matrices<T>::~Matrices() {
    for (int i = 0; i < size; ++i) {
        free(*(mat1 + i));
        free(*(mat2 + i));
        free(*(result + i));
    }
    free(mat1);
    free(mat2);
    free(result);
}

template<typename T>
void Matrices<T>::fillRandom() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            *(*(mat1 + i) + j) = rand() % 1000;
            *(*(mat2 + i) + j) = rand() % 1000;
        }
    }
}

template<typename T>
void Matrices<T>::displayMatrices() {
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << *(*(mat1 + i) + j) << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriz 2:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << *(*(mat2 + i) + j) << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

template<typename T>
void Matrices<T>::displayResult() {
    cout << "Matriz Resultante:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << *(*(result + i) + j) << "\t";
        }
        cout << endl;
    }
}

template<typename T>
T Matrices<T>::sumaRecursivaMatrices(int f, int c) {
    if ((f == 0) && (c == 0)) {
        *(*(result + f) + c) = *(*(mat1 + f) + c) + *(*(mat2 + f) + c);
        return *(*(result + f) + c);
    } else {
        if (f > -1) {
            c--;
            if (c >= -1) {
                *(*(result + f) + c + 1) = *(*(mat1 + f) + c + 1) + *(*(mat2 + f) + c + 1);
                return *(*(result + f) + c + 1) + sumaRecursivaMatrices(f, c);
            } else
                return sumaRecursivaMatrices(f - 1, size - 1);
        }
    }
    return 0;
}

template<typename T>
int Matrices<T>::getSize() const {
    return size;
}

template<typename T>
void Matrices<T>::setSize(int newSize) {
    size = newSize;
    // Additional logic to resize matrices could be added here
}

int main() {
    Matrices<int> matrices(3);

    matrices.fillRandom();
    matrices.displayMatrices();
    
    matrices.sumaRecursivaMatrices(2, 2);
    matrices.displayResult();

    return 0;
}