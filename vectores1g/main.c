#include <stdio.h>
#include <stdlib.h>
//variables escalares. guardan un solo valor, un char, un entero, un flotantes
//variables compuestas. guardan mas de un valor. Datos del mismo tipo (arrays). Datos de distinto tipo (estructuras).

//arrays: pueden ser unidimensiales (vectores). Bidimensionales (matrices).

//estructuras: tipo de datos que podemos crear



//pedir 5 numeros e informar la suma de los mismos
int main()
{
    //printf("%d\n", sizeof(char)); me dice el tamño en bytes
    int numeros[5]; //vector. la 1er pos tiene indice 0.
    int suma = 0;
    int mayor;

    for(int i=0; i<5; i++){ //carga secuencial
        printf("ingrese un nro: ");
        scanf("%d",&numeros[i]);
    }
    //muestra la suma
   /* for(int i=0; i<5; i++){ //lectura secuencial
        suma += numeros[i];
    }
    printf("la suma es: %d\n", suma); */

    //buscar el mayor
    for(int i=0; i<5; i++){
        if(i==0 || mayor < numeros[i]){
            mayor = numeros[i];
        }
    }
    printf("mayor: %d", mayor);

    return 0;
}

/*
switch (nro){
    case1:
    break;
    case2:
    break; ... etc */
