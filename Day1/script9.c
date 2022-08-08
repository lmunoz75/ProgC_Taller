#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int mes;

    printf("Ingrese el mes: [1-12]: "); scanf("%d", &mes);

    switch (mes) {
        case 2:
            // Y si es bisiesto???
            printf("El mes tiene 28 dias\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("El mes tiene 31 dias\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
             printf("El mes tiene 30 dias\n");
             break;
        default:
            printf("El mes ingresado no es valido\n");
    }

    return 0;
}
