#include <stdio.h> //biblioteca entrada e saida

int main() {
  printf("Sempre entre aspas\n");
  
  //imprime um numero inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 11, 22);
  printf("%5i\n", 111);
  printf("%05i\n", 3);
  
  //imprime um numero decimal
  printf("%f\n", 10.12345678);
  printf("%.2f\n", 10.12345678);
  printf("%10.2f\n", 5555.126);
  printf("%3.2f\n", 5555.126); 
 
  //imprime um caractere aspas simples
  printf("%c\n", 'A');
  printf("%c\n", 12); //imprime de acordo com tabela ASCII8
  printf("%c\n", 3); //imprime de acordo com tabela ASCII8
  printf("%c\n", 66); //imprime de acordo com tabela ASCII8
  printf("%c\n", 68); //imprime de acordo com tabela ASCII8

  // imprime um string
  printf("%s\n", "Bom dia!");
  printf("%s\n", "Bom dia, Bruno!");
  printf("%s\n", "Bruno, Bom dia!");
  printf("%s\n", "Bom dia, brunoo!");
  printf("%30s!\n", "Bom dia!"); //limita caracteres, enxendo à esquerda caso tenha menos
  printf("%-30s!\n", "Bom dia!"); //limita caracteres, enxendo à direita caso tenha menos
  
  return 0;
}
