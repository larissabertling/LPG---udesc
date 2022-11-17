#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float valor;
	int cont = 0;
	
	FILE *f = fopen("exemplo1.txt", "rt");
	if( f == NULL){
		printf("Erro no arquivo!\n");
		return -1;
	}
	
	int x = fscanf(f, "%f", &valor);
	
	while( x == 1 ){
		cont++;
		printf("%dº valor: %.3f\n", cont, valor);
				
		x = fscanf(f, "%f", &valor);
	}
	
	fclose(f);
	
	printf("Foram lidos %d valores.\n", cont);
	
	return 0;
}
