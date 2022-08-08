#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strlen, strcat, strrev, strcmp, strcpy
#include <time.h>
#include <ctype.h>

int main()
{
    char nombre[] = "Elvio Lado";

    for (int i = 0; i < strlen(nombre); i++) {   // sizeof, strlen
        printf("nombre[%d] = %c\n", i, nombre[i]);
    }

    return 0;
}

