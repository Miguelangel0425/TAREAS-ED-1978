/*
Universidad de las Fuerzas Armadas ESPE
Programa TDA
Alexis Viteri
Fecha de creacion:  31/10/2024
Ultima fecha de modificacion:   01/11/2024
Estructura de Datos
NRC:  1978
*/
#include "Validaciones.h"
#if !defined(__Fraccion_Fraccion_h)
#define __Fraccion_Fraccion_h

template<typename T>
class Fraccion
{
   public:
      float getNum(void);
      void setNum(float newNum);
      float getDeno(void);
      void setDeno(float newDeno);
      Fraccion(float num, float deno);
      Fraccion();
      //~Fraccion();
      void ingresarFraccion();
      void imprimirResultado();
      bool validar();
      void imprimirFraccion();
      Fraccion SumarFraccion(Fraccion obj1, Fraccion obj2);
      Fraccion DividirFraccion(Fraccion obj1, Fraccion obj2);
      Fraccion MultiplicarFraccion(Fraccion obj1, Fraccion obj2);
      Fraccion RestarFraccion(Fraccion obj1, Fraccion obj2);
   protected:
   private:
      T num;
      T deno;
      Validaciones<float> flotanteFraccion;
};

#endif