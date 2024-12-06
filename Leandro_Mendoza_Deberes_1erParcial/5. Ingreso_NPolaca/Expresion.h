/*******************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                      *
 * Proposito:                      Programa sobre conversion de notacion infija a notacion *
 *                                 polaca                                                  *
 * Autor:                          Leandro Mendoza                                         *
 * Fecha de creacion:              30/11/2024                                              *
 * Fecha de modificacion:          6/12/2024                                               *
 * Materia:                        Estructura de datos                                     *
 * NRC :                           1978                                                    *
 ******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stack>
#include <algorithm>

template <typename T>
class Expresion {
private:
    T* infija;          // Cadena para la expresión infija
    T* polacaPrefija;   // Cadena para la notación polaca prefija
    T* polacaInversa;   // Cadena para la notación polaca 
    size_t longitud;    // Longitud de la expresión infija

public:
    // Constructor por defecto
    Expresion() : infija(NULL), polacaInversa(NULL), polacaPrefija(NULL), longitud(0) {}

    // Constructor que inicializa con una expresión
    Expresion(const T* expr) {
        longitud = strlen(expr);
        infija = (T*)malloc((longitud + 1) * sizeof(T));
        if (infija == NULL) {
            perror("Error al asignar memoria para la expresión infija");
            exit(EXIT_FAILURE);
        }
        memcpy(infija, expr, (longitud + 1) * sizeof(T));
        polacaInversa = NULL;
        polacaPrefija = NULL;
    }

    // Destructor para liberar memoria dinámica
    ~Expresion() {
        if (infija != NULL) free(infija);
        if (polacaInversa != NULL) free(polacaInversa);
        if (polacaPrefija != NULL) free(polacaPrefija);
    }

    // Convierte la expresión infija a notación polaca (RPN)
    void convertirAPolacaInversa() {
        std::stack<char> pilaOperadores;
        size_t capacidad = longitud + 1;
        char* resultado = (char*)malloc(capacidad * sizeof(char));
        if (resultado == NULL) {
            perror("Error al asignar memoria para la notación polaca inversa");
            exit(EXIT_FAILURE);
        }

        char* ptr = resultado; // Puntero para recorrer el resultado
        size_t pos = 0;

        auto prioridad = [](char operador) -> int {
            switch (operador) {
                case '^': return 3;
                case '*': case '/': return 2;
                case '+': case '-': return 1;
                default: return 0;
            }
        };

        for (size_t i = 0; i < longitud; i++) {
            char caracter = *(infija + i); // Acceso con puntero
            if (isdigit(caracter)) {
                *ptr = caracter;
                ptr++;
                pos++;
            } else if (caracter == '(') {
                pilaOperadores.push(caracter);
            } else if (caracter == ')') {
                while (!pilaOperadores.empty() && pilaOperadores.top() != '(') {
                    *ptr = pilaOperadores.top();
                    ptr++;
                    pilaOperadores.pop();
                    pos++;
                }
                pilaOperadores.pop();  // Desapilar '('
            } else {
                // Desapilar operadores con mayor o igual prioridad
                while (!pilaOperadores.empty() && prioridad(pilaOperadores.top()) >= prioridad(caracter)) {
                    *ptr = pilaOperadores.top();
                    ptr++;
                    pilaOperadores.pop();
                    pos++;
                }
                pilaOperadores.push(caracter);
            }
        }

        // Vaciar la pila de operadores al final
        while (!pilaOperadores.empty()) {
            *ptr = pilaOperadores.top();
            ptr++;
            pilaOperadores.pop();
            pos++;
        }

        *ptr = '\0'; // Finalizar la cadena

        if (polacaInversa != NULL) free(polacaInversa);
        polacaInversa = (T*)malloc((pos + 1) * sizeof(T));
        memcpy(polacaInversa, resultado, (pos + 1) * sizeof(T));
        free(resultado);
    }

    // Convierte la expresión infija a notación polaca prefija
    void convertirAPolacaPrefija() {
        // Invertir la expresión infija
        std::reverse(infija, infija + longitud);
        
        // Reemplazar los paréntesis (invertirlos)
        for (size_t i = 0; i < longitud; i++) {
            if (*(infija + i) == '(') {
                *(infija + i) = ')';
            } else if (*(infija + i) == ')') {
                *(infija + i) = '(';
            }
        }

        // Realizar la conversión a notación polaca inversa con la expresión invertida
        convertirAPolacaInversa();

        // Invertir la notación polaca inversa para obtener la notación polaca prefija
        std::reverse(polacaInversa, polacaInversa + strlen(polacaInversa));

        // Asignar la notación polaca prefija al puntero adecuado
        size_t pos = strlen(polacaInversa);
        polacaPrefija = (T*)malloc((pos + 1) * sizeof(T));
        memcpy(polacaPrefija, polacaInversa, (pos + 1) * sizeof(T));
    }

    // Obtener la notación polaca inversa
    T* obtenerPolacaInversa() {
        return polacaInversa;
    }

    // Obtener la notación polaca prefija
    T* obtenerPolacaPrefija() {
        return polacaPrefija;
    }

    // Validar la entrada de la expresión
    static bool validarEntrada(const T* expr) {
        size_t longitud = strlen(expr);
        int parenBalanceados = 0;
        for (size_t i = 0; i < longitud; i++) {
            if (*(expr + i) == '(') {
                parenBalanceados++;
            } else if (*(expr + i) == ')') {
                parenBalanceados--;
                if (parenBalanceados < 0) {
                    return false;
                }
            }
        }
        return parenBalanceados == 0;
    }
};
