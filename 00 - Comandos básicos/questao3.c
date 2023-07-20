#include <stdio.h>
#include <math.h>


int main(void) {
  
  float h, b, p, a, d;

  printf("Insira os valores da base e altura:\t");
  scanf("%f %f", &h, &b);

  p = 2*h + 2*b;
  a = h * b;
  d = sqrt ( (h*h) + (b*b) );
  
  printf("Perímetro:\t%.2f", p);
  printf("\nÁrea:\t%.2f", a);
  printf("\nDiagonal:\t%.2f\n", d);
  
  
  return 0;
}