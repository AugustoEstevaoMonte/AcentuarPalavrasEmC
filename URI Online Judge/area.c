#include <stdio.h>
 
int main() {
 double a,b,c,areaOfTriangle,areaOfCircle,pi=3.14159,areaOfTrapezoid,areaOfSquare,areaOfRectangle;
 scanf("%lf",&a);
 scanf("%lf",&b);
 scanf("%lf",&c);
 areaOfTriangle=(a*c/2);
 areaOfCircle=(pi*pow(c,2));
 areaOfTrapezoid=(c*(a+b)/2);
 areaOfSquare=pow(b,2);
 areaOfRectangle=a*b;
 printf("TRIANGULO: %0.3lf\n",areaOfTriangle);
 printf("CIRCULO: %0.3lf\n",areaOfCircle);
 printf("TRAPEZIO: %0.3f\n",areaOfTrapezoid);
 printf("QUADRADO: %0.3lf\n",areaOfSquare);
 printf("RETANGULO: %0.3lf\n",areaOfRectangle);

 
    return 0;
}