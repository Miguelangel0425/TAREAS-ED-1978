/*
Universidad de las Fuerzas Armadas ESPE
Programa Validaciones
Alexis Viteri
Fecha de creacion:  09/11/2024
Ultima fecha de modificacion:   11/11/2024
Estructura de Datos
NRC:  1978
*/
#include <conio.h>
#include <string>


#if !defined(__Validaciones_Validaciones_h)
#define __Validaciones_Validaciones_h

template<typename T>
class Validaciones
{
   public:
      Validaciones();
      T ingresar(char *msj, char *tipo);
      bool validarLongitud(std::string);
      bool validarFormato(std::string);
      bool validarRegion(std::string);
      bool validarDigitoVerificador(std::string);
      bool esValida(std::string);
      T Ingresar_Cedula();
   protected:
   private:
      T numero;


};

#endif