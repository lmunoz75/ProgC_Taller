#include <stdio.h>
#include <stdlib.h>

void genera_dados(int[], int);
int freq_array(int[], int, int);
void put_stars(int);
	
int main()
{
	int n_veces;
	float freq;
	
	printf("Cuantas veces desea lanzar un dado: "); scanf("%d", &n_veces);
	
    // Generamos un arreglo con los lanzamentos de un dado
    int dados[n_veces];
	genera_dados(dados, n_veces);

    // Se muestra la probabilidad de ocurrencia
    // de cada resultado
    for (int i=1; i<7; i++) {
    	freq = (float)freq_array(dados, n_veces, i)/n_veces;
        //printf("freq(%d): %.4f\n", i, (float)freq_array(dados, n_veces, i)/n_veces);
        printf("freq(%d)= %.4f : ", i, freq);
		put_stars((int)(freq*100));
    }

    return 0;
}

void genera_dados(int arr[], int size) {
	
	for (int i=0; i<size; i++) {
        arr[i] = 1 + rand() % 6;
    }
}

int freq_array(int arr[], int size, int n) {
    int cont = 0;

    for (int i=0; i<size; i++) {
        if (arr[i] == n) {
            cont++;
        }
    }
    return cont;
}

void put_stars(int n) {
	for (int i=0; i<n; i++) {
		printf("*");
	}
	printf("\n");
}
