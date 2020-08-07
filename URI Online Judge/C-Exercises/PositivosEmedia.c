#include <stdio.h>

int main()
{
    float value1, value2, value3, value4, value5, value6,mediaPositiva=0,somaPositivo=0;
    int contadorPositivo = 0; 
    scanf("%f", &value1);
    scanf("%f", &value2);
    scanf("%f", &value3);
    scanf("%f", &value4);
    scanf("%f", &value5);
    scanf("%f", &value6);
    if (value1 > 0)
    {
        contadorPositivo+=1;
        somaPositivo=somaPositivo+value1;
    }
     if (value2 > 0)
    {
        contadorPositivo+=1;
        somaPositivo=somaPositivo+value2;
    }
     if (value3 > 0)
    {
        contadorPositivo+=1;
        somaPositivo=somaPositivo+value3;
    }
     if (value4 > 0)
    {
        contadorPositivo+=1;
        somaPositivo=somaPositivo+value4;
    }
     if (value5 > 0)
    {
        contadorPositivo+=1;
        somaPositivo=somaPositivo+value5;
    }
     if (value6 > 0)
    {
        contadorPositivo+=1;
        somaPositivo=somaPositivo+value6;
    }
    mediaPositiva=somaPositivo/contadorPositivo;
    printf("%i valores positivos\n",contadorPositivo);
    printf("%0.1f\n",mediaPositiva);

    return 0;
}