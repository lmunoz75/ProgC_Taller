#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    // Operaciones aritmeticas
    printf("12 + 7 = %d\n", 12 + 7);
    printf("12 - 7 = %d\n", 12 - 7);
    printf("12 * 7 = %d\n", 12 * 7);
    printf("12 / 7 = %d\n", 12 / 7);
    printf("12 / 7.0 = %.4f\n", 12 / 7.0);
    printf("12 %% 7 = %d\n\n", 12 % 7);

    // Operaciones de relacion
    printf("7 > 5 = %d\n", 7 > 5);
    printf("7 < 5 = %d\n", 7 > 5);
    printf("5 >= 7 = %d\n", 5 >= 7);
    printf("7 <= 7 = %d\n", 7 <= 7);
    printf("7 == 7 = %d\n", 7 == 7);
    printf("7 != 7 = %d\n\n", 7 != 7);

    // Operaciones logicas
    printf("0 && 0 = %d\n", 0 && 0);
    printf("0 && 1 = %d\n", 0 && 0);
    printf("1 && 0 = %d\n", 0 && 0);
    printf("1 && 1 = %d\n", 0 && 0);
    printf("0 || 0 = %d\n", 0 || 0);
    printf("0 || 1 = %d\n", 0 || 0);
    printf("1 || 0 = %d\n", 0 || 0);
    printf("1 || 1 = %d\n", 0 || 0);
    printf("   !0 = %d\n", !0);
    printf("   !1 = %d\n\n", !1);

    // Operadadores de asignacion (=)
    int a = 0;
    a = 5; a += 1; printf("5 += 1 : %d\n", a);
    a = 7; a -= 2; printf("7 -= 2 : %d\n", a);
    a = 3; a *= 2; printf("3 *= 2 : %d\n", a);
    a = 12; a /= 3; printf("12 /= 3 : %d\n\n", a);

    // Operadores de incremento, decremento
    int b;
    a = 10;

    printf("a = 10\n");
    a++; printf("a++: %d\n", a);
    ++a; printf("++a: %d\n", a);
    b = a++; printf("b = a++: %d\n", b);
    b = ++a; printf("b = ++a: %d\n", b);

    /* Orden de precedencia:
        ()
        ++, --, -(signo), NOT(!)
        *, /, %
        +, -
        <, >,<=, >=
        ==, !=
        AND (&&)
        OR (||)
        +=, -=, *=, /=, %=, =
    */

    // a = c = 3
    // a || b && c - 3

    // 13 < a < 20   a = 15  (true)
    // 20 > a > 13   a = 15  (false)
    // a > 13 && a < 20   (true)

    return 0;
}
