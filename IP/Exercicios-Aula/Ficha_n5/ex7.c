#include <stdio.h>

int triangle(int num_linhas)
{
    int i, t, num = num_linhas;
    while (num != 0)
    {
        for (t = num; t < num_linhas; t++)
        {
            printf("  ");
        }
        for (i = 1; i < num; i++)
        {
            printf("%d ", i);
        }
        for (i = num; i > 0; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
        num--;
    }
}

int main()
{
    int value;
    printf("Insira um valor\n");
    scanf("%d", &value);
    triangle(value);
}