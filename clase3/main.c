#include <stdio.h>
#include <stdlib.h>

// pedir numero mientras la suma de los mismo no supere el numero 1000

int main()
{
    int numero;
    int acumulador = 0; //los acumuladores se deben inicializar porque primero se lee el valor que tiene.

    while(acumulador <= 1000){//desconozco la cantidad de iteraciones de antemano
        printf("ingrese un numero: ");
        scanf("%d",numero);

        acumulador += numero; //aca primero se lee el valor de la variable y despues se escribe
    }
    printf("El acumulaor vale: %d\n", acumulador);
    printf("Salimos del while\n");

    //***********************

    int cont = 1;

    while (cont <=10){//conozco la cantidad de iteraciones de antemano
        printf("%d\n",cont);
        cont++; //cont + 1 // cont +=1;
    }
    printf("salimos del while\n");

    //****************************

    char seguir = 's'; //tengo que inicializarla si o si para que la lea el while y pueda entrar

    while(seguir == 's'){//para que entre por lo menos una vez tuve que inicializar la variable de control
        printf("hola que tal?\n");

        printf("Quiere que lo saludo de nuevo?: ");
        fflush(stdin);
        scanf("%c", &seguir);
    }

    //do while, no se de ante mano la cantidad de iteraciones y entra al do sí o sí por lo menos una vez

    char seguir; //no es necesario inicializarla porque le voy a dar valor a la variable durante el proceso de el do while

    do{
        printf("hola que tal?\n");

        printf("Quiere que lo saludo de nuevo?: ");

        fflush(stdin);
        scanf("%c", &seguir);
    }while(seguir == 's');

    //************************
    int cont;//si la declaro en el for, cuando salga del mismo la variable no va a existir porque solo perteneceria a ese scope. no compilaria

    for(cont = 1; cont <= 10; cont++){ //se la cantidad de iteraciones
        printf("%d\n", cont);
    }
    printf("conta vale %d\n", cont);//cuando salga, la variable de control va a valer 1 mas que la condicion.
    printf("Salimos del while\n");
    return 0;
}

//cuando queremos que se itere 1 vez: do while
//se de ante mano las iteraciones: for
//para el resto while (auqnue se puede usar en lugar de for)
