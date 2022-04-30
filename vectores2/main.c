#include <stdio.h>
#include <stdlib.h>

#define TAM 5

//mostrarEnteros();//los vectores se pasan por referencia
int mostrarEnteros(int* vec, int tam);

int main()
{
    //int numeros[] = {34,12,32,56,79}; //declaracion por extencion
    //int numeros[10] = {34,12,32,56,79}; //la que no harcodie se completan con 0 solo
    //int numeros[10] = {}; se inicializa todo en 0
    int numeros[TAM];
    int mayor;
    int cont=0;

    int pos;

    for(int i=0; i<TAM; i++){ //es lo mismo a (int i=0; i<=4; i++)
        printf("ingrese un nro: ");
        scanf("%d",&numeros[i]);
    }

    for(int i=0; i<TAM; i++){
        if(i==0 || mayor < numeros[i]){
            mayor = numeros[i];
        }
    }
    for(int i=0; i<TAM; i++){
        if(mayor == numeros[i]){
            cont++;
        }
    }
    for(int i = 0; i<TAM; i++){ //1ra ocurrencia del mayor
        if(mayor == numeros[i]){
            pos = i+1;
            break;
        }
    }
    printf("mayor: %d y se ingreso %d veces por primera vez en la posicion %d\n", mayor, cont, pos);

    for(int i = 0; i<TAM; i++){
        printf("%d\n", numeros[i]);
    }
    printf("\n");
    for(int i = TAM-1; i >= 0; i--){ //recorrido decreciente
        printf("%d\n", numeros[i]);
    }
    printf("\n");

    mostrarEnteros(numeros,TAM);

    /*
    PARA ACUMULAR EN LA ULTIMA POSICION
    for(int i=0; i<TAM-1; i++){
        printf("ingrese un nro: ");
        scanf("%d",&numeros[i]);
        numeros[TAM] += numeros[i];
    }*/

    return 0;
}
int mostrarEnteros(int* vec, int tam){
    int retorno = -1;
    if(vec != NULL && tam > 0){ //validacion de vectores
        for(int i = 0; i<tam; i++){
        //printf("%d\n", vec[i]);
        printf("%d\n", *(vec+i)); //vec+i: direccion de memoria, con asterisco y parentesis muestra el interior de esa dir.
        }
    }
    return retorno;
}
