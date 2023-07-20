#include <stdio.h>

int main(void) {
  //para parar de ser inserido valores é preciso entrar com o número 3 
  
  FILE *read, *write;
  int entrada = 0, matricula, telefone;
  char letras;

  read = fopen("entrada.txt", "r");
  write = fopen("saida.txt", "w");

  while (entrada != 3){

    switch (entrada){

      case 1:
        printf("Insira a matricula e o telefone: ");
        scanf("%d %d", &matricula, &telefone);
        fprintf(write, "%d %d\n", matricula, telefone);
      break;

      case 2:
        while((letras = fgetc(read)) != EOF){
          fprintf(write, "%c", letras);
          
        }
      break;
    }

    printf("1-Pelo Teclado / 2-Pelo arquivo / 3-Parar: ");
    scanf("%d", &entrada);
    
  }




  fclose(read);
  fclose(write);


  
  return 0;
}