#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

void show_game();
int player_wins();
int pc_wins();

// Variable global
char tablero[] = "         ";
char opc;
int pos, quit_game = 0;

int main()
{
    srand(time(NULL));

    while (!(quit_game)) {
        // Lazo del juego. Mientras no haya ganadores...
        while (!(player_wins()) || !(pc_wins)) {
            // Se muestra el tablero
            system("cls");
            show_game();

            // Inicial el jugador siempre primero
            printf("\n\nPosicion [1-9]: "); scanf("%d", &pos);

            // Marca la posicion con "X"
            tablero[pos-1] = 'X';

            // Juega la PC (anota en una posicion vacia)
            do {
                pos = rand() % 9;
            } while (tablero[pos] != ' ');

            // Marca la posicion con "O"
            tablero[pos] = 'O';
        }

        // En esta seccion ha ganado uno de los jugadores
        system("cls");
        show_game();
        if (player_wins()) {
            printf("\nUd. ha ganado!\n");
        } else {
            printf("\nLa PC ha ganado!\n");
        }

        fflush(stdin);
        printf("Desea jugar otra partida [S/N]: "); scanf("%c", &opc);

        if (toupper(opc) == 'N') {
            quit_game = 1;
        }

        // Se inicializa el tablero
        strcpy(tablero, "         ");
    }

    return 0;
}

void show_game() {
    printf("\n");
    printf("\t TIC-TAC-TOE\n");
    printf("\t ===========\n\n");
    printf("\t  %c | %c | %c \n", tablero[0], tablero[1], tablero[2]);
    printf("\t -----------\n");
    printf("\t  %c | %c | %c \n", tablero[3], tablero[4], tablero[5]);
    printf("\t -----------\n");
    printf("\t  %c | %c | %c \n", tablero[6], tablero[7], tablero[8]);
}

int player_wins() {
    if (tablero[0] == 'X' && tablero[1] == 'X' && tablero[2]== 'X') return 1;
    if (tablero[3] == 'X' && tablero[4] == 'X' && tablero[5]== 'X') return 1;
    if (tablero[6] == 'X' && tablero[7] == 'X' && tablero[8]== 'X') return 1;
    if (tablero[0] == 'X' && tablero[3] == 'X' && tablero[6]== 'X') return 1;
    if (tablero[1] == 'X' && tablero[4] == 'X' && tablero[7]== 'X') return 1;
    if (tablero[2] == 'X' && tablero[5] == 'X' && tablero[8]== 'X') return 1;
    if (tablero[0] == 'X' && tablero[4] == 'X' && tablero[8]== 'X') return 1;
    if (tablero[2] == 'X' && tablero[4] == 'X' && tablero[6]== 'X') return 1;
    return 0;
}

int pc_wins() {
    if (tablero[0] == 'O' && tablero[1] == 'O' && tablero[2]== 'O') return 1;
    if (tablero[3] == 'O' && tablero[4] == 'O' && tablero[5]== 'O') return 1;
    if (tablero[6] == 'O' && tablero[7] == 'O' && tablero[8]== 'O') return 1;
    if (tablero[0] == 'O' && tablero[3] == 'O' && tablero[6]== 'O') return 1;
    if (tablero[1] == 'O' && tablero[4] == 'O' && tablero[7]== 'O') return 1;
    if (tablero[2] == 'O' && tablero[5] == 'O' && tablero[8]== 'O') return 1;
    if (tablero[0] == 'O' && tablero[4] == 'O' && tablero[8]== 'O') return 1;
    if (tablero[2] == 'O' && tablero[4] == 'O' && tablero[6]== 'O') return 1;
    return 0;
}
