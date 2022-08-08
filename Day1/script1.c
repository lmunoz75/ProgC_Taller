#include <stdio.h>   // printf, scanf, puts, sizeof
#include <stdlib.h>  // NULL, rand, rand, exit, atof, atoi
#include <string.h>  // string funcs
#include <time.h>    // time

int main()
{
    // Declaracion de variables
    int peso;
    float altura;
    char sexo;

    // Asignacion de variables
    peso = 67;
    altura = 1.65;
    sexo = 'M';

    puts("Paciente:");
    printf("\t* Sexo: %c\n\t* Peso: %d kg\n\t* Altura: %.2f\n\t* IMC: %.2f\n",
           sexo, peso, altura, peso / (altura * altura));

    return 0;
}
