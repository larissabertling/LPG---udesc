#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[]) {
	int m[N][N] = {10, 99, -1, 65,
				   1000, 125, 12, -35,
				   1, 2, 3, 4,
				   -2, -6, -15, -999};
	int i, j;
	
	/*
	for( i = 0; i < N; i++ )
		for( j = 0 ; j < N; j++ ){
			printf("M[%d,%d] = ", i, j);
			scanf("%d", &m[i][j]);
		}
	*/
	
	printf("Dados da matriz:\n");
	for( i = 0; i < N; i++ ){
		for( j = 0 ; j < N; j++ ){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDiagonal principal: ");
	
	/*
	for( i = 0; i < N; i++ ){
		for( j = 0 ; j < N; j++ ){
			if( i == j )
				printf("%d ", m[i][j]);
		}
	}
	*/
	
	for( i = 0; i < N; i++ ){
		printf("%d ", m[i][i]);
	}	
	
	printf("\n");
	
	printf("\nDiagonal secundaria: ");
	
	/*
	for( i = 0; i < N; i++ ){
		for( j = 0 ; j < N; j++ ){
			if( i + j == N - 1  ) // j == N - 1 - i
				printf("%d ", m[i][j]);
		}
	}
	*/
	
	/*
	for( i = 0; i < N; i++ ){
		printf("%d ", m[i][N-1-i]);
	}
	*/
	
	/*
	j = N-1;
	for( i = 0 ; i < N ; i++ ){
		printf("%d ", m[i][j]);
		j--;
	}
	*/
	
	for( i = 0, j = N-1 ; i < N ; i++, j-- ){
		printf("%d ", m[i][j]);
	}
	
	return 0;
}
