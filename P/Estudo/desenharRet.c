#include <stdio.h>

void main()
{
    typedef struct retangulo ret;
    struct retangulo
    {
        int alt, larg;
    };

    ret r;
    r.alt = 5;
    r.larg = 8;

    for (int i = 0; i <= r.larg; i++)
    {
        printf("--");
    }
    printf("\n");
    for (int i = 1; i < r.alt; i++)
    {
        printf("| ");
        for (int j = 1; j < r.larg; j++)
        {
            printf("  ");
        }
        printf(" |\n");
    }
    for (int i = 0; i <= r.larg; i++)
    {
        printf("--");
    }
}