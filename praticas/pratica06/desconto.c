#include <stdio.h>

int main(){
    float valor, valordesconto;
    int menor100, maior100, menor500, maior500;
    printf("Insira o valor do produto\n");
    scanf("%f",&valor);
    menor100 = valor<=100;
    maior100 = 100.01<=valor;
    menor500 = 500>=valor;
    maior500 = valor>500;
    if(menor100){
        valordesconto = 0.01*valor;
        printf("O valor incial de %.2f recebera um desconto de %.2f\n", valor, valordesconto);
    } else if(maior100 && menor500){
        valordesconto = 0.05*valor;
        printf("O valor incial de %.2f recebera um desconto de %.2f\n", valor, valordesconto);
    }else if(maior500){
        valordesconto = 0.1*valor;
        printf("O valor incial de %.2f recebera um desconto de %.2f\n", valor, valordesconto);
    } else {
        printf("Valor invalido\n");
    }
    return 0;
}