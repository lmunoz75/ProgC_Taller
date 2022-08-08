#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int num;

    do {
        printf("Ingrese un numero par positivo: ");
        scanf("%d", &num);
    } while (num % 2 != 0);

    printf("Gracias\n");

    return 0;
}
