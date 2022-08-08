#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // rand(): [0 - RAND_MAX>

    int dado;

    // a + rand() % (a + b - 1)
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n\n", dado);

    float nota;

    // (b - a) * (float)rand() / RAND_MAX + a
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);

    return 0;
}
