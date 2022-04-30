#include <stdio.h>
#include <stdlib.h>

void duplicar(int* a);

int main()
{
    int numero = 20;

    printf("numero: %d\n", numero);

    duplicar (&numero); //paso de variable por referencia (referencia es una direccion de memoria)

    printf("al final del main el numero vale: %d\n", numero);

    return 0;
}

void duplicar(int* n){
    *n = *n * 2;
}
