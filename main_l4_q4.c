#include <stdio.h>
#include <stdlib.h>

int eh_palindrome( char str[] );

int main(int argc, char *argv[]) {
	char x[30];
	printf("Digite uma string: ");
	scanf("%[^\n]s", x);
	
	if( eh_palindrome( x ) )
		printf("%s eh palindrome.\n", x);
	else
		printf("%s nao eh palindrome.\n", x);

	return 0;
}

int eh_palindrome( char str[] ){ // S = "arara"
	int n, i;
	for( n = 0 ; str[n] != 0 ; n++ )
		;
	i = 0;
	n--;
	while( i < n ){
		if( str[i] != str[n] )
			return 0; // Achou caracteres diferentes!
		i++;
		n--;
	}
	return 1; // É palíndrome!
}

