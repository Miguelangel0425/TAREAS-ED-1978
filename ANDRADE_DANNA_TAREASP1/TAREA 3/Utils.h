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
#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
using namespace std;

// Funciones auxiliares
string ingresarLetras(const string& mensaje);
string ingresar(const string& mensaje);
bool validarCedulaEcuatoriana(const string& cedula);

#endif
