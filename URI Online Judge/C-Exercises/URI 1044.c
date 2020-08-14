#include <stdio.h>

int main()
{
    int a, b, resul;
    scanf("%i %i", &a, &b);
    if (a > b)
    {
        resul = a % b;
    }
    else
    {
        resul = b % a;
    }
    if (resul == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}