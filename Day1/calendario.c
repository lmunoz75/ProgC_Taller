#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
	FORMATO DEL CALENDARIO:
	======================
	
	 D  L  M  X  J  V  S
	       1  2  3  4  5
	 6  7  8  9 10 11 12
	13 14 15 16 17 18 19
	20 21 22 23 24 25 26
	27 28 29 30
*/


int main()
{
	int mes, anio, prim_mes, dias_mes;
    char barra;
    
    printf("Ingrese el mes y el anio [mm/aaaa]: ");
    scanf("%d%c%d", &mes, &barra, &anio);
    
    // Cuantos dias tiene el mes ingresado?
    switch (mes) {
        case 2:
            dias_mes = 28; break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: dias_mes = 31; break;
        case 4: case 6: case 9: case 11: dias_mes = 30; break;    
    }

	// Imprimir el nombre del mes
	printf("\n");
	switch (mes) {
        case 1: printf("ENERO\n"); break;
        case 2: printf("FEBRERO\n"); break;
        case 3: printf("MARZO\n"); break;
        case 4: printf("ABRIL\n"); break;
        case 5: printf("MAYO\n"); break;
        case 6: printf("JUNIO\n"); break;
        case 7: printf("JULIO\n"); break;
        case 8: printf("AGOSTO\n"); break;
        case 9: printf("SETIEMBRE\n"); break;
        case 10: printf("OCTUBRE\n"); break;
        case 11: printf("NOVIEMBRE\n"); break;
        case 12: printf("DICIEMBRE\n"); break;
    }

	// Verificar el caso de año bisiesto para febrero
	if ((mes == 2) && (anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0))) {
		dias_mes = 29;
	}
	
	// Congruencia de Zeller
	if (mes == 1 || mes == 2) {
		mes += 12;
		anio--;
	}
	
	prim_mes = (1 + ((13 * (mes + 1)) / 5) + anio + (anio / 4) - (anio / 100) + (anio / 400)) % 7;
	
	// Operacion ternaria
	prim_mes == 0 ? prim_mes = 6: prim_mes--; 

	// Imprimir el encabezado del calendario
	printf("  D  L  M  X  J  V  S\n");	
	
	// Imprimir los espacios en blanco
	for (int i = 0; i < prim_mes; i++) {
		printf("   ");
	}
	
	// Imprimir los dias de la semana entre 1 y dias_mes
	for (int i = 1; i <= dias_mes; i++) {
		printf("%3d", i);
		
		//  se salta a la siguiente semana
		if ((i + prim_mes) % 7 == 0) printf("\n");
	}

    return 0;
}

