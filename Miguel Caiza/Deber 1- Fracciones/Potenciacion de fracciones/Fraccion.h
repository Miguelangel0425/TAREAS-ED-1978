#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

    int calcularMCD(int a, int b) const;

public:
    Fraccion(int num, int den);
    int getNumerador() const;
    int getDenominador() const;
    void setNumerador(int num);
    void setDenominador(int den);
    void simplificar();
    Fraccion potenciar(int exponente) const;
    void mostrar() const;
};

#endif
