#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NDATA 10

void array_al_cuadrado(int[]);

int main()
{
    int numeros[NDATA];

    for (int i=0; i<NDATA; i++) {
        numeros[i] = 1 + rand() % 25;
    }

    for (int i=0; i<NDATA; i++) {
        printf("%d ", numeros[i]);
    }

    // Funcion que eleva todos los elementos de un array al cuadrado
    array_al_cuadrado(numeros);

    printf("\n");
    for (int i=0; i<NDATA; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}

void array_al_cuadrado(int arr[]) {
    for (int i=0; i<NDATA; i++) {
        arr[i] = arr[i] * arr[i];
    }
}
