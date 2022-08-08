#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int n_mul3 = 0, val;

    srand(time(NULL));

    // 10 valores aleatorios multiplos de 3
    while (1) {
        val = 1 + rand() % 100;

        if (val % 3 != 0) {
            continue;   // Regresa a la linea 13...
        } else {
            printf("Val %2d: %d\n", n_mul3+1, val);
            n_mul3++;
        }

        if (n_mul3 > 10) {
            break;
        }
    }

    return 0;
}
