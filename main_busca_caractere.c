#include <stdio.h>
#include <stdlib.h>

int busca_char( char s[], char c );

int main(int argc, char *argv[]) {
	
	char str[50], car;
	
	printf("Digite uma string: ");
	scanf("%s", str);
	
	printf("Digite um caractere: ");
	scanf(" %c", &car);
	
	if( busca_char( str, car ) )
		printf("%s contem %c\n", str, car);
	else
		printf("%s nao contem %c\n", str, car);
	
	return 0;
}

int busca_char( char s[], char c ){
	int i;
	for( i = 0 ; s[i] != 0 ; i++ )
		if( s[i] == c )
			return 1; // Verdadeiro, pois encontrou...
	
	return 0; // Falso, pois não achou...
}

