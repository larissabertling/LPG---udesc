// QUESTÃO 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float *clone( float *v, int n );
int main(int argc, float *argv[]) {
	float v;
	int n;
	printf("Insira seu vetor:\n");
	scanf("%f",&v);
	printf("Insira a capacidade de seu vetor:\n");
	scanf("%d",&n);
	

//QUESTÃO 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * repetidor ( char * s, int n );
int main(int argc, char *argv[]) {
  char s;
  int n;
  printf ("Insira uma string\n");
  scanf ("%s", &s);
  printf ("Insira o numero de repeticoes desejado: \n");
  scanf ("%d", &n);

  char * resultado = repetidor (&s,n);
  puts(resultado);
  free(resultado);
  return 0;
}

char * repetidor ( char * s, int n ) {
  size_t rep = strlen(s);
  char * destino = malloc(n*rep+1);
 
  int i; char * x;
  for ( i=0, x = destino; i < n; ++i, x += rep ) {
    memcpy(x, s, rep);
  }
  *x = '\0';
  return destino;
}

//QUESTÃO 3

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int i, qtd;
  
  float * num;
  float soma, media;
  soma = 0;

  printf("Quantidade de numeros no vetor: \n");
  scanf("%d", &qtd);

  num = malloc(qtd * sizeof(float));

  printf("Entre com o vetor:\n");

  for(i = 0; i < qtd; i++){
    scanf("%f", &num[i]);
    printf("%f\n", num[i]);
    soma = soma + num[i];
  }
  printf("%f\n", soma);
  media = soma / qtd;
  printf("A media dos numeros do vetor é:  %f\n", media);



//QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *v, *vp, *vs, tam, i, cont1 = 1, cont2 = 1;

  vp = malloc(sizeof(int)*cont1);
  vs = malloc(sizeof(int)*cont2);

  printf("Entre com o tamanho do vetor:\n ");
  scanf("%i", &tam);

  v = malloc(sizeof(float)*tam);

  for(i = 0; i < tam; i++){
    printf("p[%i]: ", i);
    scanf("%i", &v[i]);
    if(v[i] > 0){
      vp = realloc(vp, sizeof(int)*cont1);
      vp[cont1-1] = v[i];
      cont1++;
    }else if(v[i] < 0){
      vs = realloc(vs, sizeof(int)*cont2);
      vs[cont2-1] = v[i];
      cont2++;
    }
  }
  
  printf("Vetor Inicial :\n");

  for(i = 0; i < tam; i++){
    printf("p[%i]: %i\n", i, v[i]);
  }

  printf("\nVetor de Positivos:\n\n");

  for(i = 0; i < cont1-1; i++){
    printf("p[%i]: %i\n", i, vp[i]);
  }

  printf("\nVetor de Negativos:\n\n");

  for(i = 0; i < cont2-1; i++){
    printf("p[%i]: %i\n", i, vs[i]);
  }

  free(v);
  free(vp);
  free(vs);
  return 0;
}

// QUESTÃO 5

