#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[11], maiusculo[11], minusculo[11];
    printf("Insira uma palavra: ");
    scanf("%s", string);
    while(getchar()!='\n');
    for(int i=0; i<strlen(string); i++) {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }
    printf("A frase %s em maiusculo fica %s e em minusculo fica %s", string, maiusculo, minusculo);

    return 0;
}