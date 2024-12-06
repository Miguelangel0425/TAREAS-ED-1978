#ifndef
#define
#include <iostream>

class Racionalizar {

private:
	int num, den;

public:

	Racionalizar(int, int);
	Racionalizar();

	int getNum(void);
	int getDen(void);
	void setNum(int newNum);
	void setDen(int newDen);

	Racionalizar suma(Racionalizar);
	void Suma(Racionalizar);
	int sum(Racionalizar);
	float Summa(Racionalizar);

	void mostrarDatos(void);
	void mostarLectura(void);

};


#endif //
