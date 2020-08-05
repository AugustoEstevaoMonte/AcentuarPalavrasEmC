#include <stdio.h>
 
int main() {
 
int codePiece1,numberOfPieces,codePiece2,numberOfPiece2;
double value,value2,totalValue;
scanf("%i",&codePiece1); 
scanf("%i",&numberOfPieces); 
scanf("%lf",&value); 
 scanf("%i",&codePiece2);
scanf("%i",&numberOfPiece2);
scanf("%lf",&value2);
totalValue=(value2*numberOfPiece2+value*numberOfPieces);
printf("VALOR A PAGAR: R$ %0.2lf\n",totalValue);
    return 0;
}
