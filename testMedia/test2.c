#include <stdio.h>

int main () {
    float n1;
    float n2;
    float n3;
    float media;
    printf("inserisci il primo numero: \n");
    scanf("%f", &n1);
    printf("inserisci il secondo numero: \n");
    scanf("%f", &n2);
    printf("inserisci il terzo numero: \n");
    scanf("%f", &n3);
    media= (n1+n2+n3)/3;
    printf("media con due cifre decimali = %.2f\n", media) ;
    printf("media arrotondata = %.0f\n", media ) ;
    return 0;

}
