#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int quitarEnter(char cadena[], int tam);
int main()
{
   // char nombres[TAM][20] = {{"Juan"},{"Pedro"},{"Luisa"},{"Daniela"},{"Lucia"}};
    char nombres[TAM][20];

    for(int i = 0; i < TAM; i++){
        printf("ingrese nombre: ");
        fflush(stdin);
        //gets(nombres[i]);
        fgets(nombres[i], 20, stdin);
        quitarEnter(nombres[i], 20);
    }

    for(int i = 0; i < TAM; i++){
        printf("%s\n", nombres[i]);//cada fila es un vector
    }

    return 0;
}

int quitarEnter(char cadena[], int tam){
    int todoOk = 0;
    if(cadena != NULL && tam > 0){
        for(int i = 0; i< tam; i++){
            if(cadena[i] == '\n'){
                cadena[i] = '\0';
                break;
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

//ordenar y compar cadenas de caracteres. Agregarlo a lo de vectores parelelos, es decir agregarle nombres
