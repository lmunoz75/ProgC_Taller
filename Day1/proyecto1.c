#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
Calendario mensual
*/

int main()
{
    int mes, anio, prim_mes, dias_mes;
    char barra;

    printf("Ingrese el mes y el anio [mm/aaaa]: ");
    scanf("%d%c%d", &mes, &barra, &anio);

    // Cuantos dias tiene el mes ingresado?
    switch (mes) {
    case 2: dias_mes = 28; break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: dias_mes = 31; break;
    case 4: case 6: case 9: case 11: dias_mes = 30; break;
    }

    // Congruencia de Zeller (https://es.wikipedia.org/wiki/Congruencia_de_Zeller)
    // meses: 3=marzo, 4=abril, 5=mayo,... 13=enero, 14=febrero
    //   nota: los meses enero y febrero son del año anterior
    //         dia de la semana: 0=sabado, 1=domingo, 2=lunes,... 6=viernes

    if ((mes == 1) || (mes == 2)) {
        mes += 12;
        anio--;
    }

    prim_mes = (1 + ((13 * (mes + 1)) / 5) + anio + (anio / 4) - (anio / 100) + (anio / 400)) % 7;

    // Ajustar el numero de dia al calendario [L, M, X, J, V, S]
    // De: SAB(0), DOM(1), LUN(2), 3, 4, 5, 6
    // A : SAB(6), DOM(0), LUN(1), 2, 3, 4, 5
    // Ternary if...
    prim_mes == 0 ? prim_mes = 6: prim_mes--;

    // Imprimir el encabezado del calendario
    printf("  D  L  M  X  J  V  S\n");

    // Se imprimen los espacios en blanco antes del dia 1
    for (int i=0; i < prim_mes; i++) {
        printf("   ");
    }
    // Se imprimen los dias del calendario desde el 1 del mes
    for (int i=1; i <= dias_mes; i++) {
        printf("%3d", i);
        // ...y se salta a una nueva linea al llegar al fin de semana
        if ((i + prim_mes) % 7 == 0) printf("\n");
    }

    return 0;
}
