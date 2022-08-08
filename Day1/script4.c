#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int anio = 2021;
    const float PI = 3.1415;
    char letra = 'a';
    char nombre[] = "Elvio Lado";   //  \0: NULL

    puts("var: anio");
    printf("\tTipo: int\n");
    printf("\tValor: %d\n", anio);
    printf("\tDireccion de memoria: %d\n", &anio);
    printf("\tNum bytes: %d\n\n", sizeof(anio));

    puts("var: PI");
    printf("\tTipo: float\n");
    printf("\tValor: %f\n", PI);
    printf("\tDireccion de memoria: %d\n", &PI);
    printf("\tNum bytes: %d\n\n", sizeof(PI));

    puts("var: letra");
    printf("\tTipo: char\n");
    printf("\tValor: %c\n", letra);
    printf("\tDireccion de memoria: %d\n", &letra);
    printf("\tNum bytes: %d\n\n", sizeof(letra));

    puts("var: nombre");
    printf("\tTipo: char[] - String\n");
    printf("\tValor: %s\n", nombre);
    printf("\tDireccion de memoria: %d\n", &nombre);
    printf("\tNum bytes: %d\n\n", sizeof(nombre));

    return 0;
}
