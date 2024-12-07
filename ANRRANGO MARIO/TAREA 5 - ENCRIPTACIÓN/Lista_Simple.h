/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified: Lunes, 4 de noviembre de 2024 21:09:32                    *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
#pragma once
#include "Validaciones.h"
#include "Nodo.h"
#include <fstream>
#include <sstream>

using namespace std;

template<typename T>
class Lista_Simple {
private:
    Nodo<T>* cabeza;
public:
    Lista_Simple();
    Lista_Simple(T, T, T);
    void insertar_persona(T, T, T, T, T);
    void Insertar_cabeza(T);
    //void Insertar_cola(T);
    void Buscar(T);
    void Eliminar(T);
    void Mostrar();
    void mostrar_persona();

    //funcion correo
    T generar_correo(T, T, T);

    //para txt
    void guardarEnArchivo(const std::string&);
    void cargarDesdeArchivo(const std::string&);

    void eliminarLetra(char);

    void cifrar_cesar(int);
    void descifrar_cesar(int);
    T validar_cedula_existente();
};

