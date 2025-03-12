#include <stdio.h>

int main(){
    int numeros[10], achou = -1, numero;
    
    printf("Insira os 10 numeros: ");
    for(int i=0;i<10; i++){
        scanf("%i", &numeros[i]);
        while(getchar()!='\n');
    }
    printf("Insira o numero que esta procurando: ");
    scanf("%i", &numero);

    for(int i = 0; i<10;i++){
        if(numero==numeros[i]){
            achou = i;
            printf("Achou! o numero esta na %ia posicao\n", achou);
        }else if(achou==-1&&i==9){
            printf("Nao achou!\n");
        }
    }

    return 0;
}