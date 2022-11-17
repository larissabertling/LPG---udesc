#include <stdio.h>
#include <stdlib.h>

int eh_digito( char x );

int main(int argc, char *argv[]) {
	char x[30];
	printf("Digite uma data (dd/mm/aaaa): ");
	scanf("%[^\n]s", x);


	int i;
	for( i = 0 ; x[i] != 0 ; i++ )
		;
	if( i != 10)
		printf("Erro: quantidade de caracteres incorreta!\n");
	else{
		if( eh_digito( x[0] ) && eh_digito( x[1] ) && eh_digito( x[3] )
		 && eh_digito( x[4] ) && eh_digito( x[6] ) && eh_digito( x[7] )
		 && eh_digito( x[8] ) && eh_digito( x[9] ) && x[2] == '/'
		 && x[5] == '/' ){
		 	int dia = (x[0]-48)*10 + x[1]-48;
		 	int mes = (x[3]-48)*10 + x[4]-48;
		 	int ano = (x[6]-48)*1000 + (x[7]-48)*100 + (x[8]-48)*10 + x[9]-48;
		 	
			// Testar limites válidos para dia e mês...
		 	
		 	printf("Dia: %d\nMes: %d\nAno: %d\n", dia, mes, ano);
		 }
		 else
		 	printf("Erro: formato incorreto!\n");
	}
	return 0;
}

int eh_digito( char x ){
	return x >= '0' && x <= '9';
}

