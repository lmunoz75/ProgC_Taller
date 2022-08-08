#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    for (int i=0; i<10; i++) {   // int i : C11
        printf("Dado %2d: %d\n", i+1, 1 + rand() % 6);
    }

    return 0;
}
