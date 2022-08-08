#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int num = 18000000;

    while (num > 1) {
        printf("%d / 2 = ", num);
        num /= 2;   // num = num2 / 2
        printf("%d\n", num);
    }

    return 0;
}
