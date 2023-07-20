#include <stdio.h>



int main(void) {

  int h, m, tempototal;

  printf("Insira a hora e os minutos:\t");
  scanf("%d %d", &h, &m);

  h = h * 60;
  tempototal = h + m;

  printf("Tempo gasto em minutos:\t%d\n", tempototal);
  
  return 0;
}