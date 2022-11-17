#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto{
	int codigo;
	char descricao[20];
	float preco;
};

void le_produto( struct Produto *p );
void mostra_produto( struct Produto x );
int busca( struct Produto *v, int n, int codigo );
void ordena_vetor( struct Produto *v, int n );
int compara_produto( struct Produto x, struct Produto y );
struct Produto *carrega_arquivo( char *nome_arq, int *p );
void salva_arquivo( struct Produto *vet, int n, char *nome_arq );

int main(int argc, char *argv[]) {
	
	int i, n;
	struct Produto *v = carrega_arquivo( "produtos.txt", &n );
	
	int opcao, cod;
	do{
		printf("\n1-Cadastrar produto\n2-Buscar produto\n");
		printf("3-Listar produtos\n4-Sair\nDigite a opcao: ");
		scanf("%d", &opcao);
		
		switch( opcao ){
			
			case 1:
				n++;
				v = realloc( v, sizeof(struct Produto)*n );
				le_produto( &v[n-1] );
				ordena_vetor( v, n );
				system("PAUSE");
				system("CLS");
				break;
				
			case 2:
				printf("Digite um codigo: ");
				scanf("%d", &cod);
	
				int id = busca( v, n, cod );
				if( id == -1 )
					printf("Produto nao encontrado!\n");
				else
					mostra_produto( v[id] );
				
				system("PAUSE");
				system("CLS");
				break;
			
			case 3:
				if( n == 0 )
					printf("Nao ha produtos cadastrados!\n");
				else{
					printf("\nLista de produtos:\n");
					for( i = 0 ; i < n ; i++ ){
						printf("Produto %d:\n", i+1);
						mostra_produto( v[i] ); // *(v + i)
					}
				}
				system("PAUSE");
				system("CLS");
				break;
		}
		
	}while( opcao != 4 );
	
	salva_arquivo( v, n, "produtos.txt" );
	
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

int busca( struct Produto *v, int n, int codigo ){
	int i;
	for( i = 0 ; i < n ; i++ )
		if( v[i].codigo == codigo )
			return i; // Retorna indice i
			
	return -1; // Retorna -1, ou seja, não encontrou!
}

void ordena_vetor( struct Produto *v, int n ){
	int i;
	for( i = 0 ; i < n-1 ; i++ ){
		int i_menor = i, j;
		for( j = i+1 ; j < n ; j++ )
			if( compara_produto( v[j] , v[i_menor] ) < 0 )
				i_menor = j;
		
		struct Produto aux = v[i];
		v[i] = v[i_menor];
		v[i_menor] = aux;
	}
}

int compara_produto( struct Produto x, struct Produto y ){
	return x.codigo - y.codigo;
	//return strcmp( x.descricao, y.descricao );
}

struct Produto *carrega_arquivo( char *nome_arq, int *p ){
	FILE *f = fopen( nome_arq, "rt");
	if( f == NULL ){
		printf("Arquivo de cadastro nao encontrado!\n");
		*p = 0;
		return NULL;
	}
	char temp[101];
	fgets( temp, 101, f );
	sscanf( temp, "%d", p );

	struct Produto *vet = malloc( sizeof(struct Produto) * *p );
	
	int i;
	for( i = 0 ; i < *p ; i++ ){
		fgets( temp, 101, f );
		sscanf( temp, "%d", &vet[i].codigo);
		fgets( temp, 101, f );
		sscanf( temp, " %[^\n]s", vet[i].descricao );
		fgets( temp, 101, f );
		sscanf( temp, "%f", &vet[i].preco);
	}
	fclose( f );
	printf("Foram carregados %d produtos.\n", *p);
	return vet;
}

void salva_arquivo( struct Produto *vet, int n, char *nome_arq ){
	FILE *f = fopen( nome_arq, "wt");
	if( f == NULL ){
		printf("Erro no arquivo de cadastro!\n");
		return;
	}
	fprintf( f, "%d\n", n );
	int i;
	for( i = 0 ; i < n ; i++ ){
		fprintf( f, "%d\n", vet[i].codigo);
		fprintf( f, "%s\n", vet[i].descricao);
		fprintf( f, "%.2f\n", vet[i].preco);
	}
	fclose( f );
	printf("%d registros salvos em %s.\n", n, nome_arq );
}


