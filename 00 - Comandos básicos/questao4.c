#include <stdio.h>
#include <math.h>


int main(void) {
  
  float r, p, a, pi = 3.1415;

  printf("Insira o raio do círculo:\t");
  scanf("%f", &r);

  p = 2 * pi * r ; 
  a = pi * pow(r, 2);
  
  printf("Perímetro:\t%.2f", p);
  printf("\nÁrea:\t%.2f\n", a);
  
  
  return 0;
}