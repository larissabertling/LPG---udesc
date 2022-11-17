#include <stdio.h>
#include <stdlib.h>

int verifica_inteiro( char s[] ); // Retorna a posição do erro, ou -1, caso esteja certo.
int eh_digito( char x );

int main(int argc, char *argv[]) {
	char str[20];
	
	printf("Digite uma sequencia de digitos: ");
	scanf("%s", str);
	
	int x = verifica_inteiro( str );
	if( x == -1 )
		printf("Numero verificado com sucesso!\n");
	else
		printf("Erro: caractere no indice %d nao eh digito!\n", x);
	
	return 0;
}

int verifica_inteiro( char s[] ){
	int i;
	for( i = 0 ; s[i] != 0 ; i++ )
		if( ! eh_digito( s[i] ) )
			return i; // Retorna índice onde o erro se encontra.
	
	return -1; // Indica que está tudo certo.
}

int eh_digito( char x ){
	return x >= '0' && x <= '9';
}

