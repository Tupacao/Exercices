#include <stdio.h>
#include <stdlib.h>

void Completar (int *array, int numero)
{

    int n;

    for (int i = 0; i < numero; i++)
    {
        scanf("%d", (array + i));
    }
    
}

void Printar (int *array, int numero)
{
    
    for (int i = 0; i < numero; i++)
    {
        printf("%d ", *(array+i));
    }

}


int main()
{
    int numero, *array;

    scanf("%d", &numero);

    array = malloc(numero*(sizeof(int)));

    Completar(array, numero);
    Printar(array, numero);

    free(array);
    
    return 0;
}