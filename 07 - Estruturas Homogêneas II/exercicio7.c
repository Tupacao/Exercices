#include <stdio.h>
#include <stdlib.h>

void Preencher (int *vetor, int numero)
{

    printf("Insira os valores do vetor:\n");

    for (int i = 0; i < numero; i++)
    {
        scanf(" %d", (vetor + i));
    }

}

void Printar (int *vetor, int numero)
{

    for (int i = 0; i < numero; i++)
    {
        printf("%d ", *(vetor + i));
    }

}

void Inverter(int *vetor, int numero)
{
    int ultimo;

    for (int i = 0; i < numero / 2; i++)
    {
        ultimo = *(vetor + (numero -1 -i));
        *(vetor + (numero -1 -i)) = *(vetor + i);
        *(vetor + i) = ultimo;
    }
    
}

int main()
{
    int *vetor, numero;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &numero);

    vetor = malloc(numero*sizeof(int));

    Preencher(vetor, numero);

    Inverter(vetor, numero);

    Printar(vetor, numero);

    free(vetor);

    return 0;
}
