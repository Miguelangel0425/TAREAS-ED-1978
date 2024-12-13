#ifndef UTILIDADES_H
#define UTILIDADES_H

#include <string>

class Utilidades {
public:
    static bool esEntero(const std::string& str);
    static int solicitarEntero(const std::string& mensaje);
};

#endif
