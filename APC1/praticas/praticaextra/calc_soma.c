#include <stdio.h>

int main(){
  int a, b, c;
  int deu_certo;
  while(deu_certo !=1){
    printf("Digite um numero:");
    deu_certo = scanf("%i", &a);
    while(getchar()!='\n');
    if(deu_certo != 1)
      printf("Errou ai mano\n");
}
  deu_certo = 0;
  while(deu_certo != 1){
   printf("Digite outro numero: ");
   deu_certo = scanf("%i", &b);
   while(getchar()!='\n');
   if(deu_certo != 1)
     printf("Errou ai mano\n");
  }

  c = a + b;
  printf(" %i + %i = %i\n", a,b,c);
  return 0;
}