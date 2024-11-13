#include <stdio.h> 
#include <string.h>

int main(){
    char string[11], tecla;
    memset(string, '\0', sizeof(string));
    printf("Escolha uma tecla para preencher a string: ");
    scanf("%c", &tecla);
    while(getchar()!='\n');
    memset(string, tecla, 10);
    printf("%s\n", string);
    memset(string, '*', 5);
    printf("%s\n", string);
    string[5] = '\0';
    for(int i=0; i<10; i++) {
    printf("%c\n", string[i]);
    }
    return 0;
}