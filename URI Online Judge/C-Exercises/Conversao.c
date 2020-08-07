#include <stdio.h>
 
int main() {
 
int n,min,segTot,horas,segundos;
scanf("%i",&n);
segTot=3600;
horas=n/segTot;
min=(n-(segTot*horas))/60;
segundos=(n-(segTot*horas)-(min*60));
printf("%i:%i:%i\n",horas,min,segundos);

    return 0;
}