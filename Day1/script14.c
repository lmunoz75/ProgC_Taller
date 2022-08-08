#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int n_mul3 = 0, val;

    srand(time(NULL));

    // 10 valores aleatorios multiplos de 3
    while (n_mul3 < 10) {

        do {
            val = 1 + rand() % 100;
        } while (!(val % 3 == 0));

        printf("Val %2d: %d\n", n_mul3+1, val);
        n_mul3++;
    }

    return 0;
}
