#include <stdio.h>

int main(void) {

  int vmax, vcarro, diferença, multa;

  printf("Insira a velocidade máxima da avenida:  ");
  scanf("%d", &vmax);

  printf("Insira a velocidade do veículo:  ");
  scanf("%d", &vcarro);

  if ( vcarro <= vmax){
     printf("Motorista respeitou a lei.\n"); 
  }
  else if ( vcarro > vmax){
    
    diferença = vcarro - vmax;
    
    if ( diferença == 10 ){
      multa = 50;
    }
    else if ( diferença > 10 && diferença <= 30){
      multa = 100;
    }
    else {
      multa = 200;
    }

    printf("Multa de %d\n", multa);
  }
  else { 
    printf("Não tem multa\n");
  }


  
  return 0;
}
