#include <stdio.h>

void Processo( int a, int b, int c){
  
  if (a < b && a < c){
    if( b < c ){
      printf("\nOrdem crescente %d %d %d", a, b, c);
    }
    else{
      printf("\nOrdem crescente %d %d %d", a, c, b);
    }
  }
  else if (b < a && b < c){
    if( a < c){
      printf("\nOrdem crescente %d %d %d", b, a, c);
    }
    else{
      printf("\nOrdem crescente %d %d %d", b, c, a);
    }
  }
  else{
    if( b < a ){
      printf("\nOrdem crescente %d %d %d", c, b, a);
    }
    else{
      printf("\nOrdem crescente %d %d %d", c, a, b);
    }
  }

  
}


int main(){

  int a, b, c, n;

  printf("Número de conjuntos: ");
  scanf("%d", &n);


  while (n > 0){
    printf("\nInsira os números: ");
    scanf("%d %d %d", &a, &b, &c);
    Processo(a, b, c);
    n--;
  }
  
  return 0;
}









