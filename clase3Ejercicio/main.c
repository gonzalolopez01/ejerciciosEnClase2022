#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>
/*de una compra debes ingresar una cantidad indeterminada de cortes de carne vacuna, validando los siguientes datos:
Nombre del corte, precio, peso en kg, tipo(con hueso o sin hueso)
a- informar el peso total de la compra
b- el nombre del corte mas caro de los sin hueso.
c- el nombre del corte mas liviano de los con hueso

con hueso c y sin hueso s
*/
int main()
{
    char nombre;
    float precio;
    float peso;
    char tipo;
    float acumPeso = 0;
    float maxPrecio;
    int flagSinHueso = 1;
    char nombreCaro;
    char nombreLiviano;
    int flagConHueso = 1;
    float pesoMin;
    char seguir;

    do{
        printf("ingrese nombre del corte: ");
        fflush(stdin);
        scanf("%c", &nombre);

        printf("ingrese precio: ");
        scanf("%f", &precio);
        while(precio <=0){
            printf("precio invalido. Reingrrese precio: ");
            scanf("%f", &precio);
        }

        printf("ingrese peso: ");
        scanf("%f", &peso);
        while(peso <=0){
            printf("peso invalido. Reingrrese peso: ");
            scanf("%f", &peso);
        }

        printf("ingrese tipo del corte");
        fflush(stdin);
        scanf("%c", &tipo);
        tipo = tolower(tipo); //poner la biblioteca correspondiente
        while(tipo != 'c' && tipo != 's'){ // !(tipo == 'c' || tipo == 's')
            printf("Tipo invalido. Reingrese tipo: ");
            fflush(stdin);
            scanf("%c", &tipo);
            tipo = tolower(tipo);
        }

        acumPeso += peso;

        if(tipo == 's'){
            // aca entro si el corte es sin hueso
            if(flagSinHueso || precio > maxPrecio){ // || pipe por corto circuito, && and por cortocircuito. Evalua la primera parte y si se cunple deja el resto de lado
                maxPrecio = precio;
                nombreCaro = nombre;
                flagSinHueso = 0;
            /*}else{
                if(precio > maxPrecio){
                    maxPrecio = precio;
                    nombreCaro = nombre;
                }*/
            }
        }else{
            // aca entro si el corte es con hueso
            if(flagConHueso || peso > pesoMin){
                pesoMin = peso;
                nombreLiviano = nombre;
                flagConHueso = 0;
            }
        }

        printf("Quiere ingresar otro corte?: ");//atoi - atof - itoa - ftoa
        fflush(stdin);
        scanf("%c", &seguir);

    }while(seguir == 's');

    printf("a- El peso total de la compra es %.2f kg\n", acumPeso);

    if(flagSinHueso == 1){
        printf("b- no hubo compras de cortes sin huesos\n");
    }else{
        printf("b- el nombre mas caro es %c y cuesta $ %.2f\n", nombreCaro, maxPrecio);
    }

    if(flagConHueso){
        printf("c- no comprarcon con hueso\n");
    }else{
        printf("c- nombre del mas liviano es %c y pesa %.2f kg\n", nombreLiviano, pesoMin);
    }

    return 0;
}
