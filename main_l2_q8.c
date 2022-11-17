#include <stdio.h>
#include <stdlib.h>

int soma( int x );
int soma_rec( int x );

int main(int argc, char *argv[]) {
	int n;
	printf("Digite o valor para N: ");
	scanf("%d", &n);
	
	int s = soma_rec( n );
	
	printf("Somatorio dos %d termos: %d\n", n, s);
	
	return 0;
}

int soma( int x ){
	int i, s = 0;
	for( i = 1 ; i <= x ; i++ )
		s+= i;
	
	return s;
}

int soma_rec( int x ){
	if( x == 0)
		return 0;
		
	return x + soma_rec( x - 1 );
}


