#include <stdio.h>
#include <math.h>

int main(void) {

  char simbolo;

  printf("Insira um símbolo do teclado:  ");
  scanf("%s", &simbolo);

  switch (simbolo){

    case '<':
    printf("SINAL DE MENOR\n");
    break;

    case '>':
    printf("SINAL DE MAIOR\n");
    break;

    case '=':
    printf("SINAL DE IGUAL\n");
    break;
    
    default:
    printf("OUTRO SINAL\n");
    
  }
  
  return 0;
}
