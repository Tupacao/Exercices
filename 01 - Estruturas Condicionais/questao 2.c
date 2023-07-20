#include <stdio.h>

int main(void) {

    int a, b, c;
  
  printf("Insira dois valores inteiros positivos:\t ");
  
  scanf("%d %d", &a, &b);

  c = a + b;
  
    if (c >= 10) {
      c = c + 5;
      }
        else { 
          c = c + 7;
          }
            printf("Novo valor de c: %d\n", c);
  
  
  
  

  return 0;
}