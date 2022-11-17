//Trabalho LPG 2 -- Alunas: Larissa Bertling e Leticia Capitani
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int *uniao(int *conjunto1, int * conjunto2, int n, int *p_quantidades, int tam1, int tam2);

int *interseccao(int *conjunto1, int * conjunto2, int n, int *p_quantidades, int tam1, int tam2);

int *diferenca(int *conjunto1, int * conjunto2, int n, int *p_quantidades, int tam1, int tam2);

int busca(int *v, int n, int procurado);

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Portuguese");

    int n = 0;
    int *p_quantidades = NULL;
    int **p_conjuntos = NULL;
    int i, j;
    int procurado = 0; 
    int p1, p2; 
    int operações = 0;  

    do{

		  printf("\n\nMenu de opcões:\n1-Criar Novo\n2-União\n3-Intersecção\n4-Diferença\n5-Mostra todos\n6-Sair\n\n\n");

	    printf("Digite uma das opções: \n");
    	scanf("%d", &operações);

    switch (operações){
        case 1:
            printf("\t--Criando novo conjunto--\t\n");
            n++;
            p_quantidades = realloc(p_quantidades, sizeof(int)* n);
            p_conjuntos = realloc(p_conjuntos, sizeof(int*) * n);

            printf("Digite o tamanho do conjunto:\n");
            scanf(" %d", &p_quantidades[n-1]);
            p_conjuntos[n-1] = malloc(sizeof(int) * p_quantidades[n-1]);

            printf("Digite o conjunto:\n");
            for(i = 0 ; i < p_quantidades[n-1]; i++){
                scanf(" %d", &p_conjuntos[n-1][i]);
            }

            break;
        case 2:
             printf("\t--União de conjuntos--\t\n");

            printf("Digite o primeiro conjunto para fazer a uniao:");
            scanf("%i", &p1);
            printf("Digite o segundo conjunto para fazer a uniao:");
            scanf("%i", &p2);

            if(p1 > n-1 && p2 > n-1){
                printf("Um ou mais dos conjuntos digitados nao existe!\n");
            }else{
              n++;
              p_quantidades = realloc(p_quantidades, sizeof(int)* n);
              p_conjuntos = realloc(p_conjuntos, sizeof(int*) * n);
              p_conjuntos[n-1] = uniao(p_conjuntos[p1], p_conjuntos[p2], n, p_quantidades, p_quantidades[p1], p_quantidades[p2]);
            
            }
        
            break;

        case 3:
             printf("\t--Intersecção de conjuntos--\t\n");
            n++;

            printf("Digite o primeiro conjunto para fazer a interseccao:");
            scanf(" %d", &p1);
            printf("Digite o segundo conjunto para fazer a interseccao:");
            scanf(" %d", &p2);

            if(p1 > n-1 || p2 > n-1){
                printf("Um ou mais dos conjuntos digitados nao existe!\n");
            }else{

              p_quantidades = realloc(p_quantidades, sizeof(int)* n);
              p_conjuntos = realloc(p_conjuntos, sizeof(int*) * n);
              p_conjuntos[n-1] = interseccao(p_conjuntos[p1], p_conjuntos[p2], n, p_quantidades, p_quantidades[p1], p_quantidades[p2]);
            
            }
        
            break;

        case 4:
            printf("\t--Diferença de dois conjuntos--\t\n");
            n++;

            printf("Digite o primeiro conjunto para fazer a diferenca:");
            scanf(" %d", &p1);
            printf("Digite o segundo conjunto para fazer a diferenca:");
            scanf(" %d", &p2);

            if(p1 > n-1 || p2 > n-1){
                printf("Um ou mais dos conjuntos digitados nao existe!\n");
            }else{
              p_quantidades = realloc(p_quantidades, sizeof(int)* n);
              p_conjuntos = realloc(p_conjuntos, sizeof(int*) * n);
              p_conjuntos[n-1] = diferenca(p_conjuntos[p1], p_conjuntos[p2], n, p_quantidades, p_quantidades[p1], p_quantidades[p2]);
            }
        
            break;


        case 5:

            printf("\t--Impressão dos conjuntos: --\t\n");
            
          if(p_conjuntos == NULL){
                printf("Não há nenhum conjunto!\n");

            }else{
              printf("Conjuntos foram cadastrados: \n");

            for(int i = 0 ; i < n ; i++){
                printf("[%d]: ", i);

                if(p_quantidades[i] > 0){
                    for(int j = 0 ; j < p_quantidades[i] ; j++){
                        if (j==0){
                           printf("{");
                          }
                printf("%i,", p_conjuntos[i][j]);

                  if(j == (p_quantidades[i] - 1)){
                      printf("}\n");
                  }
            }
                  
              }else{
                printf("{}\n");
              }
            }
         }
    break;
    
  }    
}

while(operações != 6);
printf("--- Saída do programa ---\n");
    return 0;

}


int *uniao(int *conjunto1, int * conjunto2, int n, int *p_quantidades, int tam1, int tam2){

    int *novoconjunto = malloc(sizeof(int)*tam1);
    int tam = tam1, cont = 0;
    int i;
    
    for(i = 0; i < tam1; i++){
		  novoconjunto[i] = conjunto1[i];
    }

    for(i = 0 ; i < tam2; i++){
      if(busca(novoconjunto, tam, conjunto2[i]) == 1){
        tam++;
        novoconjunto = realloc(novoconjunto, sizeof(int) * (tam));
        novoconjunto[tam1 + cont] = conjunto2[i];  
        cont++;
      }
    }

    p_quantidades[n-1] = tam;

    return novoconjunto;
}

int *interseccao(int *conjunto1, int * conjunto2, int n, int *p_quantidades, int tam1, int tam2) {

    int *novoconjunto = NULL;
    int i, j;
    int tam = 0;

    for(i = 0 ; i < tam1 ; i++){
            if(busca(conjunto2, tam2, conjunto1[i]) == 0){
                tam++;
                novoconjunto = realloc(novoconjunto, sizeof(int)*tam);
                novoconjunto[tam-1] = conjunto1[i];
            }
        }

    p_quantidades[n-1] = tam;

    return novoconjunto;
}

int *diferenca(int *conjunto1, int * conjunto2, int n, int *p_quantidades, int tam1, int tam2){

    int *novoconjunto = NULL;
    int j;
    int p = 0;


        for(j = 0 ; j < tam1 ; j++){
          if(busca(conjunto2, tam2, conjunto1[j]) == 1){
              p++;
              novoconjunto = realloc(novoconjunto, sizeof(int)*p);
              novoconjunto[p-1] = conjunto1[j];
          }
        }
    

    p_quantidades[n-1] = p;

    return novoconjunto;
}

int busca( int *v, int n, int procurado ){
	int i;
	
    for( i = 0 ; i < n ; i++ )
		  if( v[i] == procurado )
			  return 0;
	
	return 1;
}
