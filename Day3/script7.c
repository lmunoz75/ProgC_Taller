#include <stdio.h>
#include <stdlib.h>

int n_veces, n_dados;

void genera_dados(int, int, int[][n_dados]);
int freq_array(int, int, int[][n_dados], int);
void put_stars(int);

int main()
{
    float freq;
    
    printf("Cuantas veces desea lanzar un dado: "); scanf("%d", &n_veces);
    printf("Cuantos dados quiere lanzar: "); scanf("%d", &n_dados);
    
    // Generamos un arreglo con el lanzamiento de los dados
    int dados[n_veces][n_dados];
    genera_dados(n_veces, n_dados, dados);	

    // Se muestra la probabilidad de ocurrencia
    // de cada resultado
    for (int i=n_dados; i<=(6*n_dados); i++) {
        freq = (float)freq_array(n_veces, n_dados, dados, i)/n_veces;
        printf("freq(%2d)= %.4f : ", i, freq);
        put_stars((int)(freq*100* n_dados));
    }

    return 0;
}

void genera_dados(int fil, int col, int arr[fil][col]) {
	for (int i=0; i<fil; i++) {
        for (int j=0; j<col; j++) {
            arr[i][j] = 1 + rand() % 6;
        }	
    }
}

int freq_array(int fil, int col, int arr[fil][col], int n) {
    int resultado, cont = 0;
	
    for (int i=0; i<fil; i++) {
        resultado = 0;
        for (int j=0; j<col; j++) {
            resultado += arr[i][j];
    	}
        
        if (resultado == n) cont++;
    }
    return cont;
}

void put_stars(int n) {
    for (int i=0; i<n; i++) {
        printf("*");
    }
    printf("\n");
}
