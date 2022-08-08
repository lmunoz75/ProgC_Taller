	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <time.h>
	
	#define ROW 3
	#define COL 3
	
	int main()
	{
	    // Arrays en dos dimensiones
	    int numeros[ROW][COL]= {1, 2, 3, 4,
	                            5, 6, 7, 8,
	                            9, 10, 11, 12};
	
	
		printf("%3d", numeros[0][0]);
		printf("%3d", numeros[0][1]);
		printf("%3d", numeros[0][2]);
		printf("%3d", numeros[0][3]);	
		printf("\n");
	
		printf("%3d", numeros[1][0]);
		printf("%3d", numeros[1][1]);
		printf("%3d", numeros[1][2]);
		printf("%3d", numeros[1][3]);	
		printf("\n");
	
		printf("%3d", numeros[2][0]);
		printf("%3d", numeros[2][1]);
		printf("%3d", numeros[2][2]);
		printf("%3d", numeros[2][3]);	
		printf("\n");
	
	/*
	    for (int i=0; i<ROW; i++) {
	        for (int j=0; j<COL; j++) {
	            printf("%d ", numeros[i][j]);
	        }
	        printf("\n");
	    }
	    printf("\n");
	*/
	    return 0;
	}
