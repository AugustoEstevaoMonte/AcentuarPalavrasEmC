#include <stdio.h>
 
int main() {
 
int x;
float y,total;
//Distância total percorrida
scanf("%i",&x);
//Total de combustivel gasto
scanf("%f",&y);
total=x/y;
printf("%0.3f km/l\n",total);
    return 0;
}