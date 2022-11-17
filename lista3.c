//EXERCÍCIO 1

#include <stdlib.h>

int achacaract( char s[], char c );

int main (int argc, char *argv[]) {
    char string[1000], caracter;

    printf("Digite uma palavra: \n");
    scanf("%s", string);

    printf("Entre com uma letra: \n");
    scanf(" %c", &caracter);

    if( achacaract( string, caracter) )
        printf("%s contem %c\n", string, caracter);
        else
        printf("%s nao contem %c\n", string, caracter);

        return 0;
}

int achacaract( char s[], char c ){
    int i;
    for( i = 0 ; s[i] != 0 ; i++ )
        if( s[i] == c)
        return 1;
    
    return 0;
}


//EXERCÍCIO 2

#include <stdio.h>

int main() {
    char string[1000], caracter;
    int count = 0;

    printf("Digite uma palavra: \n");
    fgets(string, sizeof(string), stdin);

    printf("Entre com uma letra:\n");
    scanf(" %c", &caracter);

    for (int i = 0; string[i] != '\0'; ++i) {
        if (caracter == string[i])
            ++count;
    }

    printf("A letra %c aparece %d vezes!", caracter, count);
    return 0;
}


//EXERCÍCIO 3

#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>

void concat( char string1[], char string2[] ) {
    strcat(string1, string2);
    printf("%s", string1);
    return;
}

//EXERCÍCIO 4

#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "");
	int i, valor = 0;
	char palavra[15], inversa[15];

 	printf("\nDigite uma palavra: ");
 	scanf("%s", palavra);

 	strcpy(inversa, palavra);

 	strrev(inversa);

 	valor = strcmp(palavra, inversa);

 	if (valor == 0)
   		printf("\nA palavra %s é palíndroma\n", palavra);
 	else
   		printf("\nA palavra %s não é palíndroma\n", palavra);

 return 0;
}

//EXERCÍCIO 5

#include<stdio.h>
#include<ctype.h>

int main(){

   char string[50];

   printf("Entre com uma palavra: \n");
   scanf("%[^\n]", string);

   for(int i=0; string[i]!='\0'; i++){
      string[i] = toupper(string[i]);
   }

   printf("Transformada em letra maiuscula fica: %s\n", string);

   return 0;
}


//EXERCÍCIO 6

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){
	
  int palavra;

	printf("Entre com uma palavra: \n");
	scanf("%c", &palavra);
	
	if(isdigit(palavra))
  {
    printf("Digito: %c \n\n",palavra);
  }
  else
    printf("Voce nao digitou um numero! \n");

  return 0;

		
}


//EXERCÍCIO 7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inteiro( char s[] );

int main(int argc, char *argv[]) {
    char string[50];

    printf("Digite uma string: \n");
    scanf("%s", string);

    int i, n = strlen( string );
    int potencia = 1;
    int numero = 0;

    for( i = n-1; i >= 0 ; i-- ){
        int digito = string[i] - '0';
        numero += digito * potencia;
        potencia *= 10;
    }
printf("O numero digitado foi: %d\n", numero);

return 0;
}
int digito( char x ){
    return x >= '0' && x <= '9';
}


//EXERCÍCIO 8

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
	char data[20];
	int i = 0;
	
	int dia, mes, ano;
	
	int tmp = 0;
	
	while (1)
	{
		printf ("DD\\MM\\AAAA\n");
		scanf ("%s", data);
		
		data[2] = '\0';
		data[5] = '\0';
		
	
		dia = MyAtoi (data);
		mes = MyAtoi (&data[3]);
		ano = MyAtoi (&data[6]);
		
		printf ("%d\t%d\t%d\n", dia, mes, ano);
	}

    return (0);
}

//EXERCÍCIO 9

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void trim( char srt[] ){
    srt.trim(srt)
    printf("%s\n ,str")
    return 0;
}


//EXERCÍCIO 10

#include <stdio.h>
#include <stdlib.h>

int tamanho(char v[])
 {
  int i;
  while (v[i]!='\0')
  {i++;}

  return i;

 }

	
int main() {	
  char string1[50],string2[50];
  int j,tam,p=0;
  
  	printf("Digite algo: \n");

   	gets(string1);
  	tam =tamanho(string1);
  	j=tam;
  
	
	while (j>=0 && p<=tam) {

 		string2[p]=string1[j];
 		printf("%c",string2[p]);
 		j--;
		 p++;
}

  return 0;
}


//EXERCÍCIO 11

#include <stdio.h>
#include <stdlib.h>

void remover_caracter( char s[], char c ){
  int i, s, j;
  int strlen(s);

  for( i = 0; i < strlen(s); i++ ){
      if(s[i] == c){
          for( j = i; j < strlen(s); j++ ){
            s[j] = s[j+1];
           } 
           strlen(s)--;
           i--;
          }
    }
}


//EXERCÍCIO 12

#include <stdio.h>
#include <stdlib.h>


void compara( char str1[], char str2[] );{

    int x;
    x = strcmp(str1, str2);
 
   if(x < 0) {
      printf("str1 < str2");
   } else if(x > 0) {
      printf("str1 > str2");
   } else {
      printf("str1 = str2");
   }
   
   return(0);
}



