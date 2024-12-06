#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

    int calcularMCD(int a, int b) const;
    void simplificar();

public:
    Fraccion(int num = 0, int den = 1);
    int getNumerador() const;
    int getDenominador() const;
    void setNumerador(int num);
    void setDenominador(int den);
    Fraccion restar(const Fraccion &otra) const;
    void mostrar() const;
};

#endif
