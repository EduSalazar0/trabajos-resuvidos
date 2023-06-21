#include<stdio.h>
#include<stdlib.h>
#define fila 40
#define columnas 40
int main(){
    int X[fila][columnas], Y[fila][columnas], Z[fila][columnas];//definicion de matrices con n numero de filas y columnas
    int f,c,k1,k2; //f : filas c: columans k1,k2: indexadores
//Codigo encargado de tomar las dimensiones de las matrices
    printf("Este programa suma matrices");
    printf("\nDe cuantas filas quieres que sean tus matrices? ");
    scanf("%d",&f);
    printf("\nDe cuantas columnas quieres tus matrices? ");
    scanf("%d",&c);
//Codigo para ingreso de datos de matrices
    system("cls");
    printf("Ingreso de matriz X\n");
    for(k1=0;k1<f;k1++){
        for(k2=0;k2<c;k2++){
            printf("x(%d, %d) = ",k1+1,k2+1);
            scanf("%d",&X[k1][k2]);
        }
    } 
    printf("Ingreso de matriz Y\n");
    for(k1=0;k1<f;k1++){
        for(k2=0;k2<c;k2++){
            printf("Y(%d, %d) = ",k1+1,k2+1);
            scanf("%d",&Y[k1][k2]);
        }
    }
//Impresion de matrices y resultados de la suma de matrices
    system("cls");
    printf("La matriz X es: \n");
    for(k1=0;k1<f;k1++)
    {
        for(k2=0;k2<c;k2++){
            printf("  %d ",X[k1][k2]);
        }
        printf("\n");
    }
    printf("La matriz Y es: \n");
   for(k1=0;k1<f;k1++)
   {
        for(k2=0;k2<c;k2++){
            printf("  %d ",Y[k1][k2]);
        }
        printf("\n");
    }
    printf("El resultado de la suma de la matriz X y Y es: \n");
        for(k1=0;k1<f;k1++)
        {
            for(k2=0;k2<c;k2++){
                Z[k1][k2]=X[k1][k2]+Y[k1][k2];
                printf("  %d  ",Z[k1][k2]);
            }
            printf("\n");
        }
    return 0;
}