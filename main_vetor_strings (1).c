#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *aloca_string( char *msg );

int main(int argc, char *argv[]) {
	
	char **lista = NULL;
	int i, n = 0;
	
	int opcao;
	do{
		printf("\n\n-----------------\n");
		printf("1-Digitar uma string\n2-Mostrar Strings\n3-Sair\n");
		printf("-----------------\n");
		scanf("%d", &opcao);
		switch( opcao ){
			case 1:
				n++;
				lista = realloc( lista, sizeof(char*) * n );
				lista[n-1] = aloca_string("Digite alguma coisa: ");;
				break;
			
			case 2:
				printf("\n\nStrings cadastradas:\n");
				for( i = 0 ; i < n ; i++ ){
					printf("[%d] %s\n", i, lista[i]);
				}
				break;
		}
		
	}while( opcao != 3 );
	
	for( i = 0 ; i < n ; i++ )
		free( lista[i] );
	free( lista );
	
	return 0;
}

char *aloca_string( char *msg ){
	printf("%s", msg);
	
	char buffer[101];
	scanf(" %[^\n]s", buffer);
	
	char *p = malloc( strlen(buffer) + 1 );
	strcpy( p, buffer );
	return p;
}
