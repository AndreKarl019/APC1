#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int teste = 0, duracao, check = 0;
    float entrada, rendimento, valor;
    
    while(teste!=1){
        printf("Insira o investimento mensal: ");
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
        printf("Insira a duracao do investimento em meses: ");
        teste = scanf("%i",&duracao);
        while(getchar()!='\n');
        if(teste!=1){
            printf("Valor Invalido.\n");
        }    
    }
        printf("A duracao foi de: %i\n", duracao);
    teste = 0;  
    valor = entrada; 
    float taxa = (rendimento/100) + 1; 
    printf("A taxa mensal eh de %.2f\n", taxa);
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