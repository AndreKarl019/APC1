#include <stdio.h>

int main(){
    float nota;
    printf("Insira a nota: ");
    scanf("%f",&nota);
    while(getchar()!='\n');
    while(nota < 1 || nota > 10) {
        printf("Nota invalida. Tente novamente!\n");
        scanf("%i", &nota);
        while(getchar()!='\n');
    }





    return 0;
}