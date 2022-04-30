#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5
int copiarCadena(char destino[], char origen[]);
int main()
{
    //estrategia asciiz o de caracter terminador: \0 caracter nulo
    //char 1 byte = 8 bits
    //los punteros tiene todos el mismo tamaño, no importa a que tipo de var apunten
    //tamaño de punteros depende de la arquitectura, procesador y SO. en 32b ocupan 4 bytes. en 64 8 bytes

    // vectore de caracteres: para guardas caracteres independientes
    //                        para guardar cadenas de caracteres - se utiliza \0

    /*
    char nombre[20]; //de esto puedo utilizar 19 y uno que da para \0
    char x = 'a';
    char y[2] = {"a"}; //cadena de caracteres
    */
    //char cadena[20] = {"Juan"};
    //printf("%s", cadena);

    char cadena[TAM]; //son vectores
    char nombre[TAM];
    char auxCad[100];

    printf("Ingrese nombre: ");
    fflush(stdin);
    //scanf("%s", cadena);
    //gets(cadena);//get string. le paso un puntero a partir de cual tiene que empezar a escribir
    fgets(cadena, TAM, stdin); //empiza conf, pensada para archivos. parametros: (puntero, tamaño, origen(dir de mem))
    //en el ultimo espacio guarda el \0

    gets(auxCad);
    while(strlen(auxCad) >= TAM){
        printf("Nombre demasiado largo. Reingrese nombre: ");
        fflush(stdin);
        gets(auxCad);
    }

    //copiarCadena(nombre,auxCad);
    strcpy(nombre,auxCad);
    printf("%s", cadena);

    //puts muestra a la cadena

    //strupr(auxCad); recibe un vector de caracteres
    //toupper; no recibe puntero, recibe un char por valor

    //strlwr(nombre)

    strcpy(apellido, auxCad);
    strcpy(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");

    entero = strcmp(cadena1, cadena2); //(0 las cadenas son iguales)
    stricmp(cadena1,cadena2) //isensitive, no interesan las mayusculas


    return 0;
}

int copiarCadena(char destino[], char origen[]){
    int retorno = 0;
    int i = 0;
    if(destino != NULL && origen!= NULL){
        do{
            i++;
            destino[i]=origen[i];
        }while(origen[i] != '\0');

        retorno = 1;
    }

}
