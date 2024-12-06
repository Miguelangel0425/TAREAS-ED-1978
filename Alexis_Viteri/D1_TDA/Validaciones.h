/*
Universidad de las Fuerzas Armadas ESPE
Programa TDA
Alexis Viteri
Fecha de creacion:  31/10/2024
Ultima fecha de modificacion:   01/11/2024
Estructura de Datos
NRC:  1978
*/
#include <conio.h>


#if !defined(__Validaciones_Validaciones_h)
#define __Validaciones_Validaciones_h

template<typename T>
class Validaciones
{
   public:
      Validaciones();
      T ingresar(char *msj, char *tipo);
   protected:
   private:
      T numero;


};

#endif