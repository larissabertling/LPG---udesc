#include <stdio.h>
#include <stdlib.h>

float harmonica( int x );
float harmonica_rec( int x );

int main(int argc, char *argv[]) {
	int n;
	printf("Digite o valor para N: ");
	scanf("%d", &n);
	
	float s = harmonica_rec( n );
	
	printf("Somatorio dos %d termos: %f\n", n, s);
	
	return 0;
}

float harmonica( int x ){
	int i;
	float s = 0;
	for( i = 1 ; i <= x ; i++ )
		s+= 1.0/i;
	
	return s;
}

float harmonica_rec( int x ){
	if( x == 0)
		return 0;
		
	return 1.0/x + harmonica_rec( x - 1 );
}


