#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int main(int argc, char *argv[]) {
	char s1[MAX], s2[MAX];
	
	printf("Digite algo: ");
	scanf("%[^\n]s", s1);
	
	printf("Digite outra coisa: ");
	scanf(" %[^\n]s", s2);
	
	int n = strcmp( s1, s2 );
	
	if( n == 0 )
		printf("%s == %s\n", s1, s2);
	else
		if(n > 0)
			printf("%s > %s\n", s1, s2);
		else
			printf("%s < %s\n", s1, s2);
	
	return 0;
}
