#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int ordenarAlumnos(int leg[], int sexs[], int n1[], int n2[], float proms[], int tam);
int listarAlumnos(int leg[], int sexs[], int n1[], int n2[], float proms[], int tam);


int main()
{
    int legajos[TAM] = {9234,7233,2411,4772,6552};
    int sexos[TAM] = {'f','f','m','m','m'};
    int notas1[TAM] = {6,10,7,8,8};
    int notas2[TAM] = {7,10,6,4,4};
    float promedios[TAM] = {6.50,10,6.50,6,6};
    /*
    for(int i=0; i<TAM; i++){
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrse sexo: ");
        fflush(stdin);
        scanf("%c",&sexos[i]);

        printf("Ingrese nota 1: ");
        scanf("%d", &notas1[i]);

        printf("Ingrese nota 2: ");
        scanf("%d", &notas2[i]);

        promedios[i] = (float) (notas1[i] + notas2[i]) / 2;
    }*/
    /*
    printf("Legajo  Sexo  Nota1  Nota2  Promedio\n");
    for(int i=0; i<TAM; i++){
        printf("%d - %c - %2d - %2d - %.2f\n", legajos[i], sexos[i],notas1[i],notas2[i],promedios[i]); //%2d muestra en 2 caracters y para la derecha
    }*/

   // listarAlumnos(legajos,sexos,notas1,notas2,promedios,TAM);
    ordenarAlumnos(legajos,sexos,notas1,notas2,promedios,TAM);
    listarAlumnos(legajos,sexos,notas1,notas2,promedios,TAM);

    return 0;
}

int listarAlumnos(int leg[], int sexs[], int n1[], int n2[], float proms[], int tam){
    int retorno = -1;
    if(leg!=NULL && sexs!=NULL && n1!=NULL && n2!=NULL && proms!=NULL && tam>0){
        printf("Legajo  Sexo  Nota1  Nota2  Promedio\n");
        for(int i=0; i<tam; i++){
            printf("%d - %c - %2d - %2d - %5.2f\n", leg[i], sexs[i],n1[i],n2[i],proms[i]); //%2d muestra en 2 caracters y para la derecha
        }
        retorno = 0;
    }
    return retorno;

}
//hacer funcion. ordenarAlumnos() /despues con criterio / despues con campos agregando defines para cada campo
int ordenarAlumnos(int leg[], int sexs[], int n1[], int n2[], float proms[], int tam){
    int retorno = -1;
    int auxInt;
    char auxChar;
    float auxFloat;

    if(leg!=NULL && sexs!=NULL && n1!=NULL && n2!=NULL && proms!=NULL && tam>0){
        for(int i=0; i < tam - 1; i++){
            for(int j=i+1; j < tam; j++){
                if(leg[i] > leg[j]){
                    auxInt = leg[i];
                    leg[i] = leg[j];
                    leg[j] = auxInt;

                    auxInt = n1[i];
                    n1[i] = n1[j];
                    n1[j] = auxInt;

                    auxInt = n2[i];
                    n2[i] = n2[j];
                    n2[j] = auxInt;

                    auxFloat = proms[i];
                    proms[i] = proms[j];
                    proms[j] = auxFloat;

                    auxChar = sexs[i];
                    sexs[i] = sexs[j];
                    sexs[j] = auxChar;

                }
            }
        }
        retorno = 0;
    }
    return retorno;
}
