#include <stdio.h>
#include <stdlib.h>

int *busca( int *v, int n, int chave );
int *busca_realloc( int *v, int n, int chave );

int main(int argc, char *argv[]) {
	int vet[10] = {2, 3, 5, 11, 2, 3, 44, 2, 99, 100};
	int chave, cap = 10;
	
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &chave);
	
	int *idx = busca_realloc( vet, cap, chave );
	
	if( idx[0] == -1 )
		printf("Nao encontrado!\n");
	else{
		int i;
		printf("Encontrado nos indices:\n");
		for( i = 0 ; idx[i] != -1 ; i++ )
			printf("%d\n", idx[i]);
	}
	
	free(idx);
	
	return 0;
}

int *busca( int *v, int n, int chave ){
	int i, cont = 0;
	for( i = 0 ; i < n ; i++ )
		if( v[i] == chave )
			cont++;
	
	int *p = malloc( sizeof(int) * (cont+1) );
	
	int j = 0;
	for( i = 0 ; i < n ; i++ )
		if( v[i] == chave ){
			p[j] = i;
			j++;
		}
	p[j] = -1;
	
	return p;
}

int *busca_realloc( int *v, int n, int chave ){
	int *p = malloc( sizeof(int) ); // Aloca vetor com cap. 1 (para o -1).

	int i, cont = 1;	
	int j = 0;
	for( i = 0 ; i < n ; i++ )
		if( v[i] == chave ){
			p[j] = i;
			j++;
			cont++;
			p = realloc( p , sizeof(int) * cont );s
		}
	p[j] = -1;
	
	return p;	
}

