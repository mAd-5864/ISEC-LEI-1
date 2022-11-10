#include <stdio.h>

float squareRoot(float n)
{
    return n * n;
}

int main()
{
    float num = 1, square;
    do
    {
        printf("\nInsira um numero: ");
        scanf("%f", &num);
        if (num != 0)
        {
            square = squareRoot(num);
            printf("\n%.2f ao quadrado = %.2f", num, square);
        }
    } while (num != 0);
}
