#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatena( char *str1, char *str2 );

int main(int argc, char *argv[]) {
	char s1[100], s2[100];
	printf("Digite algo: ");
	scanf("%[^\n]s", s1);
	printf("Digite algo mais: ");
	scanf(" %[^\n]s", s2);
	
	char *s3 = concatena( s1, s2 );
	
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("S3: %s\n", s3);
	
	free( s3 );
	
	return 0;
}

char *concatena( char *str1, char *str2 ){
	char *p = malloc( strlen(str1) + strlen(str2) + 1 ); // '\0
	strcpy( p, str1 );
	strcpy( p + strlen(str1), str2 );
	return p;
}
