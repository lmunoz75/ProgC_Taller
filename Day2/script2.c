#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

// PROTOTIPO DE FUNCIONES
int es_primo(int);

int main()
{
    for (int n = 1; n < 100; n++) {
        if (es_primo(n)) {
           printf("%d\n", n);
        }
    }
}

// FUNCIONES
int es_primo(int num) {
    if (num < 2) {
        return 0;
    } else if ((num == 2) || (num == 3)) {
        return 1;
    } else {
        for (int div = 2; div <= (int)sqrt(num); div++) {
            if (num % div == 0) {
                return 0;
            }
        }
    }

    return 1;
}
