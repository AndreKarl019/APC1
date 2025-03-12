#include <stdio.h>

int main(){
    enum mes_e {
        jan = 1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};
    char meses[12][10]={"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Jul ho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    printf("Entre com um mes de 1 a 12: ");
    int mes;
    scanf("%i", &mes);
    while(getchar()!='\n'); 

    return 0;
}