#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int opcion;
    char salir = 'n';

    do{
        /*system("cls");
        printf("Menu de opciones\n");
        printf("1- Opcion1\n");
        printf("2- Opcion2\n");
        printf("3- Opcion3\n");
        printf("4- Opcion4\n");
        printf("5- Salir\n");

        printf("ingrese opcion: ");
        scanf("%d", &opcion);*/

        opcion = menu();
        switch(opcion){
            case 1:
                printf("hola, q tal");
                system("pause"); //o getch();
                break;
            case 2:
                printf("chinchin");
                break;
            case 3:
                printf("chau nos vemos");
                break;
            case 4:
                //salir = 's';
                printf("confirma salida?: ");
                fflush(stdin);
                scanf("%c", &salir);
                break;
            default:
                printf("Opcion invalida\n");
        }

        }while(salir != 's');


    return 0;
}
int menu(){
    int opcion;

    system("cls");
    printf("Menu de opciones\n");
    printf("1- Opcion1\n");
    printf("2- Opcion2\n");
    printf("3- Opcion3\n");
    printf("4- Opcion4\n");
    printf("5- Salir\n");

    printf("ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

//fflush(stdin);
//x = getchar(); toma un caracter sin pasar referencia. Espera el enter
//x = getche(); toma un caracter y lo manda a x sin apretar enter
//x = getch(); no se puede mostar en la pantalla el caracter. Por lo tanto tambien sirver para pausar el programa

//declaracion implicita: significa que tenes que usar una libreria
