#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N_ALUMNOS 12
#define N_NOTAS 5

int main()
{
    int notas[N_ALUMNOS][N_NOTAS];
    float prom_alum[N_ALUMNOS];
    float prom_notas[N_NOTAS];
    float suma;

    // Arreglo de 5 notas para 12 estudiantes
    for (int i=0; i<N_ALUMNOS; i++) {
        for (int j=0; j<N_NOTAS; j++) {
            notas[i][j] = 5 + rand() % 16;
        }
    }

    // Calcular los promedios de los 12 estudiantes
    for (int i=0; i<N_ALUMNOS; i++) {
        suma = 0;
        for (int j=0; j<N_NOTAS; j++) {
            suma += notas[i][j];
        }
        prom_alum[i] = suma / N_NOTAS;
    }

    // Calcular el promedio de las 5 evaluaciones
    for (int j=0; j<N_NOTAS; j++) {
        suma = 0;
        for (int i=0; i<N_ALUMNOS; i++) {
            suma += notas[i][j];
        }
        prom_notas[j] = suma / N_ALUMNOS;
    }

    // Imprimir todos los resultados en forma de tabla
    printf("            N1      N2      N3      N4      N5\n");
    printf("------------------------------------------------\n");
    for (int i=0; i<N_ALUMNOS; i++) {
            printf("Alumno %2d: ", i+1);
        for (int j=0; j<N_NOTAS; j++) {
            printf("%3d     ", notas[i][j]);
        }
        printf("  %.1f\n", prom_alum[i]);
    }
    printf("------------------------------------------------\n");
    printf("          %.2f   %.2f   %.2f   %.2f   %.2f\n",
           prom_notas[0], prom_notas[1], prom_notas[2], prom_notas[3], prom_notas[4]);

    return 0;
}
