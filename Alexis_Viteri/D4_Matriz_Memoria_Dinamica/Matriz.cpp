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
#include "Matriz.h"

int Matriz::getDim(){
	return dim;
}
void Matriz::setDim(int dim){
	this->dim=dim;
}
int** Matriz::getMatriz1(){
	return matriz1;
}
void Matriz::setMatriz1(int **matriz1){
	this-> matriz1=matriz1;
}

int **Matriz::getMatriz2(){
	return matriz2;
}
void Matriz::setMatriz2(int **matriz2){
	this-> matriz2=matriz2;
}

int **Matriz::getMatrizR(){
	return matrizR;
}
void Matriz::setMatrizR(int **matrizR){
	this->matrizR=matrizR;
}

#include "Matriz.h"

// Constructor por defecto
Matriz::Matriz() {}

// Constructor parametrizado
Matriz::Matriz(int** matriz1, int** matriz2, int** matrizR, int dim) {
    this->matriz1 = matriz1;
    this->matriz2 = matriz2;
    this->matrizR = matrizR;
    this->dim = dim;
}

// Implementación de sumaRecursivaMatrices
int Matriz::sumaRecursivaMatrices(int** mat1, int** mat2, int f, int c) {
    if (f < 0) return 0; // Caso base si todas las filas han sido procesadas

    if (c < 0) {
        // Cambia a la fila anterior y reinicia la columna
        return sumaRecursivaMatrices(mat1, mat2, f - 1, dim - 1);
    }

    // Suma el elemento actual y pasa al siguiente
    return *(*(mat1 + f) + c) + *(*(mat2 + f) + c) + sumaRecursivaMatrices(mat1, mat2, f, c - 1);
}
