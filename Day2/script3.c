#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int a = 100;
    int *ptr_a;

    ptr_a = &a;

    printf("Valor de a: %d\n", a);
    printf("Direccion de a: %d\n", &a);
    printf("Valor de ptr_a: %d\n", ptr_a);
    printf("Valor de *ptr_a: %d\n", *ptr_a);

    return 0;
}
