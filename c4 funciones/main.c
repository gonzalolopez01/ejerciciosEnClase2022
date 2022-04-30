#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>

//directivas de preprocesador empiezan con #
//en los archivos .h van los prototipos con los doxygen
// en los archivos .c (source) va el desarrollo de las funciones.
//int sumar(int, int);//prototipo o firma = tipo de dato que devuelve + nombre + parametros
//cuerpo de la funcion es lo que esta demilitado por las llaves, el desarrollo


int main()
{
    /*
    retorno f1(recibe)
    retorno f2(no recibe)
    no retorno f3(recibe)
    no retorno f4(no recibe)
    */
    int num1;
    int num2;
    int resultado;

    printf("ingrese un numero: ");
    scanf("%d", &num1);

    printf("ingrese otro numero: ");
    scanf("%d", &num2);

    resultado = sumar(num1, num2);

    printf("La suma es %d\n", resultado);


    return 0;
}
