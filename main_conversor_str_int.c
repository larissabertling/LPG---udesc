#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char str[20];
	printf("Digite um numero: ");
	scanf("%s", str);
	
	int i, n = strlen( str );
	int pot_10 = 1;
	int numero = 0;
	
	for( i = n-1; i >= 0 ; i-- ){
		int digito = str[i] - 48; // 48 é o código ASCII do '0'.
		numero += digito * pot_10; // numero = numero + digito * pot_10;
		pot_10 *= 10; // pot_10 = pot_10 * 10;
	}
	
	printf("O sucesso do numero digitado eh %d\n", numero + 1 );
	
	return 0;
}

