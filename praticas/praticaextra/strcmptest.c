#include <stdio.h>
#include <string.h>

int main(){
    char a[6], b[6];
    printf("Insira uma palavra: ");
    scanf("%[^\n]s", a);
    while(getchar()!='\n');
    printf("Insira outra palavra: ");
    scanf("%[^\n]s", b);
    while(getchar()!='\n');
    printf("%s e %s\n", a, b);
    printf("%i", strcmp(a,b));

    return 0;
}