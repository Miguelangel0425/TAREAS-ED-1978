#include "Racionalizar.h"
using namespace std;

Racionalizar::Racionalizar(int num, int den){
	this->num = num;
	this->den = den;
	}

int Racionalizar ::getNum(void) {
	return num;
}

int Racionalizar ::getDen(void) {
	return den;
}

void Racionalizar ::setNum(int newNum) {
	this->num = newNum;
}

void Racionalizar::setDen(int newDen) {
	this->den = newDen;
}

Racionalizar :: Racionalizar ():num(0), den(1){}

void Racionalizar::mostrarDatos(void) {
	cout<< getNum() << "/" << getDen() << endl;
}

//Suma con TDA
Racionalizar Racionalizar::suma(Racionalizar a) {
	int numeradorF = num * a.getDen() + a.getNum() * den;
	int denominadorF = den * a.getDen();
	return Racionalizar(numeradorF, denominadorF);
}

//Suma con VOID
void Racionalizar::Suma(Racionalizar a) {
	int numeradorF = num * a.getDen() + a.getNum() * den;
	int denominadorF = den * a.getDen();
	cout << numeradorF << "/" << denominadorF << endl;
}

//Suma con INT
int Racionalizar::sum(Racionalizar a) {
	return  (num * a.getDen() + a.getNum() * den)/(den * a.getDen());
	}

//Suma con FLOAT
float Racionalizar::Summa(Racionalizar a) {
	float resultado = static_cast<float>(num * a.getDen() + a.getNum() * den) / (den * a.getDen());
	return resultado;
}

void Racionalizar::mostarLectura() {
	cout << "\nOPERACION REALIZADA CON EXITO\n";
}
