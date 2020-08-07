#include <stdio.h>

int main()
{

    double salario, imposto;
    scanf("%lf", &salario);
    if (salario == 0.00 || salario <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salario > 2000.00 || salario <= 3000.00)
    {
        imposto = 0.08;
        salario = salario * imposto;
        printf("R$ %0.2lf\n", salario);
    }
    else if (salario > 3000.00 && salario <= 4500.00)
    {
        imposto = 0.18;
        salario = salario * imposto;
        printf("R$ %0.2lf\n", salario);
    } else if(salario>4500.00){
        imposto=0.28;
        printf("R$ %0.2lf\n", salario);
    }

    return 0;
}