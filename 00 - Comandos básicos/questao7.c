#include <stdio.h>
#include <math.h>


int main(void) {
  
  int r, t1, t5;

  printf("Insira a razão e o primeiro termo:\t");
  scanf("%d %d", &r, &t1);

  t5 = t1*pow(r, 4);

  printf("\nValor do quinto termo:\t%d\n", t5);

  
  
  return 0;
}