#include <stdio.h>
#include <stdlib.h>

void Preencher (int *array, int numero)
{

    for (int i = 0; i < numero; i++)
    {
        scanf(" %d", (array + i));
    }

}

int Somar (int *array, int numero)
{

    int soma = 0;

    for (int i = 0; i < numero; i++)
    {
        soma += *(array + i);
    }
    
    return soma;
}

int main()
{
    
    int *array, numero, soma;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &numero);

    array = malloc(numero*sizeof(int));
    
    printf("Insira os valores do vetor:\n");
    Preencher(array, numero);

    soma = Somar(array, numero);

    printf("A soma dos termos eh = %d", soma);

    free(array);
    
    return 0;
}