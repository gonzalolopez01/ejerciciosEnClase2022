#include <stdio.h>
#include <stdlib.h>

//pedir 2 enteros sumarlos y mostrar el resultado

float promediarEnteros(int a, int b);
int obtenerMayor(int a, int b, int c);
float calcularSuperficie(float radio);

int calcularSuperficieRef(float radio, float* x); //hacer esta funcion

int main()
{
    int num1;
    int num2;
    int mayor;
    /*
    float resultado;

    printf("ingrese un numero: ");
    scanf("%d", &num1);

    printf("ingrese otro numero: ");
    scanf("%d", &num2);


    printf("Promedio: %.2f", resultado = promediarEnteros(num1,num2) );
    //printf("%.2f", promediarEnteros(num1,num2);
    */

    /*
    mayor = obtenerMayor(1,22,1);
    printf("mayor: %d", mayor);
    */
    float radio = -5
    float superficie;

    superficie = calcularSuperficie(radio)
    printf("Superficie Circulo: %.2f", calcularSuperficie(12));


    return 0;
}

float promediarEnteros(int a, int b)
{
    //return (float) (a+b)/2;
    float retorno;
    return retorno = (float)(a+b)/2;
}
int obtenerMayor(int a, int b, int c)
{
    int mayor;
    if(a>=b){
        if(a>c){
            mayor = a;
        }else{
            mayor = c;
        }
    }else{
        if(b>=c){
            mayor = b;
        }
    }
    return mayor;
}
float calcularSuperficie(float radio)
{
    float sup = -1;
    if(radio >= 0){
        sup = 3.14 * radio * radio;
    }
    return sup;
}

