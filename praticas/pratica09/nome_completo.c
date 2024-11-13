#include <stdio.h>
#include <string.h>

int main(){
    char primeiro_nome[11], ultimo_nome[11], nome[31];
    memset(primeiro_nome, '\0', sizeof(primeiro_nome));
    memset(ultimo_nome, '\0', sizeof(ultimo_nome));
    memset(nome, '\0', sizeof(nome));
    printf("Qual o primeiro nome: ");
    scanf("%s",primeiro_nome);
    while(getchar()!='\n');
    printf("Qual o segundo nome: ");
    scanf("%s", ultimo_nome);
    while(getchar()!='\n');
    strcpy(nome, primeiro_nome);
    strcat(nome," ");
    strcat(nome, ultimo_nome);
    printf("O seu nome eh: %s", nome);




    return 0;
}