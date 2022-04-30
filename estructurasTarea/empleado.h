#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED


typedef stuct{
    int dia;
    int mes;
    int anio;
}eFecha

typedef struct{
    int id;
    char nombre[20];
    char sexo;
    int edad;
    float sueldo;
    int isEmpty;
    //eFecha fIngreso;

}eEmpleado;

int inicializarEmpleados(eEmpleado* pEmpleado, int tam);
int cargarEmpleado(eEmpleado* pEmpleado);
int cargarEmpleados(eEmpleado* vec, int tam);
void mostrarEmpleado(eEmpleado emp);
int listarEmpleados(eEmpleado* vec, int tam);

int ordenarEmpleado(eEmpleado vec[], int tam); //ver y hacer la que se elige el campo
int ordenarEmpleadosSexoId(eEmpleado vec[], int tam);

#endif // EMPLEADO_H_INCLUDED
