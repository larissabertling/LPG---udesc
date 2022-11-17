#include <stdio.h>
#include <stdlib.h>

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );
int busca( int *v, int n, int chave );

int main(int argc, char *argv[]) {
	int a[] = {2, 4, 6, 8, 10, 12, 15, 11 };
	int b[] = {1, 3, 4, 8, 11, 13 };
	int n_a = sizeof(a) / sizeof(int);
	int n_b = sizeof(b) / sizeof(int);
	int i, n_c;
	
	int *c = uniao( a, n_a, b, n_b, &n_c );
	
	for( i = 0 ; i < n_c ; i++ )
		printf("%d ", c[i]);
	printf("\n");
	
	free( c );
	
	return 0;
}

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ){
	int i;
	int *p = malloc( sizeof(int) * n1 );
	*p3 = n1;
	for( i = 0 ; i < n1 ; i++ )
		p[i] = v1[i];
		
	for( i = 0 ; i < n2 ; i++ )
		if( busca( p, *p3, v2[i] ) == -1 ){
			(*p3)++;
			p = realloc( p , sizeof(int) * *p3 );
			p[*p3 - 1] = v2[i];
		}
	return p;
}

int busca( int *v, int n, int chave ){
	int i;
	for( i = 0 ; i < n ; i++ )
		if( v[i] == chave )
			return i;
	
	return -1;
}

