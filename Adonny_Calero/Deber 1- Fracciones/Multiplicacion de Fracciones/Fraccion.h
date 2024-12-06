#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    Fraccion(int num, int den);
    int getNumerador() const;
    int getDenominador() const;
    void setNumerador(int num);
    void setDenominador(int den);
    Fraccion multiplicar(const Fraccion& otra) const;
    void simplificar();
    void mostrar() const;

private:
    int calcularMCD(int a, int b) const;
};

#endif
