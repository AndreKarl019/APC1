#include <stdio.h>

int main(){
  int a, b, c;
  printf("Digite um numero:");
  scanf("%i", &a);
  printf("Digite outro numero:");
  scanf("%i", &b);
  c = a + b;
  printf("A soma de %i e %i é: %d\n", a,b,c);
  return 0;
}