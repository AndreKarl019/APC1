#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int teste = 0, duracao, check = 0;
    float entrada, rendimento, valor;
    char tipo[8];
    while(teste!=1){
        printf("O investimento rende anualmente ou mensalmente? (anual/mensal): ");
        scanf("%[^\n]s",tipo);
        while(getchar()!='\n');
        if(strcmp(tipo,"anual")==0){
            teste = 1;
        }
        if(strcmp(tipo,"mensal")==0){
            teste = 1;
        }
        if(teste!=1){
            printf("Tipo de investimento invalido.\n");
        }
    }
    teste = 0;
    while(teste!=1){
        printf("Insira o investimento %s: ", tipo);
        teste = scanf("%f",&entrada);
        while(getchar()!='\n');
        if(teste!=1){
            printf("Valor Invalido.\n");
        }    
        printf("A entrada foi de: %.2f\n", entrada);
    }
    teste = 0;
    while(teste!=1){
        printf("Insira a taxa de rendimento em %: ");
        teste = scanf("%f",&rendimento);
        while(getchar()!='\n');
        if(teste!=1){
            printf("Valor Invalido.\n");
        }    
    }
    teste = 0;
    while(teste!=1){
        printf("Insira a duracao do investimento %s: ", tipo);
        teste = scanf("%i",&duracao);
        while(getchar()!='\n');
        if(teste!=1){
            printf("Valor Invalido.\n");
        }    
    }
    if(strcmp(tipo,"mensal")==0){
        printf("A duracao foi de: %i meses\n", duracao);
    }
    if(strcmp(tipo,"anual")==0){
        printf("A duracao foi de: %i anos\n", duracao);
    }
    teste = 0;  
    valor = entrada; 
    float taxa = (rendimento/100) + 1; 
    printf("A taxa %s eh de %.2f\n", tipo, taxa);
    while(teste!=duracao){
        if(teste!=duracao){
            valor = valor*taxa + entrada;
            teste++;
        }
        if(teste==duracao){
            printf("No final do investimento voce tera: R$%.2f", valor);
        }
    }
    return 0;
}