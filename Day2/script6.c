#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char to_upper(char);

int main()
{
    for (char letra='!'; letra <= 'b'; letra++) {
        printf("%c ", to_upper(letra));
    }
    printf("\n");

    return 0;
}

char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}
