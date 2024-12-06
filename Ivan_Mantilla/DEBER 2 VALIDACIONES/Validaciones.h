/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Deber 1*
 * Autor:                          Ivan Mantilla*
 * Fecha de creacion:              09/11/2024                                          *
 * Fecha de modificacion:          10/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
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