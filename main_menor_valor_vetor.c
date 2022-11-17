#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v[10] = {3, 6, 7, 1, 9, -4, 12, 10, 88, 14};
	int i;
	
	//int menor = v[0]; // Assume o 1º valor como o menor
	int i_menor = 0; // Assume que o índice 0 do vetor contém o menor valor
	
	for( i = 1 ; i < 10 ; i++ )
		if( v[i] < v[i_menor] ){ // variável menor
			//menor = v[i];
			i_menor = i;
		}
	
	printf("Menor valor: %d , ", v[i_menor]); // variável menor
	printf("no indice: %d\n", i_menor);
	
	return 0;
}
