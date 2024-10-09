#include <stdio.h>

int main(){
    int dia;
    printf("Escolha um dia da semana entre 1 e 7: ");
    scanf("%i", &dia);

    switch(dia){
        case 1: printf("O primeiro dia da semana eh domingo.\n"); break;
        case 2: printf("O segundo dia da semana eh segunda-feira.\n"); break;
        case 3: printf("O terceiro dia da semana eh terca-feira.\n"); break;
        case 4: printf("O quarto dia da semana eh quarta-feira.\n"); break;
        case 5: printf("O quinto dia da semana eh quinta-feira.\n"); break;
        case 6: printf("O sexto dia da semana eh sexta-feira.\n"); break;
        case 7: printf("O setimo dia da semana eh sabado.\n"); break;
        default: printf("O numero nao eh entre 1 e 7, tente novamente.\n");
    }


    return 0;
}