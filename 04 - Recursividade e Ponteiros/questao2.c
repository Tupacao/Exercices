#include <stdio.h>

int Contador (int n){


    if (n == 0){
        return 0;
    }
    else {
        return n % 10 + Contador(n / 10);
    }

}




int main (){

    int n, a;

    printf("Insira um nu,ro: ");
    scanf("%d", &n);

    a = Contador(n);

    printf("Soma: %d", a);

    return 0;
}