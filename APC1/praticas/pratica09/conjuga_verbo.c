#include <stdio.h>
#include <string.h>

int main(){
    char verbo[21];
    char sufixos[6][5] = {"O","AS","A","AMOS","AIS","AM"};
    char pronomes[6][5] = {"EU","TU","ELE","NOS","VOS","ELES"};
    printf("Insira o verbo que quer conjugar: ");
    scanf("%s", verbo);
    while(getchar()!='\n');
    int ultima_posicao = strlen(verbo) - 1; 
    int penultima_posicao = ultima_posicao - 1;
    if(verbo[ultima_posicao]=='R'&&verbo[penultima_posicao]=='A'){
        char radical[21];
        strcpy(radical, verbo);
        radical[ultima_posicao]; 
        radical[penultima_posicao] = 0;
        for(int i = 0; i<6; i++){
            printf("%s %s%s\n", pronomes[i], radical, sufixos[i]); 
        }
    }else{
        printf("O verbo naum termina em AR!\n");
    }

    return 0;
}