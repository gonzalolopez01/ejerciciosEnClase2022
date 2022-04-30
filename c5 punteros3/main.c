#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b);

int main()
{
    int x = 10;
    int y = 20;
    int aux;

    printf("x:%d y:%d\n",x ,y);

    swap(&x,&y);

    printf("x:%d y:%d\n",x ,y);

    return 0;
}

void swap(int* a, int* b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}
