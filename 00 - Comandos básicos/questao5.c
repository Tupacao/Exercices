#include <stdio.h>
#include <math.h>


int main(void) {
  
  float c1, c2, h;

  printf("Insira os valores dos catetos:\t ");
  scanf("%f %f", &c1, &c2);

  h = sqrt( pow(c1, 2) + pow(c2, 2) );


  printf("\nHipotenusa:\t%.2f", h);
  
  
  return 0;
}