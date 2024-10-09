#include <stdio.h>

int main(){
    int ano, multi4, multi100, multi400;
    printf("Insira o ano: ");
    scanf("%i", &ano);
    multi4 = ano%4 == 0;
    multi100 = ano%100 == 0;
    multi400 = ano%400 == 0;
    if(multi400){
        printf("O ano %i eh bissexto\n", ano);
    } else if(multi100){
        printf("O ano %i nao eh bissexto\n", ano);
    } else if(multi4){
        printf("O ano %i eh bissexto\n", ano);
    } else {
        printf("O ano %i nao eh bissexto", ano);
    }
    return 0;
}