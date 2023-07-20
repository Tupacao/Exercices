#include <stdio.h>

int main (){

  int positivo = 0, negativo = 0, zeros = 0;
  float posF, negF, zerF;
  int a;
  float n, c;

  printf("Insira quantos números serão postos: ");
  scanf("%f", &n);

  c = n;
  
  while (n > 0){
    
    scanf("%d", &a);

    if (a > 0){
      positivo++;
    }
    if (a < 0){
      negativo++;
    }
    if (a == 0){
      zeros++;
    }
    
    n--;
  }

  posF = (positivo / c) * 100.00;
  negF = (negativo / c) * 100.00;
  zerF = (zeros / c) * 100.00; 

  printf("%.0f POSITIVOS", posF);
  printf("\n%.0f NEGATIVOS", negF);
  printf("\n%.0f ZEROS", zerF);
  

  return 0;
}
