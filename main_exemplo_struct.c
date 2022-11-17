#include <stdio.h>
#include <stdlib.h>

struct Produto{
	int codigo;
	char descricao[20];
	float preco;
};

int main(int argc, char *argv[]) {
	struct Produto x, y;
	
	printf("Digite o codigo: ");
	scanf("%d", &x.codigo);
	printf("Digite a descricao: ");
	scanf(" %[^\n]s", x.descricao);
	printf("Digite o preco: ");
	scanf("%f", &x.preco);
	
	printf("Codigo: %d\nDescricao: %s\nPreco: R$%.2f\n",
			x.codigo, x.descricao, x.preco);
			
	y = x; // É possível fazer a atribuição direta entre estruturas...
	
	printf("Codigo: %d\nDescricao: %s\nPreco: R$%.2f\n",
			y.codigo, y.descricao, y.preco);
	
	return 0;
}
