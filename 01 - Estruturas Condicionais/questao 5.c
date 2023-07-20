#include <stdio.h>

int main(void) {

  float d = 200, valor_promocional, ocupação, arrecadação;
  float ocupação2, arrecadação2, d2 = 200, diferença;
  
  //a) o valor da diária promocional;
  
  d = d * 0.75;

  printf("Valor promocional da diária: %.2f\n", d);
  
  //b) o valor total arrecadado com 80% de ocupação e diária promocional;

  ocupação = 80 * 0.8;
  
  arrecadação = ocupação * d; 
  printf("Promocional com 80 por cento ocupado: %.2f\n", arrecadação);

  //c) o valor total arrecadado com 50% de ocupação e diária normal;

  ocupação2 = 80 * 0.5;
  
  arrecadação2 = ocupação2 * d2;
  printf("Normal com 50 por cento ocupado: %.2f\n", arrecadação2);
  
  //d) a diferença entre estes dois valores.

  diferença = arrecadação - arrecadação2;
  printf("Diferença entre os valores: %.2f\n", diferença);
  
  return 0;
}
