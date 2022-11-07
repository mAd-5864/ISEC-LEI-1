#include <stdio.h>

int main()
{
    int min, max, num, swap;

    printf("\nInsira um valor minimo: ");
    scanf("%d", &min);
    printf("\nInsira um valor maximo: ");
    scanf("%d", &max);

    if (max < 0 || min < 0)
    {
        printf("Valores invalidos");
    }
    else if (min > max)
    {
        swap = max;
        max = min;
        min = swap;
    }
    while (min < max)
    {
        if ((min % 5 == 0) && (min % 3 != 0))
        {
            printf("%d\n", min);
        }
        min++;
    }
    return 0;
}