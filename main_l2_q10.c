#include <stdio.h>
#include <stdlib.h>

float taylor( int x );
float taylor_rec( int i, int den, int x );

int main(int argc, char *argv[]) {
	int n;
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	
	float e = taylor_rec( 0, 1, n ); // parâmetros da função recursiva...
	
	printf("Constante E (serie com %d termos): %f\n", n, e);
	
	return 0;
}

// Versão com limite até 12, pois calcula o fatorial no denominador...
float taylor( int x ){ 
	float s = 0;
	int i;
	int den = 1;
	for( i = 0 ; i <= x ; i++ ){
		s += 1.0 / den;
		den = den * (i+1);
	}
	return s;
}

float taylor_rec( int i, int den, int x ){
	if( i > x )
		return 0;
	
	return 1.0/den + taylor_rec( i+1, den * (i+1), x );
}



// 1/1 + 1/1 + 1/1*1/2 + 1/1*1/2*1/3 + 1/1*1/2*1/3*1/4


