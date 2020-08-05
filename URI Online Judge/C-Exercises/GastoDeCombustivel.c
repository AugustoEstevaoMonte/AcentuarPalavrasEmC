#include <stdio.h>
 
int main() {
 
int horas, velocidadeMedia;
float gasto,distancia;
scanf("%i",&horas);
scanf("%i",&velocidadeMedia);
distancia=velocidadeMedia*horas;
gasto=distancia/12;
printf("%0.3f\n",gasto);


 
    return 0;
}