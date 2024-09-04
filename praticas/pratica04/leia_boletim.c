#include <stdio.h>

int main(){
  int matricula;
  float media, a1, a2;
  
  printf("Insira sua matricula: "); 
  int deu_certo = scanf("%i", &matricula);

  printf("Digite a nota 1: ");
  deu_certo = scanf("%f", &a1);
  printf("Digite a nota 2: ");
  deu_certo = scanf("%f", &a2);
  media = (a1+a2)/2;
  printf("Matricula\tA1\tA2\tMedia\n");
  printf("%i\t%.1f\t%.1f\t%.2f\n", matricula, a1, a2, media);

  return 0;
}