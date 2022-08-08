#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NDATA 5

int main()
{
    // Arrays en una dimension
    int numeros[NDATA]= {1, 2, 3, 4, 5};

    // Numero de elementos: sizeof(array) / sizeof(array_type)
    for (int i=0; i<NDATA; i++) {
        printf("numeros[%d] = %d (Direccion: %d)\n", i, numeros[i], &numeros[i]);
    }
}

