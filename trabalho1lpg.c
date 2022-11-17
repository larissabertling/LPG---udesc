//Trabalho 1 LPG

#include <stdio.h>
#include <stdlib.h>

void frente(int i, int d);
void tras(int v[], int n, int i, int d);
void imprime(int v[], int n, int i);

int main(){
	int n, v[200000], m, posicao,  num_operacao, dado, pos_final;

	printf("Entre com a quantidade de posicoes da memoria:\n");
    scanf("%d", &n);

	printf("Quantas operacoes serao realizadas?\n");
  	scanf("%d", &m);


			while(m > 0){
				printf("Escolha qual operacao voce deseja: \n");
				scanf("%i", &num_operacao);

				if (num_operacao == 1 ){
					printf("A operacao escolhida foi: frente. Agora digite a posicao e o dado: \n");
					scanf("%d %d", &posicao, &dado);
					pos_final = frente(posicao, dado);
				}
				else if (num_operacao == 2) {
					printf("A operacao escolhida foi: tras. Agora digite a posicao e o dado: \n");
					scanf("%d %d", &posicao, &dado);
					tras(v, n, posicao, dado);
				}
				else if (num_operacao == 3) {
					printf("A operacao escolhida foi: imprime. Agora digite a posicao: \n");
					scanf("%d", &posicao);
					imprime(v, n, posicao);
				}
				else{
					printf("Operacao escolhida e inexistente. \n");


				}
				m--;

			}
}


void frente(int posicao, int v){
	int vetor[15]={0};
	int aux = posicao -1;
	int limite = posicao -1;
	int j, a;
	n = n- 1;
	printf("%i\n", v );
	for(j = aux; j < 16; j++){
			if (aux<n && v>0){
				vetor[j]=vetor[j] + v;
				v--;
				aux++;
			}
			else{
				break;
			}

	}
	for(a=0; a<16; a++){
		printf("%d\n", vetor[a]);
	}
	return aux;
}

	if(v > aux){
	  		v[j] = v[j] + v - aux;
	  	  aux++;
	 	}
	 	else{
	 		break;
	}
 }


	void tras(int v[], int n, int i, int d){
  		int aux = 0;
  		for(int j = i - 1; j >= 0; j--){
   		 if(d > aux){
     		 v[j] = v[j] + d - aux;
     		 aux++;
    }else{
      break;
    }
  }
}


	void imprime(int v[], int n, int i){
  	while(i > n || i < 0){
   		 printf("\n A memoria nao possui essa posicao. Tente novamente: \n");
   		 scanf("%d", &i);
  }

  	printf("\n O dado armazenado na posicao &d sera %d. \n", i, v[i-1]);

}
