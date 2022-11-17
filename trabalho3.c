//Trabalho LPG 3 -- Alunas: Larissa Bertling e Leticia Capitani
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Inicio{
    int ihora,imin;
};
struct Término{
    int thora,tmin;
};
struct Data{
	int dia,mes,ano;
};
typedef struct{
    struct Data dia;
    struct Inicio h_Inicio;
    struct Término h_Término;
    char legenda[50],local[50];
}evento;

void cadastrar(evento *p);
void ordenar(evento *p, int n);
void mostrar_evento(evento x);
void muda(evento *p, int n, int a, int m, int d, int h);
int verificar_eventos(evento *p, int n);
int verificar_mes_hora(evento x);

int main(int argc, char *argv[]){

    int n = 0, i, opc = 0,opc_remove = 0;
    int d, m, a, h, min,cont1 = 0,cont2 = 0;
    char estrutura[50];
    evento *p = NULL;

    do{
        printf("\n---Bem vindo(a) a agenda de eventos---\nEscolha um dos comandos:\n");
        printf("\n1. Cadrastrar evento\n2. Mostrar todos eventos\n3. Mostrar eventos de um dia\n4. Buscar por uma legenda\n5. Remover evento\n6. Sair\n\n");
        scanf(" %d", &opc);
 
    switch (opc){
        case 1: 
            n++;
            p = realloc( p, sizeof(evento) * n);
            cadastrar(&p[n-1]);
            ordenar(p, n);
            for(i = 0 ; i < n ; i++){
                if(verificar_mes_hora(p[i]) == 0){
                    printf("ERROR: Data ou hora inexistentes!\n");
                    n--;
                    p = realloc(p, sizeof(evento) * n);
                }
            }
            if(n > 1){
                if(verificar_eventos(p, n) == 0){
                    printf("Horário já ocupado!\n");
                    n--;
                    p = realloc(p, sizeof(evento) * n); 
                }
            }
        break;
		    
        case 2: 
            for(i = 0 ; i < n ; i++){
                printf("\n---Evento %d---\n", i+1);
                  mostrar_evento(p[i]);
            }
            if(n < 1){
                printf("---Sem eventos cadastrados!---\n");
            }
        break;
		    
        case 3: 
            printf("\nDigite o Dia, Mes e Ano:\n");
                  scanf("%d\n%d\n%d", &d, &m, &a);
            printf("\n---Evento(s) do dia %d/%d/%d---\n", d, m, a);
            for(i = 0; i <= (n-1) ; i++){ 
              printf("\n");
                if( a == p[i].dia.ano){
                    if( m == p[i].dia.mes){
                        if( d == p[i].dia.dia){
                            mostrar_evento(p[i]);
                            cont1++;
                        }
                    }
                }
            }
            if(cont1 == 0){
                printf("---Nenhum evento foi encontrado!---\n");
            }
            cont1 = 0;
        break;
		    
        case 4:
            printf("\nEntre com a legenda buscada\n");
                   scanf("%49s",estrutura);
            printf("\n---Evento(s) encontrado(s)---\n\n");
            for(i = 0 ; i <= (n-1) ; i++){
                if(strcmp(estrutura, p[i].legenda) == 0){
                    mostrar_evento(p[i]);
                    cont2++;
                }
            }
            if(cont2 == 0){
                printf("\n---Nenhum evento encontrado!---\n");
            }
            cont2 = 0;
        break;

        case 5: 
                printf("\nDigite o Dia, Mes e Ano:\n");
                     scanf("%d\n%d\n%d", &d, &m, &a);
                printf("Digite Hora e Minuto de inicio:\n");
                     scanf("%d\n%d", &h, &m);
                muda(p, n, a, m, d, h);
                n--;
                p = realloc(p, sizeof(evento) * n);
                    printf("---Evento foi removido com sucesso---\n");
            break;
       }
	    
    }while(opc != 6);
    printf("---Saída do programa---\n");
    free(p);
    return 0;
}

void cadastrar(evento *p){

    printf("Digite o Dia, Mes e Ano:\n");
	  scanf("%d\n%d\n%d", &p->dia.dia, &p->dia.mes, &p->dia.ano);
    printf("Digite Hora e Minuto de inicio\n");
          scanf("%d\n%d", &p->h_Inicio.ihora, &p->h_Inicio.imin);
    printf("Digite Hora e Minuto do fim\n");
          scanf("%d\n%d", &p->h_Término.thora, &p->h_Término.tmin);
    printf("Digite uma legenda\n"); 
          scanf("%49s",p->legenda);
    printf("Digite o local\n");
          scanf("%49s",p->local);
}

void ordenar(evento *p, int n){

    int i,j;
    evento aux;

    for(i = 1; i < n ; i++){
        for(j = 0; j < (n-1) ; j++){
            if(p[j].dia.ano >= p[j+1].dia.ano){
                if(p[j].dia.mes >= p[j+1].dia.mes){
                    if(p[j].dia.dia > p[j+1].dia.dia){
                        aux = p[j];
                        p[j] = p[j+1];
                        p[j+1] = aux;

    if(p[j].dia.ano == p[j+1].dia.ano){
        if(p[j].dia.mes == p[j+1].dia.mes){
            if(p[j].dia.dia == p[j+1].dia.dia){
                if(p[j].h_Inicio.ihora >= p[j+1].h_Inicio.ihora){
                   aux = p[j];
                       p[j] = p[j+1];
                       p[j+1] = aux;
                          }
                       }
                    } 
                 } 
              }
           }       
        }
     }
   }
}

void mostrar_evento(evento x){
    
    printf("Data: %d/%d/%d\n", x.dia.dia, x.dia.mes, x.dia.ano);
    printf("Inicio: %d:%d\n", x.h_Inicio.ihora, x.h_Inicio.imin);
    printf("Fim: %d:%d\n", x.h_Término.thora, x.h_Término.tmin);
    printf("Legenda: %s\n", x.legenda);
    printf("Local: %s\n", x.local);
}

void muda(evento *p, int n, int a, int m, int d, int h){

    int i;
    evento auxiliar;

    for(i = 0 ; i < n ; i++){
        if(p[i].dia.ano == a){
            if(p[i].dia.mes == m){
                if(p[i].dia.dia == d){
                    if(h >= p[i].h_Inicio.ihora && h <= p[i].h_Término.thora){
                        auxiliar = p[i];
                        p[i] = p[i+1];
                        p[i+1] = auxiliar;
                    }
                }
            }
        }
    }
}

int verificar_eventos(evento *p, int n){

    int i,j;

    for(i = n; i >= 0 ; i--){
        for(j = (n-1); j >= 0; j--){
            if(p[j].dia.ano == p[j-1].dia.ano){
                if(p[j].dia.mes == p[j-1].dia.mes){
                    if(p[j].dia.dia == p[j-1].dia.dia){
                        if(p[j].h_Inicio.ihora >= p[j-1].h_Inicio.ihora && p[j].h_Inicio.ihora <= p[j-1].h_Término.thora){
                            if(p[j].h_Inicio.imin >= p[j-1].h_Inicio.imin){
                                return 0;
                            }
                        }
                    }
                }
            }
        }       
    }
    return 1;
}

int verificar_mes_hora(evento x){

    if(x.dia.mes > 12 || x.dia.mes < 0){
        return 0;
    }
    if(x.dia.mes == 1| x.dia.mes == 3 | x.dia.mes == 5 |x.dia.mes == 7 | x.dia.mes == 8 | x.dia.mes == 10 |x.dia.mes == 12){
        if(x.dia.dia > 31 || x.dia.dia < 0){
            return 0;
        }
    }
    if(x.dia.mes == 2){
        if(x.dia.dia > 29 || x.dia.dia < 0){
            return 0;
        }
    }
    if(x.dia.mes == 4 | x.dia.mes == 6 | x.dia.mes == 9 |x.dia.mes == 11){
        if(x.dia.dia > 31 || x.dia.dia < 0){
            return 0;
        }
    }
    if(x.h_Inicio.ihora > 24 | x.h_Término.thora > 24 || x.h_Inicio.ihora < 0 | x.h_Término.thora < 0){
        return 0;
    }
    if(x.h_Inicio.imin > 60 | x.h_Término.tmin > 60 || x.h_Inicio.imin < 0 | x.h_Término.tmin < 0){
        return 0;
    }  
    return 1;
}
