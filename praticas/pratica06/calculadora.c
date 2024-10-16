#include <stdio.h> 
#include <math.h>

int main(){
    char operacao;
    printf("qual operacao deseja fazer: \n");
    printf("1 - SOMA \n");
    printf("2 - SUBTRACAO \n");
    printf("3 - DIVISAO \n");
    printf("4 - MULTIPLICACAO \n");
    int deu_certo = scanf("%c", &operacao);
    while(getchar()!='\n');
    float num1, num2, resultado;
    printf("Insira o primeiro valor: ");
    deu_certo = scanf("%f",&num1);
    while(getchar()!='\n');
    printf("Insira o segundo valor: ");
    deu_certo = scanf("%f",&num2);
    while(getchar()!='\n');
    switch(operacao){
        case '1':{
            resultado = num1 + num2;
            printf("A soma de %f com %f eh %f\n",num1,num2,resultado);
        }break;
        case '2':{
            resultado = num1 - num2;
            printf("A subtracao de %f por %f eh %f\n",num1,num2,resultado);
        }break;
        case '3':{
            resultado = num1/num2;  
            printf("A divisao de %f por %f eh %f\n",num1,num2,resultado);
        }break;
        case '4':{
            resultado = num1*num2;
            printf("A multiplicacao de %f com %f eh %f\n",num1,num2,resultado);
        }break;
        default: printf("Operacao invalida\n");

    }

    return 0;
}