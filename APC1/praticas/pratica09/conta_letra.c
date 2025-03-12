#include <stdio.h> 
#include <string.h>

int main(){
    char frase[31], letra;
    int quantidade = 0;
    printf("Digite uma frase: ");
    scanf("%[^\n]s", frase);
    while(getchar()!='\n');
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    while(getchar()!='\n');
    for(int i=0; i<strlen(frase); i++) {
        if (frase[i] == letra) {
            quantidade++;
        }
    }
    printf("a sua frase tem a letra %c, %i vezes", letra, quantidade);


    return 0;
}