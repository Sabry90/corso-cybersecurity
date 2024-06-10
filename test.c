#include <stdio.h>
#include <math.h>

// calcolo area trinagolo cerchio quadrato
int main ()  {
    float d;    
    float area_quadrato;
    float area_triangolo;
    float area_cerchio;
    printf("inserisci un numero: \n");
    scanf("%f", &d);
    area_quadrato=d * d;
    area_cerchio=(d/2)*3,14;
    area_triangolo=d*d/2;
    printf("area quadrato = %f\n", area_quadrato ) ;
    printf("area cerchio = %f\n", area_cerchio );
    printf("area triangolo = %f", area_triangolo);
    return 0;
}
