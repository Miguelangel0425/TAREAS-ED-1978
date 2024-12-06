#include <iostream>
#include "Matriz.h"
using namespace std;

Matriz::Matriz() {}

Matriz::Matriz(int** matriz1, int** matriz2, int** matrizR, int dim) {
    this->matriz1 = matriz1;
    this->matriz2 = matriz2;
    this->matrizR = matrizR;
    this->dim = dim;
}

int Matriz::getDim() {
    return dim;
}

void Matriz::setDim(int dim) {
    this->dim = dim;
}

int** Matriz::getMatriz1() {
    return matriz1;
}

void Matriz::setMatriz1(int** matriz1) {
    this->matriz1 = matriz1;
}

int** Matriz::getMatriz2() {
    return matriz2;
}

void Matriz::setMatriz2(int** matriz2) {
    this->matriz2 = matriz2;
}

int** Matriz::getMatrizR() {
    return matrizR;
}

void Matriz::setMatrizR(int** matrizR) {
    this->matrizR = matrizR;
}

// Función recursiva para sumar las matrices
int Matriz::sumaRecursivaMatrices(int** mat1, int** mat2, int f, int c) {
    // Caso base
    if (f == 0 && c == 0) {
        return mat1[f][c] + mat2[f][c];
    } else {
        if (f >= 0) {
            c--;
            if (c >= 0) {
                return mat1[f][c + 1] + mat2[f][c + 1] + sumaRecursivaMatrices(mat1, mat2, f, c);
            } else {
                return sumaRecursivaMatrices(mat1, mat2, f - 1, dim - 1);
            }
        }
    }
    return 0;  // Retorna 0 si no se cumple ninguna de las condiciones anteriores
}

