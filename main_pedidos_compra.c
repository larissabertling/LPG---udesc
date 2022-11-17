#include <stdio.h>
#include <stdlib.h>


struct Data{
	int dia, mes, ano;
};

struct Item{
	char descricao[20];
	float preco;
	int quantidade;
};

struct Pedido{
	int codigo;
	struct Data data_compra;
	float total;
	int num_itens;
	struct Item *itens;
};

void le_data( struct Data *p );
void mostra_data( struct Data x );
void le_pedido( struct Pedido *p );
void mostra_pedido( struct Pedido x );

int main(int argc, char *argv[]) {
	int n, i;
	printf("Quantos pedidos? ");
	scanf("%d", &n);
	
	struct Pedido *v = malloc( sizeof(struct Pedido) * n );
	
	for( i = 0 ; i < n ; i++ ){
		printf("Pedido %d:\n", i+1);
		le_pedido( v + i ); // &v[i]
	}
	
	printf("\nPedidos Cadastrados:\n");
	for( i = 0 ; i < n ; i++ ){
		printf("Pedido %d:\n", i+1);
		mostra_pedido( v[i] ); // *(v + i)
	}
	
	for( i = 0 ; i < n ; i++ )
		free( v[i].itens );
	free( v );

	return 0;
}

void le_data( struct Data *p ){
	printf("Digite o dia: ");
	scanf("%d", &p->dia);
	printf("Digite o mes: ");
	scanf("%d", &p->mes);
	printf("Digite o ano: ");
	scanf("%d", &p->ano);
}

void mostra_data( struct Data x ){
	printf("%2d/%2d/%4d\n", x.dia, x.mes, x.ano);
}

void le_pedido( struct Pedido *p ){
	printf("Digite o codigo: ");
	scanf("%d", &p->codigo);
	printf("Digite a data da compra: ");
	le_data( &p->data_compra );
	printf("Digite a quantidade de itens: ");
	scanf("%d", &p->num_itens);
	p->itens = malloc( sizeof(struct Item) * p->num_itens );
	p->total = 0;
	int i;
	for( i = 0 ; i < p->num_itens ; i++ ){
		printf("Item %d:\n", i+1);
		printf(" - Digite a descricao do produto: ");
		scanf(" %[^\n]s", p->itens[i].descricao);
		printf(" - Digite o preco: ");
		scanf("%f", &p->itens[i].preco);
		printf(" - Digite a quantidade: ");
		scanf("%d", &p->itens[i].quantidade);
		p->total += p->itens[i].preco*p->itens[i].quantidade;
	}
}

void mostra_pedido( struct Pedido x ){
	printf("Codigo: %d\n", x.codigo);
	printf("Data da compra: ");
	mostra_data( x.data_compra );
	printf("Valor total: R$%.2f\n", x.total);
	printf("Quantidade de itens: %d\n", x.num_itens);
	int i;
	for( i = 0 ; i < x.num_itens ; i++ ){
		printf("Item %d:\n", i+1);
		printf(" - Descricao: %s\n", x.itens[i].descricao);
		printf(" - Preco: R$%.2f\n", x.itens[i].preco);
		printf(" - Quantidade: %d\n", x.itens[i].quantidade);
	}
}


