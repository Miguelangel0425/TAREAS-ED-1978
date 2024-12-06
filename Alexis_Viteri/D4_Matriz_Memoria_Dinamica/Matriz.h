/*
Universidad de las Fuerzas Armadas ESPE
Programa Matriz en memoria dinamica
Alexis Viteri
Fecha de creacion:  20/11/2024
Ultima fecha de modificacion:   20/11/2024
Estructura de Datos
NRC:  1978
*/
#pragma once
#include <iostream>

class Matriz {
private:
    int** matriz1;
    int** matriz2;
    int** matrizR;
    int dim;

public:
    Matriz();
    Matriz(int**, int**, int**, int);
    int getDim();
    void setDim(int);
    int** getMatriz1();
    void setMatriz1(int**);
    int** getMatriz2();
    void setMatriz2(int**);
    int** getMatrizR();
    void setMatrizR(int**);

    // Corrección: Declarar sumaRecursivaMatrices como miembro de la clase
    int sumaRecursivaMatrices(int** mat1, int** mat2, int f, int c);
};
