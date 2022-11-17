#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float **m;
	int lin, col, i, j;
	
	printf("Digite o numero de linhas: ");
	scanf("%d", &lin);
	printf("Digite o numero de colunas: ");
	scanf("%d", &col);
	
	m = malloc( sizeof(float*) * lin );
	for( i = 0 ; i < lin ; i++ ){
		m[i] = malloc( sizeof(float) * col );
		for( j = 0 ; j < col ; j++ ){
			printf("M[%d,%d]: ", i, j );
			scanf("%f", &m[i][j]);
		}
	}
	
	for( i = 0 ; i < lin ; i++ ){
		for( j = 0 ; j < col ; j++ )
			printf("%4.1f ", m[i][j]);
		printf("\n");
	}
	
	for( i = 0 ; i < lin ; i++ )
		free( m[i] );	
	free( m );
	
	return 0;
}
