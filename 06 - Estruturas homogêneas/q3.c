#include <stdio.h>
#include <stdlib.h>

void Preencher (int vetor[10]){

    int valor;

    for(int i = 0; i < 10; i++){
        scanf("%d", &valor);
        vetor[i] = valor;
    }

}

void Intercalar (int X[10], int Y[10], int Z[20]){

    for (int i = 0, j = 0, m = 0, n = 0; i < 20; i++){

        if ((i % 2) == 0){
            Z[j] = Y[m];
            j++;
            m++;
        }
        else{
            Z[j] = X[n];
            j++;
            n++;
        }

    }

}

void Printar (int vetor[20]){

    for (int i = 0; i < 20; i++){
        printf("%d  ", vetor[i]);
    }
    
}

int main(){
    
    int X[10], Y[10], Z[20];

    Preencher(X);
    Preencher(Y);
    Intercalar(X,Y,Z);
    Printar(Z);

    return 0;
}
