#include <stdio.h>

int Resto (int n, int d){


    if ( n < d){
        return n;
    }
    else {
        return Resto(n - d, d); 
    }
}


int main(){

    int n, d, a;

    printf("Insira o numerador e o denominador: ");
    scanf("%d %d", &n, &d);

    a = Resto(n, d);

    printf("Resto da divisao: %d", a);

    return 0;
}




