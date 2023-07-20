#include <stdio.h>
#include <math.h>

int main(void) {

  float X, Y;

  printf("Insira um valor para x:  ");
  scanf("%f", &X);
  
  if ( X <= 1 ) {
    Y = 1;
  }
  else if ( X <= 2 && X > 1){
    Y = 2;
  }
  else if ( X <= 3 && X > 2){
    Y = pow(X, 2);
  }
  else {
    Y = pow(X, 3);
  }
  
  
  printf("Valor de Y:  %.2f\n", Y);


  
  return 0;
}
