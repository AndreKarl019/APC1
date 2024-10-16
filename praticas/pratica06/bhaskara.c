#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Insira o valor de a: ");
    int deu_certo = scanf("%i",&a);
    while(getchar()!='\n');
    printf("Insira o valor de b: ");
    deu_certo = scanf("%i",&b);
    while(getchar()!='\n');
    printf("Insira o valor de c: ");
    deu_certo = scanf("%i",&c);
    while(getchar()!='\n');
    int delta = b*b - 4*a*c;
    if(delta<0){
        printf("Essa equaçao nao tem raizes reais\n");
    }else if(delta>=0){
        int x1, x2;
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("As raizes da equacao sao %i e %i\n", x1,x2);
    }

    return 0;
}