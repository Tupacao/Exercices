#include <stdio.h>
  
int Divisao (int n, int d){
    
    if ( n <= 0){
        return 0; 
    }
    else {
        return 1 + Divisao (n - d, d); 
    }
}


int main (){

    int n, d, a;  

    printf("Insira o numerador e denominador: ");
    scanf("%d %d", &n, &d);

    a = Divisao(n, d);

    printf("Valor da divisao: %d", a);
    return 0;
}