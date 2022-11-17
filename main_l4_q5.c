#include <stdio.h>
#include <stdlib.h>

void converte_maiuscula( char str[] );

int main(int argc, char *argv[]) {
	char x[30];
	printf("Digite uma string: ");
	scanf("%[^\n]s", x);
	
	printf("String original: %s\n", x);
	converte_maiuscula( x );
	printf("String convertida: %s\n", x);
		
	/*
	int i;
	for( i = 0 ; x[i] != 0 ; i++ )
		printf("[%d] : %c (%d)\n", i, x[i], x[i]);
	
	char c = 'a';
	printf("C= %c\n", c);
	printf("D= %d\n", c);

	int y = 97;
	printf("%d ... %c\n", y, y);

	*/
	
	return 0;
}

void converte_maiuscula( char str[] ){
	int i;
	for( i = 0 ; str[i] != 0 ; i++ )
		if( str[i] >= 'a' && str[i] <= 'z' )
			str[i] = str[i] - 32; // 'a' --> 97 e 'A' --> 65
}

