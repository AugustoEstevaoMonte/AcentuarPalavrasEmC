#include <stdio.h>

int main()
{

    double a, b, c, delta, x1, x2;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    delta = (b * b - 4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (x1 < 0 && x2 < 0)
    {

        printf("R1 = %0.5lf\n", x1);
        printf("R2 = %0.5lf\n", x2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}