#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int deu_certo = 0, repete = 1;
    char tipo[20], re[1];
    float k, x, y, a, b;
    while(deu_certo != 1){
        printf("Escolha um tipo de funcao entre reta, quadratica, modular, exponencial, reciproca, raiz, raiz cubica, cubica, logaritmo ou exponencial natural: ");
        scanf("%[^\n]s",tipo);
        while(getchar()!='\n');
        if(strcmp(tipo,"reta")==0){
            deu_certo = 1;
        }
        if(strcmp(tipo,"quadratica")==0){
            deu_certo = 1;
        }
        if(strcmp(tipo,"cubica")==0){
            deu_certo = 1;
        }
        if(strcmp(tipo,"modular")==0){
            deu_certo = 1;
        }
        if(strcmp(tipo,"exponencial")==0){
            printf("EM DESENVOLVIMENTO FAVOR AGUARDE\n");
            deu_certo = 0;
        }
        if(strcmp(tipo,"reciproca")==0){
            printf("EM DESENVOLVIMENTO FAVOR AGUARDE\n");
            deu_certo = 0;
        }
        if(strcmp(tipo,"raiz")==0){
            deu_certo = 1;
        }
        if(strcmp(tipo,"raiz cubica")==0){
            deu_certo = 1;
        }
        if(strcmp(tipo,"logaritmo")==0){
            printf("EM DESENVOLVIMENTO FAVOR AGUARDE\n");
            deu_certo = 0;
        }
        if(strcmp(tipo,"exponencial natural")==0){
            printf("EM DESENVOLVIMENTO FAVOR AGUARDE\n");
            deu_certo = 0;
        }
        if(deu_certo!=1){
            printf("Funcao invalida.\n");
        }
    }
    int retD = strcmp(tipo, "reta"), quaD = strcmp(tipo,"quadratica"), modD = strcmp(tipo,"modular"), expD = strcmp(tipo,"exponencial");
    int reciD = strcmp(tipo,"reciproca"), raizD = strcmp(tipo, "raiz"), raizcubD = strcmp(tipo,"raiz cubica"), cubD = strcmp(tipo,"cubica");
    deu_certo = 0;
    while(deu_certo!=1){
        printf("Insira um coeficiente multiplicativo: ");
        deu_certo = scanf("%f",&k);
        while(getchar()!='\n');
        if(deu_certo!=1){
            printf("Valor invalido.\n");
        }
    }
    deu_certo = 0;
    while(deu_certo!=1){
        printf("Insira a translacao vertical: ");
        deu_certo = scanf("%f",&b);
        while(getchar()!='\n');
        if(deu_certo!=1){
            printf("Valor invalido.\n");
        }
    }
    deu_certo = 0;
    while(deu_certo!=1){
        printf("Insira a translacao horizontal: ");
        deu_certo = scanf("%f", &a);
        while(getchar()!='\n');
        if(deu_certo!=1){
            printf("Valor invalido.\n");
        }
    }
    deu_certo = 0;
    while(repete==1){
        printf("Qual o valor de X: ");
        deu_certo = scanf("%f", &x);
        while(getchar()!='\n');
        if(deu_certo!=1){
            printf("Valor invalido.\n");
        }
        if(deu_certo==1){
            if(retD==0){
                y = (k*x) + b;
                printf("F(%.2f) = %.2f\n", x, y);
                printf("reta\n");
            }
            if(quaD==0){
                y = k*pow(x - a, 2) + b;
                printf("F(%.2f) = %.2f\n", x, y);
                printf("qua\n");
            }
            if(modD==0){
               if(x-a<0){
                y = k*(a-x)+b;
               }
               if(x-a>=0){
                y = k*(x-a)+b;
               }
               printf("F(%.2f) = %.2f\n", x, y);
               printf("mod\n");
            }
            if(raizD==0){
                y = k*sqrt(x-a)+b;
                printf("F(%.2f) = %.2f\n", x, y);
                printf("raiz\n");
            }
            if(raizcubD==0){
                y = k*cbrt(x-a)+b;
                printf("F(%.2f) = %.2f\n", x, y);
                printf("raizcub\n");
            }
            if(cubD==0){
                y = k*pow(x-a, 3)+b;
                printf("F(%.2f) = %.2f\n", x, y);
                printf("cub\n");
            }
        }
        printf("Quer outro valor? (y/n) ");
        scanf("%[^\n]s", re);
        while(getchar()!='\n');
        if(strcmp(re,"y")==0){
        }
        if(strcmp(re,"y")==-1){
            repete = 0;
        }
    }
    return 0;
}
