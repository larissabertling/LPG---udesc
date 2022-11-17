//geral

//Exercício 1 - Triângulos 
#include <stdio.h> 
#include <stdlib.h> 

 	triangulos {NT, EQ, I, ES};
	Verificacao{falso, verdadeiro};
	Verificacao triangulo(float x, float y, float z){ 
    if((abs(y-z) < x && y+z > x) && (abs(x-z) < y && x+z > y) && (abs(x-y) < z && x+y > z)){
        return verdadeiro;
    }
    return falso;
}
enum triangulos tipo (float x, float y, float z){
    return triangulo (x, y, z)?     
    (x == y && y == z)? EQ :
    (x == y || x == z || y == z)? I :
    (x!= y && y != z && x!= z)? ES : 
    NT : NT;
}
int main()
{
    float x, y, z;
    printf("Digite 3 pontos flutuantes\n ");
    scanf("%f%f%f", &x, &y, &z);
    int resultado = tipo_triangulo (x, y, z); 
    if(resultado == EQ) printf("\nTriangulo Equilatero");
    if(resultado == I) printf("\nTriangulo Isosceles");
    if(resultado == ES) printf("\nTriangulo Escaleno");
    if(resultado == NT) printf("\nNao e Triangulo");
    return EXIT_SUCCESS;
}



//Exercicio 2 - Maior Valor

#include <stdio.h> 
#include <stdlib.h> 

int main () {
	
	int x, y, z, maior;
	
	printf("Entre com tres valores inteiros: \n");
	scanf("%d%d%d", &x, &y, &z);
	
    if (x == y == z)
        return x;
    if (x > z && x > y)
        return x;
    if (y > x && y > z)
        return y;
    if (z > x && z > y)
        return z;
    if (x == y && x > z)
        return y;
     else
        return z;
    if (x == z && x > y)
        return z;
    else
        return y;
    if (y == z && y > x)
        return y;
    else 
        return x;
        
}
	
	
//Exercício 3 - Dígito 

#include <stdio.h> 
#include <stdlib.h> 

int digito(int x);
int main(){
    char x, num=-1;
    printf("Insira um digito: \n");
    scanf("%c",&x);
    num= digito(x);
    printf("%i",num);
    return 0;
}

int digito(int x){
	if(x>='0' && x <='9'){
    return x;
}
return x;
}


//Exercício 4 - Soma dos Ímpares 

#include <stdio.h> 
#include <stdlib.h> 


int main() {
int soma, x, y;
int min, max;
  
   if(x < y){
    ((min = x) && (max = y));}
    return 0;
 else{
    ((max = x) && (min = y));}
    for (int i = (min + 1); i < max; ++i){
        if(i % 2 == 1 || i % 2 == -1){
            z = i + z;
            return z;
        }
}
}


//Exercício 5 - Primos 

#include<stdio.h>

int main() {
	
 int num, i, resultado = 0;
 
 printf("Digite um numero: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    for(i=0; i< 1; i++);
    
 
 return 0;
}
 
 
//Exercício 6 - Fib 

#include <stdio.h> 
#include <stdlib.h> 


int main fib(); {
	
 	int i, agora = 1, antes = 0, aux;
 		if (n == 0) return 0;
 		if (n == 1) return 1;
 		for (i = 2; i <= n ; i++) {
 		aux = agora;
 		agora = agora + antes;
 		antes = aux;
 		
 }
	 return agora;
}


//Exercício 7 - Soma Especial 

#include <stdio.h> 
#include <stdlib.h> 

//Exercício 7 - 

int main(){
	
	int i, n, k, x;
    int soma = 0;
    for (i = 0; i < n; i++);

        if (i % x == 0 || i % k == 0)
            soma += i;
 
    return soma;
}

//Exercício 8 - Soma S 

#include<stdio.h>
#include <stdlib.h>


	int somatorio(int x);
	int main(){
	
		int x, somatorio=0;
		printf("Entre com os x primeiros numeros: ");
		scanf("%d",&x);
		print("A soma dos primeiros numeros sao: ", somatorio(x));}
	
	
int recursiva(int x)
{
    if(x != 0)
        return x + recursiva(x - 1);
    return 0;
}


int interativa(int x)
{
    if x == 0
        return 0;
    if x >= 1
        return (float(x-1)) + 2 * (x-1)
}

//Exercício 9 - Série Harmônica 

#include<stdio.h>
#include <stdlib.h>

float harmonica(int x);
int main() 
{ 
    int x; 
    printf ("Entre com o valor de x: \n"); 
    scanf ("%f", x);
    printf("A soma e %f", harmonica(x)); 
    return 0; 
}


  double harmonica_rec (int x); { 
  double i, r = 0.0; 
  for (i = 1; i <= x; i++)  
  return r + 1/i; 
} 


  float harmonica_int (int x);{
  float r = 0.0f, i;
  for (i=1; i<=x; i++)
    r += 1/(float)i;
  return r;
}


//Exercício 10 - Somatório 

#include<stdio.h>
#include <stdlib.h>

int somatorio(int x);
int main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("%d", somatorio (x));
    return 0;
}


int somatorio_rec(int x); {
    if (x>=1)
        return 1/(x*somatorio_rec(x-1));
    else
        return 1;
}


int somatorio_int(int x); {
    if x == 0
        return 0;
    if x >= 1
        return ((float)1/x) * x1;
}
   
   
   
   
   
   
