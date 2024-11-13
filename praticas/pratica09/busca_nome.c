#include <stdio.h>
#include <string.h>

int main(){
    char nomes[10][101], sobrenome[14];
    int achou;
    for(int i = 0; i<10; i++){
    printf("Insira um nome: ");
    scanf("%[^\n]s", nomes[i]);
    while(getchar()!='\n');
    }
    printf("Insira um sobrenome para procurar: ");
    scanf("%s", sobrenome);
    for(int i = 0; i<10; i++){

    }



    return 0;
}