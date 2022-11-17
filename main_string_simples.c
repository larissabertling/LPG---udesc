#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char nome[50], x[50];
	
	printf("Digite seu nome: ");
	scanf("%[^\n]s", nome);
	
	printf("Seu nome eh %s (%d caracteres)\n", nome, strlen(nome) );
	printf("A string ocupa %d bytes.\n", sizeof(nome) );
	
	int i;
	printf("Uma variavel int ocupa %d bytes...\n", sizeof(i) );
	printf("Outra forma de 'printar' a string:\n");
	for( i = 0 ; nome[i] != 0 ; i++ )
		printf("%c", nome[i]);
	
	printf("\n");

	strcpy( x, nome );
	
	printf("Copiado para outra string (x): %s\n", x );

	
	return 0;
}
