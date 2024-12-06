/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Eliminar letra del nombre y apellido                *
 * Autor:                          Andrade Danna                                       *
 * Fecha de creacion:              26/11/2024                                          *
 * Fecha de modificacion:          30/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/ 

#pragma once
#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
private:
    string nombre1;
    string apellido;
    string cedula;

public:
    Persona(string nombre1, string apellido, string cedula)
        : nombre1(nombre1), apellido(apellido), cedula(cedula) {}

    string getNombre1() const { return nombre1; }
    string getApellido() const { return apellido; }
    string getCedula() const { return cedula; }
};

#endif
