#include <stdio.h> 
#include <math.h>
#include <string.h>
#define PI 3.14

int main(){
    int a;
    int deu_certo = 0;
    float b, c;
    c = PI/180;
    char d[5];
    while(deu_certo!=1){
        printf("Insira um angulo em graus: ");
        deu_certo = scanf("%i", &a);
        while(getchar()!='\n');
        if(deu_certo != 1)
            printf("Angulo invalido\n");
    }
    deu_certo = 0;
    while(deu_certo!=1){
        printf("Escolha uma operacao entre seno(sin), cosseno(cos) ou tangente(tan): ");
        scanf("%[^\n]s",d);
        while(getchar()!='\n');
        printf("%s", d);
        if(strcmp(d,"sin") == 0){
            deu_certo = 1;
            b = sin(a*c);
            printf("Seno(%i) = %.2f\n", a, b);
        } 
        if(strcmp(d,"cos") == 0){
            deu_certo = 1;
            b = cos(a*c);
            printf("Cos(%i) = %.2f\n", a, b);
        }
        if(deu_certo != 1){
            printf("Errou ai mano\n");
        }
    }
    return 0;
    }