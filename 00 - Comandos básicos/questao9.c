#include <stdio.h>



int main(void) {

  float n, d;
  float f;

  printf("Insira os valores do numerador e denominador:\t");
  scanf("%f %f", &n, &d);

  f = n / d;

  printf("Valor da fraçaõ:\t%f", f); 
  
  return 0;
}