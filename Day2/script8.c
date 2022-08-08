#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h> // toupper, tolower, isalpha, isdigit, isalnum, ispunct, isspace

int main()
{
    int i = 0;
    char nombre[] = "Elvio Lado";   // string

    while (nombre[i] != NULL) {
        printf("%c", toupper(nombre[i]));
        i++;
    }
    printf("\n");

    return 0;
}

