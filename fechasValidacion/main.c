#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant;
    int dia;
    int mes;
    int anio;

    printf("ingrese fecha: ");
    cant = scanf("%d/%d/%d", &dia,&mes,&anio);

    printf("%d/%d/%d", dia, mes, anio);

    printf("%d",cant);
    return 0;
}
