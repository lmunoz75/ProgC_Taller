#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int suma(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;

    printf("num1: "); scanf("%d", &num1);
    printf("num2: "); scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, suma(num1, num2));

    return 0;
}
