#include <stdio.h>
#include <stdlib.h>

void Preencher (int *array, int numero)
{

    for (int i = 0; i < numero; i++)
    {
        scanf(" %d", (array + i));
    }
    
}

void Ordenar (int *array, int numero)
{   
    int menor;

    for (int i = 0; i < numero - 1; i++)
    {
        for (int j = 0; j < numero - i - 1; j++)
        {
            if (*(array + j) > *(array + j + 1))
            {
                menor = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = menor;
            }
            
        }
    }
        
}

void Printar (int *array, int numero){

    for (int i = 0; i < numero; i++)
    {
        printf("%d ", *(array + i));
    }
    
}

int main(int argc, char const *argv[])
{

    int *array, numero;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &numero);

    array = malloc(numero*(sizeof(int)));

    printf("Insira os valores do vetor:\n");
    Preencher(array, numero);

    Ordenar(array, numero);

    printf("Valores ordenados:");
    Printar(array, numero);
    
    free(array);
    
    return 0;
}


