#include <stdio.h>
#include <unistd.h>


void Prefeitura (){

  int filhos;
  float media, salario;
  char cont;
  float filhosval = 0, salarioval = 0;
  
  do{
    
      printf("\nDeseja continuar?: ");
      scanf(" %c", &cont);
    
    if( cont == 'N'){
  
      printf("Calculando a media .........\n");
      sleep(3);
      
    }
    else{
      
      
      printf("Número de filhos:  ");
      scanf("%d", &filhos);

      filhosval+=filhos;
    
      printf("Salario:  ");
      scanf("%f", &salario);

      salarioval+=salario;
    }
    
  } while(cont == 'S');
  
  media = salarioval / filhosval;
  
  printf("\nMedia salarial = R$%.2f", media);
    
  
}



int main(){

  Prefeitura();



  return 0;
}










