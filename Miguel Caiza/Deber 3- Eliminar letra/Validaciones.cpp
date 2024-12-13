/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Miguel Angel Caiza     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include "Validaciones.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>

using namespace std;

template <typename T>
Validaciones<T>::Validaciones()
{
}

template <typename T>
T Validaciones<T>::ingresar(char *msj, char *tipo)
{
    char cad[20];
    char c;
    int i = 0;
    T valor;
    printf("%s", msj);
    while ((c = getch()) != 13)
    {
        if (tipo == "entero" || tipo == "cedula")
        {
            if (c >= '0' && c <= '9')
            {
                printf("%c", c);
                cad[i++] = c;
            }
            else if (c == 8)
            {
                if (i > 0)
                {
                    printf("\b \b");
                    i--;
                }
            }
        }
        else if (tipo == "flotante" || tipo == "double")
        {
            if (c >= '0' && c <= '9')
            {
                printf("%c", c);
                cad[i++] = c;
            }
            else if (c == 8)
            {
                if (i > 0)
                {
                    printf("\b \b");
                    i--;
                }
            }
            else if (c == 46)
            {
                bool aux = false;
                for (int j = 0; cad[j] != '\0'; j++)
                {
                    if (cad[j] == 46)
                    {
                        aux = true;
                        break;
                    }
                }
                if (aux == false)
                {
                    printf("%c", c);
                    cad[i++] = c;
                }
            }
        }
        else if (tipo == "string")
        {
            if (isalpha(c) || c==32)
            {
                printf("%c", c);
                cad[i++] = c;
            }
            else if (c == 8)
            {
                if (i > 0)
                {
                    printf("\b \b");
                    i--;
                }
            }
        }
        else if (tipo == "char")
        {
            if (isalpha(c))
            {
                printf("%c", c);
                valor = c;
                break;
            }
            else if (c == 8)
            {
                if (c >= 'a' && c <= 'z')
                {
                    printf("\b \b");
                }
            }
        }
    }
    cad[i] = '\0';
    if (tipo == "entero")
    {
        int entero;
        entero = atoi(cad);
        return valor = entero;
    }
    else if (tipo == "flotante")
    {
        float flotante;
        for (int j = 0; cad[j] != '\0'; j++)
        {
            flotante = atof(cad);
        }
        return valor = flotante;
    }
    else if (tipo == "double")
    {
        double doble;
        for (int j = 0; cad[j] != '\0'; j++)
        {
            doble = (double)atof(cad);
        }
        return valor = doble;
    }
    else if (tipo == "char")
    {
        return valor;
    }
    else if (tipo == "string" || tipo == "cedula")
    {
        for (int j = 0; cad[j] != '\0'; j++)
        {
            valor = valor + cad[j];
        }
        return valor;
    }
}

template <typename T>
bool Validaciones<T>::validarLongitud(string _cedula)  {
    return _cedula.length() == 10;
}

template <typename T>
bool Validaciones<T>::validarFormato(string _cedula)  {
    for (char c : _cedula) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

template <typename T>
bool Validaciones<T>::validarRegion(string _cedula)  {
    int region = std::stoi(_cedula.substr(0, 2));
    return region >= 1 && region <= 24;
}

template <typename T>
bool Validaciones<T>::validarDigitoVerificador(string _cedula)  {
    int coeficientes[9] = {2, 1, 2, 1, 2, 1, 2, 1, 2};
    int suma = 0;

    for (int i = 0; i < 9; ++i) {
        int valor = (_cedula[i] - '0') * coeficientes[i];
        if (valor > 9) {
            valor -= 9;
        }
        suma += valor;
    }

    int digitoVerificador = (10 - (suma % 10)) % 10;
    return digitoVerificador == (_cedula[9] - '0');
}

template <typename T>
bool Validaciones<T>::esValida(string _cedula)  {
    return validarLongitud(_cedula) && validarFormato(_cedula) && validarRegion(_cedula) && validarDigitoVerificador(_cedula);
}

template <typename T>
T Validaciones<T>::Ingresar_Cedula()
{
    string aux;
    do {
        system("cls");
        aux = ingresar("Ingrese su cedula: ", "cedula");

        if(esValida(aux) == false){
            cout << endl << "Cedula no valida" << endl << "Ingrese una cedula valida" << endl;
            system("pause");
        }
    }while(esValida(aux) == false);

    return aux;
}
