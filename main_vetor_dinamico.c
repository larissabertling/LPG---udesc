#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int *p, n, i;
	printf("Digite a capacidade do vetor: ");
	scanf("%d", &n);
	
	p = malloc( sizeof(int) * n );
	
	for( i = 0 ; i < n ; i++ ){
		printf("%do. valor: ", i + 1);
		scanf("%d", p + i);
	}
	
	printf("Endereco da variavel p: %d\n", &p);
	printf("Endereco da variavel n: %d\n", &n);
	printf("Endereco da variavel i: %d\n", &i);
	
	for( i = 0 ; i < n ; i++ ){
		printf("P[%d] (%d) : %d\n", i, p+i, p[i]);
	}
	
	free( p );

	return 0;
}
