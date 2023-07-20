#include <stdio.h>
#include <math.h>

int main(void) {

  float salario;
  char letra;
  
  printf("Insira um A/B/C:  ");
  scanf("%s", &letra);

  
  printf("Insira seu sálario:  ");
  scanf("%f", &salario);


  switch (letra){ 
    case 'A':
      salario = salario * 1.08;
      printf("Novo sálario:  %.2f\n", salario);
    break;

    case 'B':
      salario = salario * 1.11;
      printf("Novo sálario:  %.2f\n", salario);
    break;

    case 'C':
      if(salario <= 1000){
        salario = salario + 350;
        printf("Novo sálario:  %.2f\n", salario);
      }
      else {
        salario = salario + 200;
        printf("Novo sálario:  %.2f\n", salario);
      }
    break;
    
    default: 
    printf("Algo está errado amigo, sorry :_:");
  }
  
  
  return 0;
}
