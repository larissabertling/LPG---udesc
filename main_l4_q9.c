#include <stdio.h>
#include <stdlib.h>

void trim( char str[] );

int main(int argc, char *argv[]) {
	char x[30];
	printf("Digite uma string: ");
	scanf("%[^\n]s", x);
	
	printf("Original: %s.\n", x);
	trim( x );
	printf("Modific.: %s.\n", x);

	return 0;
}

void trim( char str[] ){
	int n, i;
	for( n = 0 ; str[n] == ' ' ; n++ )
		; // percorre até o primeiro char diferente de ' ';
	
	for( i = n ; str[i] != 0 ; i++ )
		str[i-n] = str[i]; // Move tudo para a esquerda.
	str[i-n] = 0;
	
	for( n = i-n-1 ; str[n] == ' ' ; n-- )
		; // percorre a partir do final até o primeiro char diferente de ' '.
	str[n+1] = 0; // Faz o 'trim' colocando um '\0'.
}

