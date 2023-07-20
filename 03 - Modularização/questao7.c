#include <stdio.h>

char Valor (int a){

  if (a > 0){
    return 'V'; 
  }
  else{
    return 'F';
  }
  
}


int main(){

  int n, entrada;
  char a = 'V', b;

  printf("Insira quantos números: ");
  scanf("%d", &n);

  while(n > 0){

    printf("\nInsira o número: ");
    scanf("%d", &entrada);
    
    b = Valor(entrada);

    if ( a == b ){
      
      printf("Positivo");
      
    }
    else{
      printf("Negativo");
    }

    n--;
    
  }







  



  return 0;
}
