#include <stdio.h>

float Calculo (int x){

  float s = 0, a;

  a = (x*2.0 + 1.0) / (x +3.0);

  s+=a;

  return s;
  
}

int main (){

  int x;
  float y;

  printf("Insira um valor: ");
  scanf("%d", &x);
  
  y = Calculo(x);

  printf("Valor do cálculo: %f", y);

  return 0;
}
