#include <stdio.h>
#include <stdlib.h>

int eh_primo( int x );

int main(int argc, char *argv[]) {
	int n, i, cont = 0;
	printf("Digite o limite superior do intervalo: ");
	scanf("%d", &n);
	
	printf("Primos de 1 ateh %d:\n", n);
	for( i = 1; i <= n; i++ )
		if( eh_primo( i ) ){
			cont++;
			printf("%d: %d\n",cont,  i);
		}
 
	return 0;
}

int eh_primo( int x ){
	int i, cont = 0;
	for( i = 1 ; i <= x ; i++ )
		if( x % i == 0 )
			cont++;
	
	return cont == 2;
	/*
	if( cont == 2)
		return 1;
	else
		return 0;
	*/
}
