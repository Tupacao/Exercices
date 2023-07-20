#include <stdio.h>
#include <stdlib.h>

void Inserir (float vetor[10]){
    
    float valor;

    for (int i = 0; i < 10; i++){
        printf("Insira um valor:");
        scanf("%f", &valor);
        vetor[i] = valor;
    }

}

void Testar (float vetor[10], float vetor2[], int *tam){

    int indice = 0;

    for (int i = 0; i < 10; i++){
        if (vetor[i] < 0){
            vetor2[indice] = vetor[i];
            indice++;
            (*tam)++;
        }
    }

}

void Printar (float vetor[10], int tam){
    
    for (int i = 0; i < tam; i++){
        printf("%.0f  ", vetor[i]);
    }
    
}

int main(){
    
    float vetor1[10], vetor2[10];
    int tamanho = 0;

    Inserir(vetor1);
    Testar(vetor1, vetor2, &tamanho);
    Printar(vetor2, tamanho);

    return 0;
}
