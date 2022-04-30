#include <stdio.h>
#include <stdlib.h>

#define FIL 3
#define COL 5

int mostrarMatrizInt(int fil, int col, int mat[][col]); //hay que hacer asi porque el nombre de una matriz es es un puntero a la 1r fila,
//pero hay que pasarle el numero de cols.
int cargarMatrizEnteros(int fil, int col, int mat[][col]);

int main()
{
    //int numeros[f][c] //[cantidad de filas][cantidad de columnas]// ne la mem lo ponen el linea,
    //[][][][][]/[][][][][]/[][][][][] (todo en linea y cada 3 alementos para la maquina es una fila)
    int numeros[FIL][COL] = {3,4,5,6,7,8,9,3,4,5,6,5,4,3,4};
    //int numeros[FIL][COL] = {0} lo llena todo de ceros
    //se puede hacer lo mismo con chars

    /*for (int i=0; i<FIL; i++){
        for(int j= 0; j<COL; j++){
            printf("ingrese un nro: ");
            scanf("%d", &numeros[i][j]);
        }
        printf("\n");
    }*/
   /*  for (int i=0; i<FIL; i++){
        for(int j= 0; j<COL; j++){
            printf("%d ", numeros[i][j]);

        }
        printf("\n");
    }*/
    cargarMatrizEnteros(FIL,COL,numeros);
    mostrarMatrizInt(FIL,COL,numeros);

    return 0;
}
int mostrarMatrizInt(int fil, int col, int mat[][col]){
    int todoOk = 0;
    if(fil > 0 && col > 0 &&  mat!=NULL){
        for (int i=0; i<fil; i++){
            for(int j= 0; j<col; j++){
                printf("%d ", mat[i][j]);
            }
        printf("\n");
        }
    }
}

int cargarMatrizEnteros(int fil, int col, int mat[][col]){
    int todoOk = 0;
    if(fil > 0 && col > 0 &&  mat!=NULL){
      for (int i=0; i<fil; i++){
        for(int j= 0; j<col; j++){
            printf("ingrese un nro: ");
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
        }
    }
}
