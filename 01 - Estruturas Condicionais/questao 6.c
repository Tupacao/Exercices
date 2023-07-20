#include <stdio.h>

int main(void) {

  float a, b, x;

  printf("Insira valores para a e b:  ");
  scanf("%f %f", &a, &b);

  if (b > 0) { 
    b = -b; 
  }
  
  x = b / a;

  if( a < 0 && b > 0) {
    x = + x;
  }
  
  printf("Raiz da equação: %.2f\n", x);


  
  return 0;
}
