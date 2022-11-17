#include <stdio.h>
#include <stdlib.h>

void concatena( char str1[], char str2[] );

int main(int argc, char *argv[]) {
	char x[30], y[30];
	printf("Digite uma string: ");
	scanf("%[^\n]s", x);
	printf("Digite outra string: ");
	scanf(" %[^\n]s", y);
	
	printf("X = %s e Y = %s\n", x, y);
	concatena( x , " " );
	concatena( x , y );
	printf("X = %s e Y = %s\n", x, y);
	
	return 0;
}

void concatena( char str1[], char str2[] ){
	int n, i;
	for( n = 0 ; str1[n] != 0 ; n++ )
		;
		
	for( i = 0 ; str2[i] != 0 ; i++ )
		str1[n+i] = str2[i];
	
	str1[n+i] = 0;
}

