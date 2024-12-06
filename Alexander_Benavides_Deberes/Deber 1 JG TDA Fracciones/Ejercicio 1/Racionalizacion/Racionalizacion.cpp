#include "Racionalizacion.h"
using namespace std;

Racionalizacion::Racionalizacion(int num, int den){
	this->num = num;
	this->den = den;
	}

int Racionalizacion ::getNum(void) {
	return num;
}

int Racionalizacion ::getDen(void) {
	return den;
}

void Racionalizacion ::setNum(int newNum) {
	this->num = newNum;
}

void Racionalizacion::setDen(int newDen) {
	this->den = newDen;
}

Racionalizacion :: Racionalizacion ():num(0), den(1){}

void Racionalizacion::mostrarDatos(void) {
	cout<< getNum() << "/" << getDen() << endl;
}

//Suma con TDA
Racionalizacion Racionalizacion::suma(Racionalizacion a) {
	int numeradorF = num * a.getDen() + a.getNum() * den;
	int denominadorF = den * a.getDen();
	return Racionalizacion(numeradorF, denominadorF);
}

//Suma con VOID
void Racionalizacion::Suma(Racionalizacion a) {
	int numeradorF = num * a.getDen() + a.getNum() * den;
	int denominadorF = den * a.getDen();
	cout << numeradorF << "/" << denominadorF << endl;
}

//Suma con INT
int Racionalizacion::sum(Racionalizacion a) {
	return  (num * a.getDen() + a.getNum() * den)/(den * a.getDen());
	}

//Suma con FLOAT
float Racionalizacion::Summa(Racionalizacion a) {
	float resultado = static_cast<float>(num * a.getDen() + a.getNum() * den) / (den * a.getDen());
	return resultado;
}

void Racionalizacion::mostrarLectura() {
	cout << "\nOPERACION REALIZADA CON EXITO\n";
}

