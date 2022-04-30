#include <stdio.h>
#include <stdlib.h>
/*
struct eEmpleado{
    int id;
    char nombre[20];
    char sexo;
    int edad;
    float sueldo;
};*/
#define TAM 5


 typedef struct{
    int id; //4bytes
    char nombre[20]; //20bytes (es recomendado declarar en potencia de 4)
    char sexo; //1byte (4)
    int edad; //4bytes
    float sueldo; //4bytes

}eEmpleado;   //la estructura ocupa 33bytes - igual el SO te reserva de a 4 por el sistema que es de 32bits o 64(32 de doble canal), por eso en este caso el sizeof va a dar 36

void mostrarEmpleado(eEmpleado emp);
int cargarEmpleado(eEmpleado* pEmpleado);
//tarea
int cargarEmpleados(eEmpleado* vec, int tam); //tarea cargar 5 empleado
int listarEmpleados(eEmpleado* vec, int tam);

int main()
{
    //struct eEmpleado unEmpleado; asi es un estructura
    //eEmpleado unEmpleado = {1234,"Juan",'m',34,100};

    eEmpleado unEmpleado;
    eEmpleado* p;

    p = &unEmpleado;

    /*printf("%d\n", (*p).id);
    printf("%d\n", p->id); */
    /*
    printf("Ingrese Id: ");
    scanf("%d", &unEmpleado.id);//la direccion apunta al campo id dentro de la estructura empleado

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(unEmpleado.nombre);

    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);

    printf("ingrese edad: ");
    scanf("%d", &unEmpleado.edad);

    printf("ingrese sueldo: ");
    scanf("%f", &unEmpleado.sueldo);
    */
    /*
    unEmpleado.id = 2212;
    strcpy(unEmpleado.nombre, "Juan");
    unEmpleado.edad = 21;
    unEmpleado.sexo = 'm';
    unEmpleado.sueldo = 100;
    mostrarEmpleado(unEmpleado);
    */

    //cargarEmpleado(&unEmpleado);
    //mostrarEmpleado(unEmpleado);

    cargarEmpleados
    return 0;
}

void mostrarEmpleado(eEmpleado emp){
    printf("Legajo: %d\n", emp.id);
    printf("Nombre: %s\n", emp.nombre);
    printf("Sexo: %c\n", emp.sexo);
    printf("Edad: %d\n", emp.edad);
    printf("Sueldo: %.2f\n", emp.sueldo);

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
    }
    return retorno;
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
    for (int i=0; i<tam; i++){
        mostrarEmpleado(vec+i)
    }
}
