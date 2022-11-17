#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	char nome[30], sexo;
	
	printf("Digite o nome: ");
	scanf("%[^\n]s", &nome);
	
	printf("Digite o sexo (m ou f): ");
	//fflush( stdin ); // Limpa buffer do teclado (só funciona no Windows).
	scanf(" %c", &sexo);
	
	printf("Voce digitou %c (%d)\n", sexo, sexo);
	
	/*
	if( sexo == 'f' || sexo == 'F' )
		printf("Ilma. Sra. %s\n", nome);
	else
		if( sexo == 'm' )
			printf("Ilmo. Sr. %s\n", nome);
		else
			printf("Entrada incorreta!\n");
	*/
	
	//sexo = tolower(sexo);
	
	if( sexo >= 'A' && sexo <= 'Z' ) // Se for maiúscula...
		sexo += 32; // converte para minúscula.
	
	printf("Apos a conversao ficou %c (%d)\n", sexo, sexo);

	switch( sexo ){
		case 'f':
		//case 'F':
			printf("Ilma. Sra. %s\n", nome);
			break;
			
		case 'm':
		//case 'M':
			printf("Ilmo. Sr. %s\n", nome);
			break;
			
		default:
			printf("Entrada incorreta!\n");
	}

	return 0;
}
