#include <stdio.h>


int main(){
    int numero, maior, menor;
    printf("Insira um numero diferente de 0 para verificar: ");
    scanf("%i", &numero);
    while(getchar()!='\n');
    maior = numero;
    menor = numero;
    printf("Quando quiser parar digite 0\n");
    while(numero!=0){
        printf("Insira outro numero: ");
        scanf("%i", &numero);
        while(getchar()!='\n');
        if(numero!=0){   
            if(numero>maior){
                maior = numero;
            }else if(numero<menor){
                menor = numero;
            }
        }
    }
    printf("O maior numero foi %i e o menor foi %i\n", maior,menor);

    return 0;
}