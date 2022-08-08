#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

float area_circ(float);

int main()
{
    char input[25];

    printf("Ingrese radio: "); scanf("%s", &input);
    printf("Area: %.2f\n", area_circ(atof(input)));

    return 0;
}

float area_circ(float r) {
    return M_PI * pow(r,2);
}
