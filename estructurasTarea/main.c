#include <stdio.h>
#include <stdlib.h>

#include "empleado.h"

#define TAM 10




int menuEmpleados();
int buscarLibre(eEmpleado vec[], int tam, int *pIndex);
int altaEmpleado(eEmpleado vec[], int tam, int* pNextId);

int buscarEmpleado(eEmpleado vec[], int tam, int id, int* pIndex);// que el id del empleado sea igual al ingresado y pase el indice
int bajaEmpleado(eEmpleado vec[], int tam);//se ingresa el id y se la pasa a buscar emp y se si existe se hace la baja o se deice q no existe
//listar los empleados para que ingrese el id. si está. lo muestra y le pregunta si confirma baja. sino baja cancelada

int main()
{

    int numero;

    eEmpleado lista[TAM];

    //cargarEmpleado(&empleado[0]);
    //mostrarEmpleado(empleado[0]);

    //cargarEmpleados(lista, TAM);
    inicializarEmpleados(lista, TAM);
    hardcodearEmpleados(lista, TAM, 10);
    ordenarEmpleado(lista, TAM);
    listarEmpleados(lista, TAM);


    return 0;
}

int menuEmpleados(){
    int opcion;


    //harcodear empleados

    /*
    alta empleado
        if altaempleado 1 - se cargo con exito
            sino no se pudo cargar
    baja empleado

    modificar

    ordenar /por el campo que quiera, as o des, por 2 opciones

    listar


    */

}
int buscarLibre(eEmpleado vec[], int tam, int *pIndex){
    int retorno = -1;
    if(vec!=NULL && tam > 0; && pIndex!=NULL){
        *pIndex = -1;
        for(int i=0; i<tam; i++){
        if(vec[i].isEmpty){
            *pIndex = i;
            break;
        }
        retorno = 0;
    }
    return retorno;
}

int altaEmpleado(eEmpleado vec[], int tam, int* pNextId){
    int retorno = -1;
    if(vec!=NULL && tam > 0; && pNextId!=NULL){
        int indice;
        eEmpleado empAux;
        buscarLibre(vec, tam, &indice);
        if(indice == -1){
            printf("No hay lugar\n");
        }
        else{
            cargarEmpleado(&empAux);
            empAux.id= *pNextId;
            *pNextId = *pNextId + 1;
            empAux->isEmpty = 0;

            vec[indice] = empAux;
        }
        retorno = 0;
    }

    return retorno;
}
