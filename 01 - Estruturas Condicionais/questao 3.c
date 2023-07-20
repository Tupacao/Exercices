#include <stdio.h>

int main(void) {

  int nasceu, idade;
  char aniversario;

  printf("Insira o ano de seu nascimento:   ");
  scanf("%d", &nasceu);
  
  idade = 2023 - nasceu;

  printf("Você já fez aniversário este ano?(S/N):   ");
  scanf("%s", &aniversario);
  
  if (aniversario == 'n' ){
    idade--;
    }

  if (idade >= 18 ) {
    printf("Pode dirigir\n");
  }
  else {
    printf("Não pode dirigir\n");
  }
  printf("Idade:  %d\n", idade);
  return 0;
}
