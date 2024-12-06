#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define dim 30


using namespace std;

//FUNCIONES
//char *ingresar(char *);

int ingresar(char *);
string ingresarTexto(char *);
float ingresarFloat(const char *msj);
double ingresarDouble(const char *msj);

//void sumaInt();
//void sumaFloat();


int ingresar(char *msj){
    char cadena[dim];
    char c;
    int i=0;
    int valor;

    printf("%s", msj);
    while((c=getch())!=13){
        if(c>='0'&&c<='9'){
            printf("%c",c);
            cadena[i++]=c;
        }
    }
    cadena[i]='\0';
    valor=atoi(cadena);
    return valor;
}

string ingresarTexto(const char* msj) {
    string cadena;
    char c;
    cout << msj;
    // Leer caracteres uno por uno hasta que se presione Enter
    while (cin.get(c) && c != 13) {
        
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ') {
            cout << c; 
            cadena.push_back(c);
        }
    }
    return cadena;
}

/*string ingresarTexto(char *msj){
    char cadena[dim];
    char c;
    int i=0;
    string texto;

    printf("%s", msj);
    while ((c = getch()) != 13) {
        if ((c>='A' && c<='Z') || (c>='a' && c<='z') || c==' '){
            printf("%c", c);
            cadena[i++]=c;
        }
    }
    cadena[i] = '\0';
    return texto;
}*/

float ingresarFloat(const char *msj) {
    char cadena[dim];
    char c;
    int i = 0;
    bool puntoDecimal = false;

    printf("%s", msj);
    while ((c = getch()) != 13) {
        if ((c >= '0' && c <= '9') || (c == '.' && !puntoDecimal)) {
            if (c == '.') {
                puntoDecimal = true;
            }
            printf("%c", c);
            cadena[i++] = c;
        }
    }
    cadena[i] = '\0';

    return atof(cadena);
}

double ingresarDouble(const char *msj) {
    char cadena[dim];
    char c;
    int i = 0;
    bool puntoDecimal = false;

    printf("%s", msj);
    while ((c = getch()) != 13) {
        if ((c >= '0' && c <= '9') || (c == '.' && !puntoDecimal)) {
            if (c == '.') {
                puntoDecimal = true;
            }
            printf("%c", c);
            cadena[i++] = c;
        }
    }
    cadena[i] = '\0';

    return strtod(cadena, nullptr);
}

/*void sumaInt(){
    int a,b,c;
    a = ingresar("INGRESE EL PRIMER NUMERO A SUMAR");
    b = ingresar("\nINGRESE EL SEGUNDO NUMERO");
    printf("\nResultado: %d",a+b);
}

/*int main(){
    //printf("Hola mundo");
    //printf("%d",ingresar("Ingresar un valor entero\n"));
    //printf("%s",ingresarTexto("Ingresar una cadena de caracteres\n"));
    //sumaInt();
    
    return 0;
}*/