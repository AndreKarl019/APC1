#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
  double a, b, c; 
  a = PI/180;
  c = sin(a*b);
  
  printf("Digite um angulo:");
  scanf("%lf", &b);
  a = b*PI/180.0;
  c = sin(a);
  printf("o seno de %.0f é %lf\n", b, c);
  return 0;
    }