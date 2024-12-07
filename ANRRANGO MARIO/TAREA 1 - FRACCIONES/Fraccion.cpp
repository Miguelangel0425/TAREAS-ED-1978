#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int ingresar (char *);
int ingresar (char *msj){
    cout << *msj << endl;
    printf ("%s",*msj);
}


int main (){
   ingresar("Ingrese un valor entero: ");
}
