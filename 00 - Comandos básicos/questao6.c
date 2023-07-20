#include <stdio.h>


int main(void) {
  
  int r, t1, t10;

  printf("Insira a razão e o primeiro termo:\t");
  scanf("%d %d", &r, &t1);

  t10 = t1 + (r*9);

  printf("\nDecimo termo:\t%d\n", t10);
  
  
  return 0;
}