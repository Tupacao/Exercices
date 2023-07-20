#include <stdio.h>

int main(void) {
  
  int n, c, d, u, n2;

  printf("Insira um número de 3 algarismos:\t");
  scanf("%d", &n);
  
  c = n / 100;
  d = n / 10 % 10;
  u = n % 10;

  n2 = (u*100) + (d*10) + c;

  printf("\nNúmero inverso = %d\t\n", n2);
  
  
  
  
  
  
  return 0;
}