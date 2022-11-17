#include <stdio.h>
#include <stdlib.h>

struct Produto{
	int codigo;
	char descricao[20];
	float preco;
};

void le_produto( struct Produto *p );
void mostra_produto( struct Produto x );

int main(int argc, char *argv[]) {
	int n, i;
	printf("Quantos produtos? ");
	scanf("%d", &n);
	
	struct Produto *v = malloc( sizeof(struct Produto) * n );
	
	for( i = 0 ; i < n ; i++ ){
		printf("Entrada do produto %d:\n", i+1);
		le_produto( v + i ); // &v[i]
	}
	
	printf("\nLista de produtos:\n");
	for( i = 0 ; i < n ; i++ ){
		printf("Produto %d:\n", i+1);
		mostra_produto( v[i] ); // *(v + i)
	}
	
	float preco;
	printf("Digite um preco: ");
	scanf("%f", &preco);
	
	printf("\nProdutos abaixo de R$%.2f:\n", preco);
	for( i = 0 ; i < n ; i++ ){
		if( v[i].preco < preco ){
			printf("Produto %d:\n", i+1);
			mostra_produto( v[i] ); // *(v + i)
		}
	}	
	
	free( v );
	return 0;
}

void le_produto( struct Produto *p ){
	printf(" Digite o codigo: ");
	scanf("%d", &p->codigo);
	printf(" Digite a descricao: ");
	scanf(" %[^\n]s", p->descricao);
	printf(" Digite o preco: ");
	scanf("%f", &p->preco);
}

void mostra_produto( struct Produto x ){
	printf(" -codigo: %d\n -descricao: %s\n -preco: R$%.2f\n",
			x.codigo, x.descricao, x.preco);
}


