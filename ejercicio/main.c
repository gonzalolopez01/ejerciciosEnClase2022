#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pedir 2 numeros e informar el promedio de los mismos
    int numA;
    int numB;
    float promedio;


    printf("Ingrese numero A: ");
    scanf("%d", &numA);

    printf("Ingrese numero B: ");
    scanf("%d", &numB);

    promedio = (float)(numA + numB) / 2;

    printf("El promedio de ambos numeros es: %.2f", promedio);

    return 0;
}
