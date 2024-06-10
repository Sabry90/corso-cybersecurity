#include <stdio.h>
#include <math.h>

#ifndef M_PI 
#define M_PI 3.14
#endif

// calcolo area trinagolo cerchio quadrato
int main ()  {
    float d;    
    float area_quadrato;
    float area_triangolo;
    float area_cerchio;
    float raggio;
    printf("inserisci un numero: \n");
    scanf("%f", &d);
    area_quadrato=d * d;
    raggio=d/2;
    area_cerchio=raggio*raggio*M_PI;
    area_triangolo=d*d/2;
    printf("area quadrato = %.2f\n", area_quadrato ) ;
    printf("area cerchio = %.2f\n", area_cerchio );
    printf("area triangolo = %.2f", area_triangolo);
    return 0;
}
