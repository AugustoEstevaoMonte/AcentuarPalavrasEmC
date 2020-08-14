#include <stdio.h>
#define MAX 50
int main()
{

    char pala[MAX], pala2[MAX], pala3[MAX];
    fflush(stdin);
    gets(pala);
    fflush(stdin);
    gets(pala2);
    fflush(stdin);
    gets(pala3);
    if (strcmp(pala, "vertebrado") == 0)
    {
        if (strcmp(pala2, "ave") == 0)
        {
            if (strcmp(pala3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if (strcmp(pala3, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }

        if (strcmp(pala2, "mamifero") == 0)
        {
            if (strcmp(pala3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if (strcmp(pala3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(pala, "invertebrado") == 0)
    {
        if (strcmp(pala2, "inseto") == 0)
        {
            if (strcmp(pala3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if (strcmp(pala3, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(pala2, "anelideo") == 0)
        {
            if (strcmp(pala3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if (strcmp(pala3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}