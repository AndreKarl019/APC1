#include <stdio.h>

int main(){
    struct data_t {
        int dia;
        int mes;
        int ano;
    };
    struct data_t data;
    printf("Entre com um dia: ");
    scanf("%i",&data.dia);
    while(getchar()!='\n');
    printf("ENtre com um mes: ");
    scanf("%i",&data.mes);
    while(getchar()!='\n');
    printf("Entre com um ano: ");
    scanf("%i",&data.ano); 
    while(getchar()!='\n');
    printf("A data inseria eh %i/%i/%i \n", data.dia,data.mes,data.ano);

    return 0;
}