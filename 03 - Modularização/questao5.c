#include <stdio.h>

void Processo (int x){

  if ( x <= 39){
    printf("F");
  }
  if ( x >= 40 && x <= 59){
    printf("E");
  }
  if (x >= 60 && x <= 69){
    printf("D");
  }
  if (x >= 70 && x <= 79){
    printf("C");
  }
  if (x >= 80 && x <= 89){
    printf("B");
  }
  if (x >= 90){
    printf("A");
  }
  
  
}

int main(){

  int n, a;

  printf("Número de alunos: ");
  scanf("%d", &n);

  while (n > 0){

    printf("\nInsira a media das notas: ");
    scanf("%d", &a);
    Processo(a);

    n--;
    
  }

  
  return 0;
}
