#include <stdio.h> 

int main() {
  printf("%s\n", "==============================");
  printf("%9s %9s\n", "NOTA","LEGAL");
  printf("%s\n", "==============================");
  printf("%s %9s %s %s\n", "Produto", "Qtd", "Valor", "Unit");
  printf("%-13s %0.3i %10.2f\n", "Camiseta", 2, 39.99);
  printf("%-13s %0.3i %10.2f\n", "Calca", 1, 89.99);
  printf("%-13s %0.3i %10.2f\n", "Meia Social", 3, 19.99);
  printf("%s\n", "==============================");
  printf("%s %23.2f\n", "Total:", 229.85);
  return 0;
}