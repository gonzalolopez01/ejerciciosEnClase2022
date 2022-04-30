#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int mostrarEnteros(int vec[], int tam);
int cargarEnteros(int vec[], int tam);
int mostrarCaracteres(char vec[], int tam);
int pasarAMayusculas(char vec[], int tam);

int contarVocales(char vec[], int tam, int* pCant);

char miToupper(char x);

int esVocal(char x);

int main()
{
    int numeros[TAM];
    char letras[TAM] = {'f','h','a','r','t','A','b','u','O','z'}; //inicializado por extension

    int cantidadVocales;

    mostrarCaracteres(letras,TAM);
    //pasarAMayusculas(letras,TAM);
    //mostrarCaracteres(letras,TAM);

    contarVocales(letras,TAM,&cantidadVocales);

    printf("vocales: %d", cantidadVocales);

    return 0;
}

int cargarEnteros(int vec[], int tam){
    int retorno = -1;
    if(vec != NULL && tam > 0){
        for(int i=0; i<tam; i++){
            printf("ingrese un nro: ");
            scanf("%d",&vec[i]);
        }
        retorno = 0;
    }
    return retorno;
}
int  mostrarEnteros(int vec[], int tam){
    int retorno = -1;
    if(vec != NULL && tam > 0){
        for(int i = 0; i<tam; i++){
            printf("%d\n", vec[i]);
        }
        retorno = 0;
    }
    return retorno;
}
int  mostrarCaracteres(char vec[], int tam){
    int retorno = -1;
    if(vec != NULL && tam > 0){
        for(int i = 0; i<tam; i++){
            printf("%c\n", vec[i]);
        }
        printf("\n\n");
        retorno = 0;
    }
    return retorno;
}
int pasarAMayusculas(char vec[], int tam){
    int retorno = -1;
    if(vec != NULL && tam > 0){
        for(int i = 0; i<tam; i++){
            //vec[i] = toupper(vec[i]);
            vec[i] = miToupper(vec[i]);
        }
        retorno = 0;
    }
    return retorno;
}
char miToupper(char x){

    if(x >= 'a' && x <= 'z'){
        x = x-32;
    }
    return x;
}
int contarVocales(char vec[], int tam, int* pCant){
    int retorno = -1;
    int contador = 0;
    if(vec!=NULL && tam>0 && pCant!=NULL){
        for(int i = 0; i<tam; i++){
            if(esVocal(vec[i])){

                contador++;
            }
        }
        *pCant = contador;
        retorno = 0;
    }
    return;
}
int esVocal(char x){
    int retorno = 0;

    if(x == 'A' || x == 'a' ||
       x == 'E' || x == 'e' ||
       x == 'I' || x == 'i' ||
       x == 'O' || x == 'o' ||
       x == 'U' || x == 'u'){
        retorno = 1;
       }
    return retorno;
}
