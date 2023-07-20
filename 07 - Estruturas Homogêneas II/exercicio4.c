#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Contador (char *array, int numero, int *vogais, int *consoantes)
{

    for (int i = 0; i < numero; i++)
    {
        if (*(array+i) == 'a' || *(array+i) == 'e' || *(array+i) == 'i' || *(array+i) == 'o' || *(array+i) == 'u' || *(array+i) == 'A' || *(array+i) == 'E' || *(array+i) == 'I' || *(array+i) == 'O' || *(array+i) == 'U')
        {
            (*vogais)+=1;
        }
        else
        {
            (*consoantes)+=1;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    char *array, numero, vogais = 0, consoantes = 0;

    array = malloc(100*sizeof(int));

    scanf("%[^\n]", array);

    numero = strlen(array); 
    
    Contador(array, numero, &vogais, &consoantes);

    printf("Quantidade de vogais = %d\nQuantidade de consoantes = %d", vogais, consoantes);

    free(array);

    return 0;
}