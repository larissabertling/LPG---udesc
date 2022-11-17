#include <stdio.h>
#include <stdlib.h>

int soma_especial(int n, int k, int x);

int main(int argc, char *argv[]) {
	int valor, divisor, quantidade;
	
	printf("Digite o valor inicial: ");
	scanf("%d", &valor);
	
	printf("Digite o divisor: ");
	scanf("%d", &divisor);
	
	printf("Digite a quantidade: ");
	scanf("%d", &quantidade);
	
	int soma = soma_especial(quantidade, divisor, valor);
	
	printf("Somatorio dos %d valores multiplos de %d a partir de %d = %d\n",
			quantidade, divisor, valor, soma);
	
	return 0;
}

int soma_especial(int n, int k, int x){
	int s = 0, cont = 0;
	while( cont < n ){
		if( x % k == 0 ){
			s = s + x;
			cont++;
		}
		x++;
	}
	return s;
}

