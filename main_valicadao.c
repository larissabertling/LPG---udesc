#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float x;
	/*
	printf("Digite um valor de 0 a 10: ");
	scanf("%f", &x);
	
	while( x < 0 || x > 10 ){
		printf("Entrada Incorreta!! Digite um valor de 0 a 10: ");
		scanf("%f", &x);
	}
	*/

	int cont = 0;
	
	do{
		cont++;
		if( cont != 1 ) // N�o executa na 1a. itera��o
			printf("Entrada Incorreta!! ");

		printf("Digite um valor de 0 a 10: ");
		scanf("%f", &x);
	}while( x < 0 || x > 10 );
	
	
	printf("\n\nAgora SIM!! (%d tentativas)\n", cont);
	
	return 0;
}
