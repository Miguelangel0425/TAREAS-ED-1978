/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Tipos de datos Abstractos                           *
 * Autor:                          Andrade Danna                                       *
 * Fecha de creacion:              13/11/2024                                          *
 * Fecha de modificacion:          15/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/ 

#pragma once
#include <iostream>
class Matriz{
	private:
		int **matriz1;
		int **matriz2;
		int **matrizR;
		int dim;
	public:
		Matriz();
		Matriz(int**,int**,int**,int);
		int getDim();
		void setDim(int);
		int **getMatriz1();
		void setMatriz1(int **);
		int **getMatriz2();
		void setMatriz2(int **);
		int **getMatrizR();
		void setMatrizR(int **);
};
