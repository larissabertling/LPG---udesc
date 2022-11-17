#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eh_primo( int x );
int eh_primo_v2( int x );

int main(int argc, char *argv[]) {
	int n, k;
	
	printf("Digite o valor de N: ");
	scanf("%d", &n);

	printf("Digite o valor de K: ");
	scanf("%d", &k);
	
	int cont = 0;
	
	while( cont < n ){
		//printf("[processando o valor %d....]\n", k);
		if( eh_primo_v2( k ) ){
			cont++;
			printf("%d: %d\n", cont, k);
		}
		k++;
	}
	
	return 0;
}

int eh_primo( int x ){
	int i, cont = 0;
	for( i = 1; i <= x ; i++ )
		if( x % i == 0 )
			cont++;
	
	return cont == 2;
}

int eh_primo_v2( int x ){
	int i, cont = 0;
	float r = sqrt( x );
	for( i = 2; i <= r ; i++ )
		if( x % i == 0 )
			return 0; // Não é primo!
	
	return 1; // É primo!
}




