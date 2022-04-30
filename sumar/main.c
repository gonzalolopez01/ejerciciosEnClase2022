#include <stdio.h>
#include <stdlib.h>

#include "operaciones.h"

int main()
{
    int resultado;
    int num1;
    int num2;
    int rta;

    printf ("ingrese un numero: ");
    scanf("%d", &num1);

    printf("ingrese otro numero: ");
    scanf("%d", &num2);

    rta = sumar(num1, num2);

    printf("Resultado: %d", rta);

    return 0;
}
