#include <stdio.h>
 
int main() {
 
int a,b,c,d;
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);
scanf("%i",&d);
if(b>c && d>a &&c+d>a+b && c>0 && d>0 && a%2==0){
    printf("Valores aceitos\n");
}else{
    printf("Valores nao aceitos\n");
}
    return 0;
}