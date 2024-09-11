#include <stdio.h>

int main(){
  
  // Entrada
  int numero1;
  int numero2;
  float numero3;
  
  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero1);
  
  printf("Entre outro numero inteiro: ");
  deu_certo = scanf("%i", &numero2);
  
  printf("Entre um numero decimal: ");
  deu_certo = scanf("%f", &numero3);

  // Processamento

  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1*numero2;
  int divisao = numero1/numero2;
  int resto_divisao = numero1 % numero2;
  float fracao = numero1/numero3;
  float fracao2 = numero3/numero1;

  // Saida 
  printf("A soma de %i com %i da: %i \n", numero1, numero2, soma);
  printf("A subtracao de %i com %i da: %i \n", numero1, numero2, subtracao);
  printf("A multiplicacao de %i com %i da: %i \n", numero1, numero2, multiplicacao);
  printf("A divisao de %i por %i da: %i \n", numero1, numero2, divisao);
  printf("O resto da divisao de %i por %i da: %i \n", numero1, numero2, resto_divisao);
  printf("A divisao de %i por %f da: %f \n", numero1, numero3, fracao);
  printf("A divisao de %f por %i da: %f \n", numero3, numero1, fracao2);
  while(getchar()!='\n');

  
  return 0;
}
