#include <stdio.h> 

int main(){
    int numero;
    printf("Insira um numero para checar seus multiplos de 1 a 100: ");
    scanf("%i",&numero);
    while(getchar()!='\n');
    for(int i = 1; i<101; i++){
        if(i%numero==0){
            printf(" %i,", i);
        }
    }

    return 0;
}