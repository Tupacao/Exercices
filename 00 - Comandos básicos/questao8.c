#include <stdio.h>



int main(void) {

  int a, b, c;

  printf("Insira dois valores inteiros positivos:\t");
  scanf("%d %d", &a, &b);

  c = a;
  a = b;
  b = c;

  printf("Valores inversos: %d\t%d\n", a, b);
  
  
  
  return 0;
}