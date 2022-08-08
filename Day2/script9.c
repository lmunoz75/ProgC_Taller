#include <stdio.h>
#include <stdlib.h>  // atof, atoi
#include <string.h>  // strlen, strcat, strrev, strcmp, strcpy
#include <time.h>

int main()
{
    int i;
    char nombre[25], apellido[25];
    char nombre_completo[50];

    printf("Ingrese su nombre: ");
    scanf("%s %s", nombre, apellido);

    strcat(nombre, " ");
    strcat(nombre, apellido);

    printf("Nombre: %s\n", nombre);

    strrev(nombre);
    printf("Nombre Invertido: %s\n", nombre);

    return 0;
}
