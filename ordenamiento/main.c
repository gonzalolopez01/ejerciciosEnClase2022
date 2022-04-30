#include <stdio.h>
#include <stdlib.h>

#define TAM 5

#define ASC 1
#define DESC 0

int ordenarEnterosCriterio(int vec[], int tam, int criterio);
int mostrarVectorEnteros(int vec[], int tam);
int main()
{
    /*
    for (int i=0; i<3; i++){
        printf("hola\n");
        for(int j=0; j<5; j++){
            printf("chau\n");
        }
    }*/

    int vec[TAM] = {3,2,8,1,5};
    int aux;

    /*for(int i=0; i<TAM-1; i++){
        for(int j=i+1; j<TAM; j++){
            if(vec[i] > vec[j]){ //ascendente
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }*/
    ordenarEnterosCriterio(vec,TAM,0);
    mostrarVectorEnteros(vec,TAM);
    return 0;
}

int mostrarVectorEnteros(int vec[], int tam){
    int retorno = -1;
    if(vec!=NULL && tam > 0){
        for(int i=0; i<tam; i++){
            printf("%d ", vec[i]);
        }
        retorno = 0;
    }
    return retorno;
}

int ordenarEnterosCriterio(int vec[], int tam, int criterio){
    int retorno = -1;
    int aux;
    if(vec!=NULL && tam > 0 && criterio >=0 && criterio <=1){
        for(int i=0; i<tam-1; i++){
            for(int j=i+1; j<tam; j++){
                if((vec[i] > vec[j] && criterio == 1) || (vec[i] < vec[j] && criterio == 0)){
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }
            }
        }

        retorno = 0;
    }
    return retorno;
}

//tarea, nombre apellido
//hacer unica funcion que se llame ordenar enteros (int vec[], int tam, int criterio); 1 asc,0 desc
//ordenar chars, ordenarCharAsc(), mostrarVectorCaracteres

//VER FUNCION SWAP PARA ORDENAMIENTO
