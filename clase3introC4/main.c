#include <stdio.h>
#include <stdlib.h>

int main()
{
    //funciones: algoritmo al cual invocamos por su nombre. Lo que pasamos entre parentesis son los paeametros.
    /* retorna (recibe)
        no retorna (recibe)
        retorna (no recibe)
        no retorna ( no recibe)
    return 0; con return hacemos mandamos lo que devuelve la funcion

    memoria:
        Segmento de codigo
        Stack/Pila. Lifo (last in first out). Atiendo lo que va viniendo. Cuando se termina de usar las variables en el stack, se libera ese espacio en memoria y vuelve a ser gestinado por el SO

    void: no usa el return porque en este caso no se devuelve nada
    a la izquierda del nombre de una funcion tengo que escribir algo (void,int,float,etc)
    */

    //Pedir 2 numero sumarlos y mostrar el resultado

    int num1;
    int num2;
    int resultado;

    printf("ingrese un numero: ");
    scanf("%d", &num1);

    printf("ingrese otro numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("La suma es %d\n", resultado);

    //printf("caracteres impresos %d\n", printf("cuantos caracteres hay: "));

    return 0;
}
