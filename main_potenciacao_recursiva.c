#include <stdio.h>
#include <stdlib.h>

float potencia_rec( float b, int e );

int main(int argc, char *argv[]) {
	float base;
	int expo;
	
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	
	printf("Digite o valor do expoente: ");
	scanf("%d", &expo);
	
	float p = potencia_rec( base, expo );
	
	printf("%f elevado a %d = %f\n", base, expo, p);
	
	return 0;
}

float potencia_rec( float b, int e ){
	if( e == 0 )
		return 1;
	
	if( e < 0 )
		return potencia_rec( 1/b , -e );
	
	return b * potencia_rec( b, e-1 );
}

