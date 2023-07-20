#include <stdio.h>

int main(void) {
  
  float salario, quantidadekw, valorkw, conta, desconto;

  printf("Insira o seu sálario:\t");
  scanf("%f", &salario);

  salario = salario / 7;

  printf("Insira o gasto de kw:\t");
  scanf("%f", &quantidadekw);

  valorkw = salario / 100 ;
  conta = valorkw * quantidadekw;
  desconto = conta * 0.9;

  printf("Valor do kW: \t %.2f\n", valorkw);
  printf("Valor da conta: \t %.2f", conta);
  printf("\nValor com desconto: \t %.2f\n", desconto);
  
  
  
  
  
  return 0;
}