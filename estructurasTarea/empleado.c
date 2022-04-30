#include <stdio.h>
#include <stdlib.h>

#include "empleado.h"

int hardcodearEmpleados(eEmpleado vec[], int tam, int cant, int* pNextId){//cant es la cantidad de los que estan harcodeados que queres cargar
    int retorno = -1;
    eEmpleado empleados[10]={{1234, "Juan", 'm', 32, 100,0},
                        {0, "Miguel", 'm', 32, 100,0},
                        {0, "Jose", 'm', 32, 100,0},
                        {0, "Kucas", 'm', 32, 100,0},
                        {0, "Lorenzo", 'm', 32, 100,0},
                        {0, "Rosa", 'f', 32, 100,0},
                        {0, "MAnuel", 'm', 32, 100,0},
                        {0, "Miriam", 'f', 32, 100,0},
                        {0, "Andres", 'm', 32, 100,0},
                        {0, "MArta", 'f', 32, 100,0}};
    if(vec != NULL && tam >0 && tam <=10 && cant <= tam){
        for(int i = 0; i< cant; i++){
            vec[i] = empleados[i];
            vec[i].id = *pNextId;
            (*pNextId)++;
        }
    }
}

int cargarEmpleado(eEmpleado* pEmpleado){
    int retorno = -1;
    if(pEmpleado!=NULL){
        printf("Ingrese Id: ");
        scanf("%d", &pEmpleado->id);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(pEmpleado->nombre);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &pEmpleado->sexo);

        printf("ingrese edad: ");
        scanf("%d", &pEmpleado->edad);

        printf("ingrese sueldo: ");
        scanf("%f", &pEmpleado->sueldo);

        retorno = 0;
    }
    return retorno;
}

void mostrarEmpleado(eEmpleado empleado){
    /*printf("Legajo: %d\n", empleado.id);
    printf("Nombre: %s\n", empleado.nombre);
    printf("Sexo: %c\n", empleado.sexo);
    printf("Edad: %d\n", empleado.edad);
    printf("Sueldo: %.2f\n", empleado.sueldo);*/
    printf("%4d %14s %c %2d %7.2f\n", empleado.id, empleado.nombre, empleado.sexo, empleado.edad, empleado.sueldo);

}
int cargarEmpleados(eEmpleado* vec, int tam){
    int retorno = -1;
    if(vec!=NULL && tam>0){
        for (int i=0; i<tam; i++){
            cargarEmpleado(vec+i);
        }
    }
}
int listarEmpleados(eEmpleado* vec, int tam){
    int retorno = -1;
    int flag = 1;
    printf("***Listado de Empleados***\n");
    for (int i=0; i<tam; i++){
        if(!vec[i].isEmpty){
             mostrarEmpleado(*(vec+i));
            //mostrarEmpleado(vec[i]);
            flag=0;
        }
    }
    if(flag){
        printf("no hay empleados en el sistema\n");
    }
}

int inicializarEmpleados(eEmpleado* pEmpleado, int tam){
    int retorno = -1;
    if(pEmpleado!=NULL && tam>0){
        for(int i=0; i<tam; i++){
            pEmpleado[i].isEmpty = 1;
        }
        retorno = 0;
    }
    return retorno;
}

int ordenarEmpleado(eEmpleado vec[], int tam){
    int retorno = -1;
    eEmpleado auxEmpleado;
    if(vec!=NULL && tam>0){
        for(int i=0; i < tam-1; i++){
            for(int j=i+1; j<tam; j++){
                if(vec[i].id > vec[j].id){
                    auxEmpleado = vec[i];
                    vec[i] = vec[j];
                    vec[i] = auxEmpleado;
                }
            }
        }
        retorno = 0;
    }
    return retorno;
}

int ordenarEmpleadosSexoId(eEmpleado vec[], int tam){
    int retorno = -1;
    eEmpleado auxEmpleado;
    if(vec!=NULL && tam>0){
        for(int i=0; i < tam-1; i++){
            for(int j=i+1; j<tam; j++){
                if((vec[i].sexo == vec[j].sexo && vec[i].id > vec[j].id) ||
                    (vec[i].sexo != vec[j].sexo && (vec[i].sexo > vec[j].sexo))){
                    //if(vec[i].id > vec[j].id)
                    auxEmpleado = vec[i];
                    vec[i] = vec[j];
                    vec[i] = auxEmpleado;
                }
            }
        }
        retorno = 0;
    }
    return retorno;
}

//comparar agrupando
//sexo ->id   me fijo que sexo son
