#include <stdio.h>

int main()
{
    printf("Hello f*** world!");

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>   // printf, scanf, puts, sizeof
#include <stdlib.h>  // NULL, rand, rand, exit, atof, atoi
#include <string.h>  // string funcs
#include <time.h>    // time

int main()
{
    // Declaracion de variables
    int peso;
    float altura;
    char sexo;

    // Asignacion de variables
    peso = 67;
    altura = 1.65;
    sexo = 'M';

    puts("Paciente:");
    printf("\t* Sexo: %c\n\t* Peso: %d kg\n\t* Altura: %.2f\n\t* IMC: %.2f\n",
           sexo, peso, altura, peso / (altura * altura));

    return 0;
}

// -----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    // Declaracion de variables
    int peso = 0;
    float altura = 0.0, IMC = 0.0;
    char sexo = ' ';

    /* Caracteres de conversion:
       %d: int
       %f: float
       %c: char
    */
    printf("Ingrese sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Ingrese su peso [kg]: ");
    scanf("%d", &peso);
    printf("Ingrese altura [m]: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    /* Caracteres de escape:
      \n: New Line
      \t: Tab
      \b: Backspace
      \a: Alarm
    */
    printf("Paciente:\n\t* Sexo: %c\n\t* Peso: %d kg\n\t* Altura: %.2f\n\t* IMC: %.2f\n",
           sexo, peso, altura, IMC);

    return 0;
}

// -----------------------------------------------------------------------------------
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

// -----------------------------------------------------------------------------------

#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int anio = 2020;
    const float PI = 3.1415;
    char letra = 'a';
    char nombre[] = "Elvio Lado";   //  \0: NULL

    puts("var: anio");
    printf("\tTipo: int\n");
    printf("\tValor: %d\n", anio);
    printf("\tDireccion de memoria: %d\n", &anio);
    printf("\tNum bytes: %d\n\n", sizeof(anio));

    puts("var: PI");
    printf("\tTipo: float\n");
    printf("\tValor: %f\n", PI);
    printf("\tDireccion de memoria: %d\n", &PI);
    printf("\tNum bytes: %d\n\n", sizeof(PI));

    puts("var: letra");
    printf("\tTipo: char\n");
    printf("\tValor: %c\n", letra);
    printf("\tDireccion de memoria: %d\n", &letra);
    printf("\tNum bytes: %d\n\n", sizeof(letra));

    puts("var: nombre");
    printf("\tTipo: char[] - String\n");
    printf("\tValor: %s\n", nombre);
    printf("\tDireccion de memoria: %d\n", &nombre);
    printf("\tNum bytes: %d\n\n", sizeof(nombre));

    return 0;
}
// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // rand(): [0 - RAND_MAX>

    int dado;

    // a + rand() % (a + b - 1)
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n", dado);
    dado = 1 + rand() % 6; printf("Dado: %d\n\n", dado);

    float nota;

    // (b - a) * (float)rand() / RAND_MAX + a
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);
    nota = (20 - 5) * (float)rand() / RAND_MAX + 5; printf("Nota: %.1f\n", nota);

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int mes = 3;

    if (mes < 1 || mes > 12) {
        printf("El mes ingresado no es valido\n");
    } else {
        // El mes es valido
        if (mes <= 6) {
            printf("El mes %d esta en el primer semestre\n", mes);
        }

        if (mes % 2 == 0) {
            printf("El mes %d es un mes de numero par\n", mes);
        }

         /*
        if (mes <= 6) {
            if (mes % 2 == 0) {
                printf("El mes %d es un mes par y pertenece al primer semestre\n", mes);
            } else {
                printf("El mes %d no es par y pertenece al primer semestre\n", mes);
            }
        } else {
            if (mes % 2 == 0) {
                printf("El mes %d es un mes par y pertenece al segundo semestre\n", mes);
            } else {
                printf("El mes %d no es par y pertenece al segundo semestre\n", mes);
            }
        }
         */

        if ((mes <= 6) && (mes % 2 == 0)) {
            printf("El mes %d es un mes par y pertenece al primer semestre\n", mes);
        }

        if (!(mes <= 6) && (mes % 2 == 0)) {
            printf("El mes %d es un mes par y pertenece al segundo semestre\n", mes);
        }

        if ((mes <= 6) && !(mes % 2 == 0)) {
            printf("El mes %d es un mes impar y pertenece al primer semestre\n", mes);
        }

        if (!(mes <= 6) && !(mes % 2 == 0)) {
            printf("El mes %d es un mes impar y pertence al segundo semestre\n", mes);
        }
    }

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    // Declaracion de variables
    int peso = 0;
    float altura = 0.0, IMC = 0.0;
    char sexo = ' ';

    printf("Ingrese sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Ingrese su peso [kg]: ");
    scanf("%d", &peso);
    printf("Ingrese altura [m]: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    printf("Paciente:\n\t* Sexo: %c\n\t* Peso: %d kg\n\t* Altura: %.2f\n\t* IMC: %.2f\n",
           sexo, peso, altura, IMC);

    /* Rangos IMC:
        - Bajo peso: < 18.5
        - Normal: [18.5 - 24.99]
        - Sobrepeso: >= 25.00
        - Obesidad: >= 30.00
    */
    if (IMC < 18.5) {
        printf("\t* Estado: Bajo Peso\n");
    } else if(IMC < 25.00) {
        printf("\t* Estado: Normal\n");
    } else if (IMC < 30.00) {
        printf("\t* Estado: Sobrepeso\n");
    } else {
        printf("\t* Estado: Obesidad\n");
    }

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int mes;

    printf("Ingrese el mes: [1-12]: "); scanf("%d", &mes);

    switch (mes) {
        case 1: printf("Enero\n"); break;
        case 2: printf("Febrero\n"); break;
        case 3: printf("Marzo\n"); break;
        case 4: printf("Abril\n"); break;
        case 5: printf("Mayo\n"); break;
        case 6: printf("Junio\n"); break;
        case 7: printf("Julio\n"); break;
        case 8: printf("Agosto\n"); break;
        case 9: printf("Setiembre\n"); break;
        case 10: printf("Octubre\n"); break;
        case 11: printf("Noviembre\n"); break;
        case 12: printf("Diciembre\n"); break;
    }

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int mes;

    printf("Ingrese el mes: [1-12]: "); scanf("%d", &mes);

    switch (mes) {
        case 2:
            // Y si es bisiesto???
            printf("El mes tiene 28 dias\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("El mes tiene 31 dias\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
             printf("El mes tiene 30 dias\n");
             break;
        default:
            printf("El mes ingresado no es valido\n");
    }

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int num, cont = 1, n_valores = 10;

    srand(time(NULL));

    while (n_valores > 0) {
        printf("Dado %2d: %d\n", cont, 1 + rand() % 6);

        n_valores--;
        cont++;
    }

    return 0;
}

// -----------------------------------------------------------------------------------

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

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int num = 1000;

    while (num > 1) {
        printf("%d / 2 = ", num);
        num /= 2;   // num = num2 / 2
        printf("%d\n", num);
    }

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int num;

    do {
        printf("Ingrese un numero par positivo: ");
        scanf("%d", &num);
    } while (num % 2 != 0);

    printf("Gracias\n");

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int n_mul3 = 0, val;

    srand(time(NULL));

    // 10 valores aleatorios multiplos de 3
    while (n_mul3 < 10) {

        do {
            val = 1 + rand() % 100;
        } while (!(val % 3 == 0));

        printf("Val %2d: %d\n", n_mul3+1, val);
        n_mul3++;
    }

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int n_mul3 = 0, val;

    srand(time(NULL));

    // 10 valores aleatorios multiplos de 3
    while (1) {
        val = 1 + rand() % 100;

        if (val % 3 != 0) {
            continue;   // Regresa a la linea 13...
        } else {
            printf("Val %2d: %d\n", n_mul3+1, val);
            n_mul3++;
        }

        if (n_mul3 > 10) {
            break;
        }
    }

    return 0;
}

// -----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
Calendario mensual
*/

int main()
{
    int mes, anio, prim_mes, dias_mes;
    char barra;

    printf("Ingrese el mes y el anio [mm/aaaa]: ");
    scanf("%d%c%d", &mes, &barra, &anio);

    // Cuantos dias tiene el mes ingresado?
    switch (mes) {
    case 2: dias_mes = 28; break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: dias_mes = 31; break;
    case 4: case 6: case 9: case 11: dias_mes = 30; break;
    }

    // Congruencia de Zeller (https://es.wikipedia.org/wiki/Congruencia_de_Zeller)
    // meses: 3=marzo, 4=abril, 5=mayo,... 13=enero, 14=febrero
    //   nota: los meses enero y febrero son del año anterior
    //         dia de la semana: 0=sabado, 1=domingo, 2=lunes,... 6=viernes

    if ((mes == 1) || (mes == 2)) {
        mes += 12;
        anio--;
    }

    prim_mes = (1 + ((13 * (mes + 1)) / 5) + anio + (anio / 4) - (anio / 100) + (anio / 400)) % 7;

    // Ajustar el numero de dia al calendario [L, M, X, J, V, S]
    // De: SAB(0), DOM(1), LUN(2), 3, 4, 5, 6
    // A : SAB(6), DOM(0), LUN(1), 2, 3, 4, 5
    // Ternary if...
    prim_mes == 0 ? prim_mes = 6: prim_mes--;

    // Imprimir el encabezado del calendario
    printf("  D  L  M  X  J  V  S\n");

    // Se imprimen los espacios en blanco antes del dia 1
    for (int i=0; i < prim_mes; i++) {
        printf("   ");
    }
    // Se imprimen los dias del calendario desde el 1 del mes
    for (int i=1; i <= dias_mes; i++) {
        printf("%3d", i);
        // ...y se salta a una nueva linea al llegar al fin de semana
        if ((i + prim_mes) % 7 == 0) printf("\n");
    }

    return 0;
}
