/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified: Lunes, 4 de noviembre de 2024 21:09:32                    *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
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
    int comparar(const Fraccion& otra) const;
    void mostrar() const;
};

#endif