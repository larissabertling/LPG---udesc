#include <stdio.h>
#include <stdlib.h>

long long int fibo_rec( int x );

int main(int argc, char *argv[]) {
	int n, i;
	
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	
	for( i = 1 ; i <= n ; i++ )
		printf("%d : %lld\n", i, fibo_rec( i) );
	
	return 0;
}

long long int fibo_rec( int x ){
	if( x == 1 || x == 2 )
		return 1;
	
	return fibo_rec( x-1 ) + fibo_rec( x - 2 );
}

