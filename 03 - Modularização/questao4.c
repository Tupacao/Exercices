#include <stdio.h>

void Processo (int x, int y, int z){

  int a, b, c;

  a = x + y;
  b = x + z;
  c = z + y;

  if (x < c && y < b && z < a){

    if ( x == y && x == z && y == z){
      
      printf("Triângulo equilátero");
      
    }

    if ( x == y && x != z){

      printf("Triângulo isósceles");
      
    }

    if ( x == z && x != y){

      printf("Triângulo isósceles");
      
    }

    if ( x != y && x != z && y != z){

      printf("Triângulo escaleno");
      
    }
  

    
  }
  else{
    printf("Não encaixa nos requisitos");  
  }



  
}

int main (){

  int a, b, c, n;

  printf("Quantas vezes: ");
  scanf("%d", &n);

  while (n > 0){
  
    printf("\nInsira três valores: ");
    scanf("%d %d %d", &a, &b, &c);
    Processo(a, b, c);
    
    n--;
  }



  return 0;
}
