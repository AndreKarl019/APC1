#include <stdio.h>

int main(){
    const int domingo = 0;
    const int segunda = 1;
    const int terca = 2;
    const int quarta = 3;
    const int quinta = 4;
    const int sexta = 5;
    const int sabado = 6;

    enum dia_da_semana_e {
      dom = 1,
      seg,
       ter,
       qua,
       qui,
       sex,
       sab
    };
    int dia;
    printf("Insira o dia da semana: ");
    scanf("%i",&dia);

    switch(dia){
        case dom:{printf("Domingo\n");}break;
        case seg:{printf("Segunda\n");}break;
        case ter:{printf("Terca\n");}break;
        case qua:{printf("Quarta\n");}break;
        case qui:{printf("Quinta\n");}break;
        case sex:{printf("Sexta\n");}break;
        case sab:{printf("Sabado\n");}break;
        default:{printf("Dia invalido.\n");}break;
    }


    return 0;
}
