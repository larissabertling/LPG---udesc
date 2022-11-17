#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor( char *s, int n );
char *repetidor_v2( char *s, int n );
char *repetidor_v3( char *s, int n );

int main(int argc, char *argv[]) {
	char str[30];
	int x;
	printf("Digite uma string: ");
	scanf("%[^\n]s", str);
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	char *str2 = repetidor_v3( str, x );
	
	printf("%s\n", str2);
	
	return 0;
}

char *repetidor( char *s, int n ){
	char *p = malloc( strlen( s )*n + 1 );
	int i;
	p[0] = '\0';
	for( i = 0 ; i < n ; i++ ){
		strcat( p, s );
	}	
	return p;
}

char *repetidor_v2( char *s, int n ){
	int t = strlen( s );
	char *p = malloc( t*n + 1 );
	int i;
	for( i = 0 ; i < n ; i++ ){
		strcpy( p + i*t , s );
	}	
	return p;
}

char *repetidor_v3( char *s, int n ){
	int t = strlen( s );
	char *p = malloc( t*n + 1 );
	int i, j;
	for( i = 0 ; i < n ; i++ ){
		for( j = 0 ; s[j] != '\0' ; j++ ){
			p[j + i*t] = s[j];
		}
	}
	p[t*n] = '\0';	
	return p;
}

