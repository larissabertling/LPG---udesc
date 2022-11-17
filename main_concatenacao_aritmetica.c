#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatena( char *s1, char *s2 );
void copia_str( char *dest, char *orig );

int main(int argc, char *argv[]) {
	char str1[50] = "Alo";
	char str2[20] = "Mundo";
	
	printf("S1 = %s e S2 = %s\n", str1, str2);
	
	concatena( str1, str2 );
	
	printf("S1 = %s e S2 = %s\n", str1, str2);
	
	return 0;
}

void concatena( char *s1, char *s2 ){
	int i, n;
	for( n = 0 ; s1[n] != 0 ; n++ ) // strlen( s1 );
		;
	/*
	for( i = 0 ; s2[i] != 0 ; i++ ){
		s1[n+i] = s2[i];
	}
	s1[n+i] = 0;
	*/
	copia_str( s1 + n , s2 ); // Aritmérica de ponteiros
}

void copia_str( char *dest, char *orig ){
	int i;
	for( i = 0 ; orig[i] != 0 ; i++ ){
		dest[i] = orig[i];
	}
	dest[i] = 0;
}

