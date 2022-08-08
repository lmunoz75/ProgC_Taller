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

    printf("Ingrese sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Ingrese su peso [kg]: ");
    scanf("%d", &peso);
    printf("Ingrese altura [m]: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    printf("Paciente:\n\t* Sexo: %c\n\t* Peso: %d kg\n\t* Altura: %.2f\n\t* IMC: %.2f\n",
           sexo, peso, altura, IMC);

    /* Rangos IMC:
        - Bajo peso: < 18.5
        - Normal: [18.5 - 24.99]
        - Sobrepeso: >= 25.00
        - Obesidad: >= 30.00
    */
    if (IMC < 18.5) {
        printf("\t* Estado: Bajo Peso\n");
    } else if(IMC < 25.00) {
        printf("\t* Estado: Normal\n");
    } else if (IMC < 30.00) {
        printf("\t* Estado: Sobrepeso\n");
    } else {
        printf("\t* Estado: Obesidad\n");
    }

    return 0;
}
