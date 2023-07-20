#include <stdio.h>

int main (){

  int positivo = 0, negativo = 0, zeros = 0;
  int a, n;

  printf("Insira quantos números serão postos: ");
  scanf("%d", &n);

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


  printf("%d POSITIVOS", positivo);
  printf("\n%d NEGATIVOS", negativo);
  printf("\n%d ZEROS", zeros);
  

  return 0;
}
