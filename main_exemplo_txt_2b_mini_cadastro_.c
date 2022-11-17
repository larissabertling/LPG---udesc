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
	
	printf("%d valores carregados do arquivo:\n", n);

	int op;

	do{
		printf("\n\n1-Listar valores\n2-Cadastrar valor\n3-Sair\nEscolha uma opcao: ");
		scanf("%d", &op);
		switch( op ){
			case 1:
				for( i = 0 ; i < n ; i++ )
					printf("%d: %.3f\n", i+1, p[i]);
				break;
			case 2:
				printf("Digite um valor: ");
				scanf("%f", &valor);
				n++;
				p = realloc( p , sizeof(float) * n );
				p[n-1] = valor;
				break;
		}
	}while( op != 3 );
	
	f = fopen("exemplo1.txt", "wt");
	if( f == NULL){
		printf("Erro no arquivo!\n");
		return -1;
	}
	
	for( i = 0 ; i < n ; i++ )
		fprintf(f, "%f\n", p[i]);
	
	fclose( f );
	
	free(p);
	
	return 0;
}
