#include <stdio.h>

int main(){
    int numero, decimal;
    printf("Insira o numero que deseja ver o binario: ");
    scanf("%i",&numero);
    while(getchar()!='\n');
    decimal = numero;
    for(int i=128;i>0; i=i/2 ){
        int bit = decimal/i;
        if(bit==0||bit==1){
            printf("%i ", bit);
        }else{printf("Numero Invalido! ");break;}
        decimal = decimal - bit*i;
    }


    return 0;
}