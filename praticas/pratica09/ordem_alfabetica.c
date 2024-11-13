#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[16], palavra2[16];
    printf("Insira uma palavra: ");
    scanf("%[^\n]s", palavra1);
    while(getchar()!='\n');
    printf("Insira outra palavra: ");
    scanf("%[^\n]s", palavra2);
    while(getchar()!='\n');
    if (strcmp(palavra1, palavra2) >= 0) {
        printf("a ordem eh %s e %s", palavra2, palavra1);
    } else {
        printf("a ordem eh %s e %s", palavra1, palavra2);
        }


    return 0;
}