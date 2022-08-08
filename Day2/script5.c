#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

// PROTOTIPO DE FUNCIONES (pasar por referencia)
void cart2pol(int, int, float *, float *);

int main()
{
    int rel, img;
    char ch;
    float mod, ang;

    printf("Ingrese un numero complejo [a+bi]: ");
    scanf("%d%c%d%c", &rel, &ch, &img, &ch);

    cart2pol(rel, img, &mod, &ang);

    printf("Modulo: %.4f\nAngulo: %.4f\n", mod, ang);

    return 0;
}

// FUNCIONES
void cart2pol(int rel, int img, float *mod, float *ang) {
    *mod = sqrt(pow(rel, 2) + pow(img, 2));
    *ang = (180/M_PI) * atan2(img, rel);
}
