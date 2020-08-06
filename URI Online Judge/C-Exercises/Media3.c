#include <stdio.h>

int main()
{

    double n1, n2, n3, n4, media, notaExame, mediaNova;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    printf("Media: %0.1lf\n", media);
    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 || media <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &notaExame);
        printf("Nota do exame: %0.1lf\n", notaExame);
        mediaNova = (media + notaExame) / 2;
        if (mediaNova >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1lf\n",mediaNova);
        }
        else if(media<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1lf\n",mediaNova);
        }
    }

    return 0;
}