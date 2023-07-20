#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *vetor = malloc(100*sizeof(char));

    scanf("%s", vetor);

    strrev(vetor);

    printf("%s", vetor);

    return 0;
}
