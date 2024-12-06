#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona {
private:
    string nombre1;
    string nombre2;
    string apellido;
    string cedula;

public:
    Persona(string nombre1, string nombre2, string apellido, string cedula)
        : nombre1(nombre1), nombre2(nombre2), apellido(apellido), cedula(cedula) {}

    string getNombre1() const { return nombre1; }
    string getNombre2() const { return nombre2; }
    string getApellido() const { return apellido; }
    string getCedula() const { return cedula; }
};

#endif // PERSONA_H

