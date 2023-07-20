#include <stdio.h>

int Fatora ( int x){

  int resp;
  
  if (x == 1){
    return resp = 1;
  }
  if (x > 0){
    return resp = x * Fatora(x - 1);
  }
  
  return resp;
  
}

float Soma ( int x){

  float S = 0;
  
  for(int i = 0; i <= x ; i++){
  
    S += 1.0 / Fatora(i);
  }
  
  return S;
}


int main(){

  int n, a;
  
  printf("Insira um valor: ");
  scanf("%d", &n); 

  a = Soma(n);

  printf("Valor do cálculo: %d", a);
  
  return 0;
}
