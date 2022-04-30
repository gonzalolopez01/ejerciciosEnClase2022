#include <stdio.h>
#include <stdlib.h>

int main()//las mascaras dice como tiene que interpretar
{
    //ampersand antes de una variable = operar de direccion de una var
    //transistor: tipo de interruptor. abierto 0, cerrado 1. Eso es un bit (binary digit)
    //memorias con transistores o capacitores(ram capacitores (mas rapido y volatil))(ssd transistores)
    //8 bits (1 bit, minima cantidad de informacion) = 1 byte (octetos)
    //1 char = 1 byte (por lo general)
    //codigo ascci, sistema de codificacion. Los numeros los pasa por el codigo ascci y lo pasa a la letra correspondiente
    //en una variable, escribir es cargar o descargar capacitores o transistores
    // 1 int = 4 bytes
    // 1 float = 4 bytes
    //con la mascara le decimos al SO con que codificacion queremos guardar
    //entrada por defecto es el teclado. salida por defecto es la pantalla.
    //hay un buffer para teclado. scanf va al buffer del teclado, toma lo que lee y escribe en la direccion de la variable que le pasamos


    int edad;
    float altura;
    char sexo;

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    printf("Ingrese sexo: ");
    fflush(stdin);//para windows
    scanf("%c", &sexo);

    printf("Ingrese altura: ");
    scanf("%f", &altura);

    printf("tu edad es %d\n", edad);
    printf("tu sexo es %c\n", sexo);
    printf("tu altura es %.2f\n", altura);

    return 0;
}
