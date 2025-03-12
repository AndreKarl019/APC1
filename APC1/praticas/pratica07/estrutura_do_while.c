#include <stdio.h>

int main(){
    float nota;

    do {
        printf("Insira a sua nota: ");
        scanf("%f",&nota);
        while(getchar()!='\n');
        if(nota < 1 || nota > 10) {
   printf("Nota invalida. Tente novamente!\n");
        }
    } while(nota < 1 || nota > 10);




    return 0;
}