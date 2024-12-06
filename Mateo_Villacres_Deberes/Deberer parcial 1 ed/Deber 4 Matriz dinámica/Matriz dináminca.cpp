//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
// POGRAMA:
// AUTOR: Villacreces Murgueitio Luis Mateo
// FECHA DE CREACIÓN:
// FECHA DE MODIFICACIÓN:
// NRC:
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <stdlib.h>
#include <time.h>
#define MAX 3

using namespace std;

int sumaRecursivaMatrices(int**, int**, int, int);

int sumaRecursivaMatrices(int** mat1, int** mat2, int f, int c) {
    if ((f == 0) && (c == 0))
        return mat1[f][c] + mat2[f][c];
    else {
        if (f > -1) {
            c--;
            if (c >= -1)
                return mat1[f][c + 1] + mat2[f][c + 1] + sumaRecursivaMatrices(mat1, mat2, f, c);
            else
                return sumaRecursivaMatrices(mat1, mat2, f - 1, MAX - 1);
        }
    }
    return 0; // Agregado para evitar advertencias de compilación
}

int main(int argc, char** argv) {
    int** mat1 = new int*[MAX];
    int** mat2 = new int*[MAX];
    
    for (int i = 0; i < MAX; i++) {
        mat1[i] = new int[MAX];
        mat2[i] = new int[MAX];
    }

    srand(time(NULL));
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            mat1[i][j] = (int)((rand() / 32768.1) * 1000);
            mat2[i][j] = (int)((rand() / 32768.1) * 1000);
        }
    }

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Suma de Matrices es: " << sumaRecursivaMatrices(mat1, mat2, MAX - 1, MAX - 1) << endl;

    // Liberación de memoria
    for (int i = 0; i < MAX; i++) {
        delete[] mat1[i];
        delete[] mat2[i];
    }
    delete[] mat1;
    delete[] mat2;

    return 0;
}
