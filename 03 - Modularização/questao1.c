#include <stdio.h>

void MediaAluno (int a, int b, int c, char d){

  float media, mediapond;
  
  if (d == 'A'){

    media = (a + b + c) / 3.0;
    printf("\nA media eh: %.2f", media);
  }
  else{ 

    mediapond = ((5*a) + (3*b) + (2*c)) / 10.0;
    printf("\nO valor da meia ponderada é: %.2f", mediapond);
    
  }


  
}




int main(){

  int a, b, c, n, f = 1;
  char letra;
  printf("Quantos alunos:  ");
  scanf("%d", &n);

  while(n > 0){
    
    printf("\nInsira as notas do aluno %d:  ", f);
    scanf("%d %d %d", &a, &b, &c);

    printf("\nInsira a letra %d:  ", f);
    scanf(" %c", &letra);
    MediaAluno(a, b, c, letra);

    n--;
    f++;
  }
  




  return 0;
}










