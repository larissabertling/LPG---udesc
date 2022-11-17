// EXERCICIO 1 - COORDENADAS DE UM PONTO

#include <stdio.h>
#include <math.h>

int main() {

	float x, y;

		printf("Coloque o valor de x: \n");

		scanf("%f",&x);

		printf("Coloque o valor de y: \n");

		scanf("%f",&y); {
			
			
	if((x == 0 ) & (y == 0)) {
		
		printf("Origem\n");
	}
	
	else if((x == 0) & (y != 0)) {
		
		printf("Sob o eixo Y\n");
	}
	
	else if((x != 0) & (y == 0)) {
		
		printf("Sob o eixo X\n");
		
	}

	else if ((x > 0) & (y > 0)) {

		printf("Primeiro quadrante\n");

	}

	else if ((x < 0) & (y > 0)) {

		printf("Segundo quadrante\n");
		
	}

	else if ((x < 0) & (y < 0)) {
		
		
		printf("Terceiro quadrante\n");

	}

	else ((x > 0) & (y < 0)) ;{
		
		printf("Quarto quadrante\n");

	}

	
	return (0);
}
}



// EXERCICIO 2- SORT

#include <stdio.h>

 int main()
  {
    int a, b, c;
    printf ("Digite o primeiro numero inteiro: \n");
    scanf("%d", &a);
    printf ("Digite o segundo numero inteiro: \n");
    scanf("%d", &b);
    printf ("Digite o terceiro numero inteiro: \n");
    scanf("%d", &c);

    if (a < b)                                           
          if (b < c)
            printf("%d %d %d\n", a, b, c) && printf ("\n%d %d %d\n", a,b,c);    
           else if (a < c) 
            printf("%d %d %d\n", a, c, b) && printf ("\n%d %d %d\n",a,b,c); 
           else 
            printf("%d %d %d\n", c, a, b) && printf ("\n%d %d %d\n",a,b,c);         
     else                                                 
       if (b < c)                                      
          if (a < c) 
            printf("%d %d %d\n", b, a, c) && printf ("\n%d %d %d\n",a,b,c);  
            else printf("%d %d %d\n", b, c, a) && printf ("\n%d %d %d\n",a,b,c);     
          else 
            printf("%d %d %d\n", c ,b, a) && printf ("\n%d %d %d\n",a,b,c);             
     return 0; 
  }



// EXERCICIO 3- MULTIPLOS

#include <stdio.h>


int main() {
	
	int a, b;
 
    printf ("Entre com um numero\n");
    scanf("%d",&a);
    printf ("Entre com outro numero\n");
    scanf("%d",&b);
    
    
    if (a%b == 0||b%a == 0){
        printf("Sao multiplos\n");
    }
    else{
        printf("Nao sao multiplos\n");
    }
    return 0;
		
}



// EXERCICIO 4- TIPOS DE TRIANGULOS

#include <stdio.h>

int main() {
	
 float a, b, c, x; 
 	printf("Entre com 3 pontos: \n");
 	scanf("%f %f %f", &a, &b, &c);
 
  	if (a < b){ x = a; a = b; b = x; } 
  	if (b < c){ x = b; b = c; c = x; } 
  
  {
  	if (a >= b + c) 
		printf("NAO FORMA TRIANGULO\n");
  
	else if (a * a == b * b + c * c)
    	printf("TRIANGULO RETANGULO\n");
      
	else if (a * a > b * b + c * c)
  		printf("TRIANGULO OBTUSANGULO\n");
  		
   else if (a * a < b * b + c * c) 
   		printf("TRIANGULO ACUTANGULO\n");
   		
  	else if (a == b && b == c) 
    	printf("TRIANGULO EQUILATERO\n");
    	
    else (a == b || b == c)
		;printf("TRIANGULO ISOSCELES\n");

    return 0;
}
}


// EXERCICIO 5- TEMPO DE JOGO

#include <stdio.h>
#include <stdlib.h>

int main() {

	int inicio, termino, duracao;

	printf("Digite a hora do inicio da Partida:\n");
	scanf("%i",&inicio);
	
	printf("Digite a hora do termino da Partida:\n");
	scanf("%i",&termino); {


	if (inicio > termino)
		duracao = (24- inicio) + termino;
	else if (inicio < termino) 
		duracao = termino - inicio;
	else if (inicio == termino)
		duracao = 24;
  } 
		
    printf("A PARTIDA DUROU %d TEMPO\n",duracao);

    return 0;
}



// EXERCICIO 6 - PARES

#include <stdio.h>

int main () {
	
	int i;
    for (i=2; i<=100; i+=2) {
        printf ("Numero par: %d\n",i);
    }
}    


// EXERCICIO 7 - P, I, + , -

#include <stdio.h>

int main (){

	int n, i;

	int par=0, impar=0, positivo=0, negativo=0;

	for(i=0; i<5; i++){
		
		printf("Entre com um valor inteiro: \n");

 		scanf("%d", &n);

	 if((n%2==0))

 		 par++;

 	else if((n%2!=0))

  		impar++;

	 if((n>0))

  		positivo++;

 	else if((n<0))

  		negativo++;

}

	printf("%d valor(es) par(es)\n", par);

	printf("%d valor(es) impar(es)\n", impar);

	printf("%d valor(es) positivo(s)\n", positivo);

	printf("%d valor(es) negativo(s)\n", negativo);

return 0;

}


// EXERCICIO 8 - TABUADA

#include <stdio.h>

int main(){
	
    int x=0, i, calc;
    printf ("Entre com um inteiro para que sua tabuada seja aplicada: \n");
    scanf("%d",&x);

    for (i=1;i<=10;i++){
    calc = i*x;
    printf ("%dx%d = %d\n",i,x,calc);
    }
   return 0;
}



// EXERCICIO 9 - MEDIAS

#include<stdio.h>

int main(){
	
    float n1, n2, n3, media, total ;
    int cont, num;

	printf("Entre com um numero inteiro para contar os casos: \n");
    scanf("%d",&num);
    
    
    for(cont=1;cont<=num;cont++){
    	
    	printf("Entre com os tres valores: \n");
        scanf("%f%f%f",&n1,&n2,&n3);
        total = n1*2.0+n2*3.0+n3*5.0;
        media = total/10.0;
    
    }
    
     printf("Sua media foi: %.1f\n", media);
    return 0;
}




// EXERCICIO 10 - IMPARES I

#include <stdio.h>

int main () {
	
	int i, x, y, z=0, menor, maior;
	
	printf("Entre com o primeiro inteiro:\n");
	scanf ("%d", &x);
	printf("Entre com o segundo inteiro:\n");
	scanf ("%d", &y);
	
	
 	if(x < y){
    ((menor = x) && (maior = y));}
    
    else{
    ((maior = x) && (menor = y));}
    
	for ( i = (menor + 1); i < maior; ++i){
        if(i % 2 == 1 || i % 2 == -1){
            z = i + z;
        }
    }
 		printf ("A soma dos numeros impares entre eles e: %d\n",z);
   return 0;
}	



// EXERCICIO 11 - IMPARES II


#include <stdio.h>

int main(){

	int a,b,qntd,k,i;
	int cont=0,soma=0;
	
	printf("Entre com o numero de casos:\n");
	scanf("%d", &qntd); 
		while (cont != qntd){ 
			printf("Entre com os dois inteiros:\n");
			scanf("%d %d", &a, &b);

	if (a == b){ 
		soma = 0; 
		printf("A soma dos impares e de : %d\n", soma);}

	k = a%2; 
	if (a < b){ 
	if (k == 0){ 

	for(i=a+1;i<b;i=i+2){ 
		soma=soma + i; 
	}

	printf("%d\n", soma);}
	else{ 
  		for(i = a+2; i < b; i= i+2){ 
    		soma = soma + i; }

	printf("A soma dos impares e de: %d\n", soma);} 
		soma = 0; }

	k = b%2; 
	if (b < a){ 
  		if (k == 0){ 
    	for(i = b+1; i < a; i = i + 2){ 
      soma = soma + i;
	}
	
	printf("A soma dos impares e de: %d\n", soma);
		soma = 0;
	}
	
	else{ 
  		for(i = b+2; i < b; i= i+2){ 
    		soma = soma + i; }

	printf("A soma dos impares e de: %d\n", soma);} 
		soma = 0;
	}
	cont++;
	} 
	return 0; 
}


