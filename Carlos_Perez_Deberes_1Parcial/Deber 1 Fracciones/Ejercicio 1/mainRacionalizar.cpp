/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      TDA Fracciones                                      *
 * Autor:                          Carlos Perez                                        *
 * Fecha de creacion:              31/10/2024                                          *
 * Fecha de modificacion:          31/10/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include <iostream>
#include "Racionalizar.h"

using namespace std;

int main() {

	Racionalizar fraccion1(4, 8);
	Racionalizar fraccion2(5, 6);

	cout << "Fraccion 1: ";fraccion1.mostrarDatos();

	cout << "Fraccion 2: ";fraccion2.mostrarDatos();

	fraccion1.mostarLectura();

	Racionalizar suma = fraccion1.suma(fraccion2);

	//Suma con TDA
	cout << "Resultado de la Suma de TDA: "; suma.mostrarDatos();

	//Suma con VOID
	cout << "Resultado de la Suma con VOID: "; fraccion1.Suma(fraccion2);

	//Suma con INT
	cout << "Resultado de la Suma con INT: "<<fraccion1.sum(fraccion2) << endl;

	//Suma con float
	cout << "Resultado de la Suma con FLOAT: " << fraccion1.Summa(fraccion2)<< endl;

	system("pause");
	return 0;
}
