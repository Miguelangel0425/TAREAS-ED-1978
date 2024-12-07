/***********************************************************************
 ************* Universidad de las Fuerzas Armadas ESPE *****************
 * Author:  Anrrango Mario                                             *
 * Modified:                                                           *
 * Purpose: Comparación de fracciones con operaciones                  *
 * Materia:  Estructura de Datos                                       *
 * Profesor:  Ing. Fernando Solis                                      *
 * NRC :  1978                                                         *
 ***********************************************************************/
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
      T Ingresar_Placa();
   protected:
   private:
      T numero;


};

#endif