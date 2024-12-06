//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
// POGRAMA:
// AUTOR: Villacreces Murgueitio Luis Mateo
// FECHA DE CREACIÓN:
// FECHA DE MODIFICACIÓN:
// NRC:
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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