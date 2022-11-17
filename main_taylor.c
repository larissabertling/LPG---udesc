#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float x;
	int n, i, j;
	printf("Digite x: ");
	scanf("%f", &x);
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	
	float e_x = 0;
	
	for( i = 0; i <= n ; i ++){
		float termo = 1;
		for( j = 1 ; j <= i ; j ++ ){
			termo *= x / j;
		}
		e_x += termo;
	}
	
	printf("e elevado a %.3f (%d termos) = %f\n", x, n, e_x);
	
	return 0;
}
