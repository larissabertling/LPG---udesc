#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v[10] = {3, 6, 7, 1, 9, -4, 12, 10, 88, 14};
	int i;
	
	//int menor = v[0]; // Assume o 1� valor como o menor
	int i_menor = 0; // Assume que o �ndice 0 do vetor cont�m o menor valor
	
	for( i = 1 ; i < 10 ; i++ )
		if( v[i] < v[i_menor] ){ // vari�vel menor
			//menor = v[i];
			i_menor = i;
		}
	
	printf("Menor valor: %d , ", v[i_menor]); // vari�vel menor
	printf("no indice: %d\n", i_menor);
	
	return 0;
}
