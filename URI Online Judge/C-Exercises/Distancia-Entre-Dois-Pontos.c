#include <stdio.h>
 
int main() {
 //Programa que calcula a distância entre dois pontos (x2-x1)²+(y²-y1)²
float x1,x2,y1,y2,subtrair,subtrair2,distancia,multiplica,multiplica2;
scanf("%f",&x1);
scanf("%f",&y1);
scanf("%f",&x2);
scanf("%f",&y2);
subtrair=x2-x1;
subtrair2=y2-y1;
multiplica=subtrair*subtrair;
multiplica2=subtrair2*subtrair2;
distancia=sqrt(multiplica+multiplica2);
printf("%0.4f\n",distancia);
 
    return 0;
}