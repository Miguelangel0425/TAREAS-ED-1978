#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

class Validaciones {
public:
    static bool esEntero(const std::string& str);
    static int solicitarEntero(const std::string& mensaje);
};

#endif
