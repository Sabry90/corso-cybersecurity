#include <stdio.h>
void leggivettore (int *ptr){
for (int i=0; i<10 ; i++){
printf (" inserisci un numero:\n");
scanf ("%d", ptr );
ptr++;
}
}

void scrivivettore (int *ptr) {
for (int i=0; i<10; i++) {
printf ("elemento %d del vettore:%d\n", i, *ptr );
ptr++;

}

}

