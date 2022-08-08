#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int num, cont = 1, n_valores = 10;

    srand(time(NULL));

    while (n_valores > 0) {
        printf("Dado %2d: %d\n", cont, 1 + rand() % 6);

        n_valores--;
        cont++;
    }

    return 0;
}
