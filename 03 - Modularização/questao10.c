#include <stdio.h>

char Nota (int x){

  if( x >= 5 && x <= 7){
    return 'F';
  }
  if( x >= 8 && x <= 10){
    return 'E';
  }
  if( x >= 11 && x <= 13){
    return 'D';
  }
  if( x >= 14 && x <= 15){
    return 'C';
  }
  if( x >= 16 && x <= 17){
    return 'B';
  }
  if( x >= 18){
    return 'A';
  }

}

int main (){

  int a;
  char b;
  
  printf("Insira a idade do navegador: ");
  scanf("%d", &a);

  b = Nota (a);

  printf("Nota obtida: %c", b);

  return 0;
}
