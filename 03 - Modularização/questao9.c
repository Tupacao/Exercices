#include <stdio.h>

float Notas (int x){

  int aprovados = 0, nota;
  float media;
  char n = 'S';

  do{


    printf("Insira a nota do aluno: ");
    scanf("%d", &nota);
    
    if (nota >= 6){
      aprovados+= nota;
    }

    printf("Deseja continuar S/N: ");
    scanf(" %c", &n);

    
  }while (n == 'S');

  media = aprovados / (float) x;

  return media;
  
}

int main (){
  
  int a;
  float b;

  printf("Insira a quantidade de alunos: ");
  scanf("%d", &a);

  b = Notas (a);

  printf("Media das notas: %.2f", b);
  
  return 0;
}
