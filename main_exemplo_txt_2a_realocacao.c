#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float valor, *p = NULL;
	int i, n = 0;
	
	FILE *f = fopen("exemplo1.txt", "rt");
	if( f == NULL){
		printf("Erro no arquivo!\n");
		return -1;
	}
	
	int x = fscanf(f, "%f", &valor);
	
	while( x == 1 ){
		n++;
		p = realloc( p , sizeof(float) * n );
		p[n-1] = valor;
		
		x = fscanf(f, "%f", &valor);
	}
	
	fclose(f);
	
	printf("Valores carregados do arquivo:\n");
	for( i = 0 ; i < n ; i++ )
		printf("%.3f\n", p[i]);
	
	free(p);
	
	return 0;
}
