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
#include "Matriz.h"
class Operaciones{
	public:
		Operaciones();
		Operaciones(Matriz);
		void segmentar1();
		void segmentar2();
		void segmentarR();
		void generar1();
		void generar2();
		int **generarMatriz();
		void encerar1();
		void encerar2();
		void encerarR();
		void procesarPot(int);
		void procesarMulti();
		void imprimir1();
		void imprimir2();
		void imprimirR();
		void multiplicarEscalar(int **);
		void imprimirEscalar(int **);
	private:
		Matriz _matriz;
};
