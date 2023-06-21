#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_FILAS 50
#define MAX_COLUMNAS 50
//inicio del codigo
int main() {
    srand(time(NULL));
    int f, c;
    int A[MAX_FILAS][MAX_COLUMNAS];
//Parametros pedidos al usuario para determinar las filas y columnas
    printf("De cuantas filas va a querer su matriz? ");
    scanf("%d", &f);
    printf("De cuantas columnas va a querer su matriz? ");
    scanf("%d", &c);
//Funcion for para crear la matriz
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            A[i][j] = rand() % 100;
        }
    }
//Funcion para imprimir la matriz creada
    printf("Impresion de la matriz:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("(%d) ", A[i][j]);
        }
        printf("\n");
    }
//Funcion para imprimir la matriz transpuesta
    printf("La matriz transpuesta es:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < f; j++) {
            printf("(%d) ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}
