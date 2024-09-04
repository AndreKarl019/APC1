#include <stdio.h>

int main(){

  long int ISBN = 0;
  int NUM_PAGINAS = 0;
  float preco = 0;
  int publicado = 0;
  printf("ISBN: %0.13li\n", ISBN);
  printf("Num. Paginas: %0.3i\n", NUM_PAGINAS);
  printf("Preco: %07.2f\n", preco);
  printf("Publicado: %0.4i\n", publicado);

  return 0;
}