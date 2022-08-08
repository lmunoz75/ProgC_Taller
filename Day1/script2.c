#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    // Declaracion de variables
    int peso = 0;
    float altura = 0.0, IMC = 0.0;
    char sexo = ' ';

    /* Caracteres de conversion:
       %d: int
       %f: float
       %c: char
    */
    printf("Ingrese sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Ingrese su peso [kg]: ");
    scanf("%d", &peso);
    printf("Ingrese altura [m]: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    /* Caracteres de escape:
      \n: New Line
      \t: Tab
      \b: Backspace
      \a: Alarm
    */
    printf("Paciente:\n\t* Sexo: %c\n\t* Peso: %d kg\n\t* Altura: %.2f\n\t* IMC: %.2f\n",
           sexo, peso, altura, IMC);

    return 0;
}
