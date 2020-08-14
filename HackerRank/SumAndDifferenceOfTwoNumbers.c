#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int num,num2,sumOfIntegers,DifferenceOfIntegers;
float num3,num4,sumOfFloat,DifferenceOfFloat;
scanf("%i %i",&num, &num2);
scanf("%f %f",&num3,&num4);
sumOfIntegers=num+num2;
DifferenceOfIntegers=num-num2;
sumOfFloat=num3+num4;
DifferenceOfFloat=num3-num4;
printf("%i %i\n",sumOfIntegers,DifferenceOfIntegers);
printf("%0.1f %0.1f\n",sumOfFloat,DifferenceOfFloat);
    
    return 0;
}