#include <stdio.h>

int main(){
    int numero, fatorial=1;
    printf("Insira um numero para checar seu fatorial: ");
    scanf("%i",&numero);
    for(int i=0; i<numero;i++){
        fatorial = fatorial*(numero-i);
    }
    printf("O fatorial de %i eh %i\n", numero, fatorial);

    return 0;
}