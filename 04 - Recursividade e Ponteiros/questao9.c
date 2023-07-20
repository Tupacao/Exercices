#include <stdio.h>

void converteHora(int totalsegundos, int *hora, int *min, int *seg){

 *hora = totalsegundos / 3600;
 *min = (totalsegundos % 3600) / 60 ;
 *seg = (totalsegundos % 3600) % 60;

}



int main(){

    int segundos, hora, min, seg;

    printf("Insira a quantidade de segundos: ");
    scanf("%d", &segundos);

    converteHora(segundos, &hora, &min, &seg);

    printf("%dh : %dmin : %ds", hora, min, seg);

    return 0;
}