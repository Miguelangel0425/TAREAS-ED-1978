#ifndef RACIONALIZACION_H
#define RACIONALIZACION_H

#include <iostream>
#include <string>

class Racionalizacion {

private:
	int num, den;

public:

	Racionalizacion(int, int);
	Racionalizacion();

	int getNum(void);
	int getDen(void);
	void setNum(int newNum);
	void setDen(int newDen);

	Racionalizacion suma(Racionalizacion);
	void Suma(Racionalizacion);
	int sum(Racionalizacion);
	float Summa(Racionalizacion);

	void mostrarDatos(void);
	void mostrarLectura(void);

};


#endif // RACIONALIZACION_H

