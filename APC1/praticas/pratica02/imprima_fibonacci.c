#include <stdio.h>

int main(){
  printf("%8i %1i\n", 1, 1);
  printf("%7i %1i %1i\n", 1, 2, 1);
  printf("%5i %1i %1i %1i %1i\n", 1, 2, 3, 2, 1);
  printf("%3i %1i %1i %1i %1i %1i %1i \n", 1, 2, 3, 5, 3, 2, 1);
  printf("%i %1i %1i %1i %1i %1i %1i %1i %1i\n", 1, 2, 3, 5, 8, 5, 3, 2, 1);
  return 0;
}