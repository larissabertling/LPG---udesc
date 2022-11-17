#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char str1[50];
	char str2[50], str3[50];
	
	printf("Digite algo: ");
	scanf("%s", str1);

	printf("Digite algo mais: ");
	scanf("%s", str2);
	
	printf("Digite algo mais novamente: ");
	scanf("%s", str3);
	
	printf("S1 = %s, S2 = %s e S3 = %s\n", str1, str2, str3);
	
	strcat( str1, " " );
	strcat( str1, str2 );
	
	printf("S1 = %s, S2 = %s e S3 = %s\n", str1, str2, str3);

	strcat( str1, " " );
	strcat( str1, str3 );
	
	printf("S1 = %s, S2 = %s e S3 = %s\n", str1, str2, str3);
	
	strcat( str2, str2 );
	
	printf("S1 = %s, S2 = %s e S3 = %s\n", str1, str2, str3);
		
	return 0;
}
