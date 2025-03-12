#include <stdio.h>

int main(){
  long int matricula = 00000000;
  int idade = 99;
  float altura = 9.90;
  float peso = 999.0;
  char sexo = 'F';
  printf("Matricula: %0.8li\nIdade: %i anos\nAltura: %.2f m\nPeso: %.1f kg\nSexo: %c\n", matricula, idade, altura, peso, sexo);
  return 0;
}