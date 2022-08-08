#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

float area_circ(float);
int es_digito(char*);

int main()
{
    char input[25];

	do {
		printf("Ingrese radio: "); scanf("%s", &input);	
	} while (!es_digito(input));
    
    printf("Area: %.2f\n", area_circ(atof(input)));

    return 0;
}

float area_circ(float r) {
    return M_PI * pow(r,2);
}

int es_digito(char * string) {
	for (int i=0; i < strlen(string); i++) {
		if (!isdigit(string[i])) {
			return 0;
		}
	return 1;
	}
}
