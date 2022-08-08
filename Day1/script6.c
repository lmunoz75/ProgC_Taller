#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int mes = 13;

    if (mes < 1 || mes > 12) {
        printf("El mes ingresado no es valido\n");
    } else {
        // El mes es valido
        if (mes <= 6) {
            printf("El mes %d esta en el primer semestre\n", mes);
        }

        if (mes % 2 == 0) {
            printf("El mes %d es un mes de numero par\n", mes);
        }

         /*
        if (mes <= 6) {
            if (mes % 2 == 0) {
                printf("El mes %d es un mes par y pertenece al primer semestre\n", mes);
            } else {
                printf("El mes %d no es par y pertenece al primer semestre\n", mes);
            }
        } else {
            if (mes % 2 == 0) {
                printf("El mes %d es un mes par y pertenece al segundo semestre\n", mes);
            } else {
                printf("El mes %d no es par y pertenece al segundo semestre\n", mes);
            }
        }
         */

        if ((mes <= 6) && (mes % 2 == 0)) {
            printf("El mes %d es un mes par y pertenece al primer semestre\n", mes);
        }

        if (!(mes <= 6) && (mes % 2 == 0)) {
            printf("El mes %d es un mes par y pertenece al segundo semestre\n", mes);
        }

        if ((mes <= 6) && !(mes % 2 == 0)) {
            printf("El mes %d es un mes impar y pertenece al primer semestre\n", mes);
        }

        if (!(mes <= 6) && !(mes % 2 == 0)) {
            printf("El mes %d es un mes impar y pertence al segundo semestre\n", mes);
        }
    }

    return 0;
}
