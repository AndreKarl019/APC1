#include <stdio.h>

int main(){
  char tecla;
  char nome[31];


  printf("Digite uma tecla: ");
  scanf("%c", &tecla);
  while(getchar()!='\n');
  printf("Você digitou: %c\n", tecla);

  printf("Digite seu nome: ");
  scanf("%[^\n]s", nome);
  printf("Você digitou: %s\n", nome);
  
  return 0;
}