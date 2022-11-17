#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if( argc != 3 ){
		printf("Formato: nome_programa valor1 valor2\n");
		return -1;
	}	
	
	int x, y;
	if( sscanf( argv[1], "%d", &x ) == 0 ){
		printf("Erro: %s nao eh um numero!\n", argv[1]);
		return -2;
	}
	
	if( sscanf( argv[2], "%d", &y ) == 0 ){
		printf("Erro: %s nao eh um numero!\n", argv[2]);
		return -2;
	}
	
	printf("%d + %d = %d\n", x, y, x + y );
		
	return 0;
}
