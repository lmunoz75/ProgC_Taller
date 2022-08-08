#include <stdio.h>
#include <stdlib.h>

#define ROW 7
#define COL 3

int numeros[ROW * COL];
int tablero[ROW][COL];

void show_tablero();
void recoje_numeros(int, int, int);

int main()
{
    int idx, opc;

    // Se generan numeros aleatorios para el tablero
    for(int i=0; i<(ROW * COL); i++) {
        numeros[i] = 100 + rand() % (999 - 100 + 1);
    }

    // Lazo de control (3 iteraciones)
    for (int k=0; k<3; k++) {
        // Se reparten los numeros en el tablero
        idx = 0;
        for (int i=0; i<ROW; i++) {
            for (int j=0; j<COL; j++) {
                tablero[i][j] = numeros[idx];
                idx++;
            }
        }

        // Se muestra el tablero
        system("cls");
        show_tablero();

        // El usuario ingresa la columna donde esta el numero escogido
        if (k==0) printf("\nEscoja un numero...\nEn que columna esta?: ");
        if (k==1) printf("\nAhora en que columna esta?: ");
        if (k==2) printf("\nY ahora en que columna esta?: ");
        if (k==3) printf("\nY Ahora...: ");

        scanf("%d", &opc);

        // Se recogen los de arr a aba y de izq a der de forma tal que
        // se recoja en el medio a la columna escogida
        if (opc == 1) recoje_numeros(3, 1, 2);
        if (opc == 2) recoje_numeros(1, 2, 3);
        if (opc == 3) recoje_numeros(2, 3, 1);
    }

    // Se reparten los numeros en el tablero
    system("cls");
    printf("\a\n\tEl numero escogido es %d!\n", numeros[10]);

    return 0;
}

void show_tablero() {
    printf("\t\tPODER MENTAL\n");
    printf("\t\t============\n");
    for (int i=0; i<ROW; i++) {
        printf("\t\t");
        for (int j=0; j<COL; j++) {
            printf("%3d ", tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void recoje_numeros(int c1, int c2, int c3) {
    int idx = 0;
    for (int i=0; i<ROW; i++) {
        numeros[idx] = tablero[i][c1-1];
        idx++;
    }

    for (int i=0; i<ROW; i++) {
        numeros[idx] = tablero[i][c2-1];
        idx++;
    }

    for (int i=0; i<ROW; i++) {
        numeros[idx] = tablero[i][c3-1];
        idx++;
    }
}
