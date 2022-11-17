#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v[5] = {0};
	int i;
	
	/*
	for( i = 0 ; i < 5 ; i++ ){
		printf("Digite o %do valor: ", i + 1);
		scanf("%d", &v[i]);		
	}*/
	
	for( i = 0 ; i < 10 ; i++ ){
		printf("%d : %d\n", i, v[i]);
	}
	
	printf("\n\n\n");
	
	int v2[10];
	
	for( i = 0 ; i < 10 ; i++ ){
		printf("%d : %d\n", i, v2[i]);
	}
	
	return 0;
}
