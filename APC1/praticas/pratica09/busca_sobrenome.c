#include <stdio.h>
#include <string.h>

int main(){
    char nomes[10][101], sobrenome[14];
    int achou = 0;
    for(int i = 0; i<10; i++){
    printf("Insira um nome: ");
    scanf("%[^\n]s", nomes[i]);
    while(getchar()!='\n');
    }
    printf("Insira um sobrenome para procurar: ");
    scanf("%s", sobrenome);
    for(int i = 0; i<10; i++){
        if(strstr(nomes[i],sobrenome)){
            printf("%s \n", nomes[i]);
            achou++;
        }
    }
    if(achou>0){
        printf("Foram achados %i nomes.\n", achou);
    }else{
        printf("Nenhum nome foi achado.\n");
    }

    return 0;
}