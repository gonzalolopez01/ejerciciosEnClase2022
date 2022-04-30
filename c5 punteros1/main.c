#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x; //si tengo la direccion de memoria de una variable la puedo leer y escribir
    float y;
    char z;
    char* p; //las variable punteros guardan direcciones de memoria

    x = 10;

    // & operador de direccion. &x direccion de memoria de x
    // * operador de indireccion. *(&x) valor en esa direccion de memoria


    *(&x)//parentesis para que el asterisco afecte a todo

    printf("x vale %d\n", x); //pasaje por valor
    printf("x vale %d\n", *(&x)); //valor guardado en esa direccion de memoria
    printf("x vale %d\n", *p);//valor por direccion
    return 0;
}
