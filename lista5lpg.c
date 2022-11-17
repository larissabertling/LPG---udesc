//QUESTÃO 1

void inc_dec (int*a, int*b);
{
	
	*a = ++a;
	*b = --b;
}


//QUESTÃO 2

#include <stdio.h>

	void troca_valor(float *x, float *y);

   int main(void)
   {
      float a, b, aux;
      
      printf("Entre com duas variaveis: \n");
      scanf("%f", &a);
      scanf("%f", &b);
      printf("%f%f\n", a, b);
      
      
       aux = a;
       a = b;
       b = aux;
     printf("As variaveis trocadas sao: %2f%2f\n", a, b);
      return 0;
  }
  

//QUESTÃO 3

#include <stdio.h>
#include <stdlib.h>

void calcula_circulo(float raio, float *pPerimetro, float *pArea);
 
int main(void)
{
	float raio, pi=3.14, pArea, pPerimetro, diametro;
	
	printf("Digite o valor correspondente ao RAIO = \n"); 
	scanf("%f", &raio);
 
	pArea = pi * raio * raio;
 
 	printf("AREA do circulo eh = %.2f m2 \n", pArea);
 	
 
 	printf("Digite novamente o valor correspondente ao RAIO = \n");
  	scanf("%f", &raio);

 	diametro = 2 * raio;
 	pPerimetro = pi * diametro;
 
	
	printf("Perimetro do circulo eh = %.2f m2 \n", pPerimetro);
 
 
	system("pause");
	return 0;
}

// QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>

void calcula_hora(int totalMinutos, int *ph, int *pm);

int main(int argc, char * argv[]){
	
	int completo, hs, min;
	
	print("Entre com os minutos:\n");
	scanf("%d", &completo);
	
	calcula_hora(completo, &hs, &min);
	
	if (min == 0)
		printf("Sao %d horas /n", hs);
	else {
		printf("Sao %d horas e %d minutos \n", hs, min);
		
	}
	
}

void calcula_hora(int totalMinutos, int *ph, int *pm){
	
	*ph = totalMinutos / 60;
	int resto = totalMinutos % 60;
	*pm = resto;
}


//QUESTÃO 5

#include <stdio.h>
#include <stdlib.h>

void max_min(int*vet[], int*tam, int *pMin, int *pMax){
	
	int i, j, aux; 

  	for(i = 1; i < *tam; i++){ 
    j = i; 

    while((j != 0) && (*vet[j] > *vet[j - 1])) { 
      aux = *vet[j]; 
      *vet[j] = *vet[j - 1]; 
      *vet[j-1] = aux; 
      j--;     
    } 
  }

  *pMax = *vet[*tam];
  *pMin = *vet[0];
}

void procurar(int*vet[], int*tam, int * pMax, int * pMin) {
    if (*tam == 1) { 
        *pMax = *pMin = *vet[0];
    } else { 
        procurar(vet + 1, tam - 1, pMax, pMin);
        if (*vet[0] > * pMax) * pMax = *vet[0];
        if (*vet[0] < * pMin) * pMin = *vet[0];
    }
}
	
int main(){

    int tam, i, pMax, pMin;

    pMax = 0;

    scanf("%d", &tam);

    int vet[tam];

    for(i=0; i<tam; i++){
        scanf("%d", &vet[i]);
    }

    procurar(&vet, &tam, &pMax, &pMin);


    printf("%d %d", pMax, pMin);

    return 0;
}


//QUESTÃO 6

#include <stdio.h>
#include <stdlib.h>

void max_vetor(float*vet[], int*tam, float *pMax, int *pIndice);

int main(int argc, char * argv[]){
	
	float vetor[100], max;
	int indice = 1, i , tamanho;
	
	printf("Informe a quantidade de elementos do vetor: \n");
	scanf ("%d", &tamanho);
	
	printf("Informe todos os elementos do vetor: \n");
		for (i=0; i<tamanho; i++)
		scanf("%f", &vetor[i]);
		
		
	max = *vetor;
	max_vetor(vetor[], tamanho, max, indice);
	
	printf("O maior elemento do vetor eh %f na posicao %d. \n", max, indice);
	
	return 0;
	
}


void max_vetor(float*vet[], int*tam, float *pMax, int *pIndice)
{
	int i;
	*pMax = *vet[];
	for (i = 1; i < *tam; i++){
		if (*(*vet+i) > *pMax){
			*pMax = *(*vet+i);
			*pIndice = i+1;
		}	
	}	
}


//QUESTÃO 7

#include <stdio.h>
#include <stdlib.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);

int main(){
	
	#define TAM_MAX 12

	int i, j, min;
   	int mt[3][4];
   	
   	for (i=0; i<4; i++){
   		for(j=0; j<3; j++)
   			scanf("%d \n", &mt [i][j]);
   		
	   }

	min = min_matriz(mt);
	printf("%d \n", min);
	
	return 0;
	
}
	 void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);{
	 

	
	for(i=0; i<3; i++){
		int * pMin = mat[*pJ][*pI];
		for (j=1; j<4; j++) {
			
			*pJ = j
			*pI = i
			
				if(mat[*pJ][*pI] < * pMin){
					
					*pMin = mat[*pJ][*pI];
					
						
			}
		}
	}
}


