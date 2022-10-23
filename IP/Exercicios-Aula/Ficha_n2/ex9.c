#include <stdio.h>

int getDigit(int *a, int *b, int c)
{
    *b = *a / c;
    *a = *a % c;
}

int main()
{
    int num, dig1, dig2, dig3, result;

    printf("Introduza um numero com 3 digitos: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("\nErro: Numero introduzido nao tem 3 digitos");
    }else {
        getDigit(&num, &dig1, 100);
        getDigit(&num, &dig2, 10);
        dig3 = num;

        result = dig1 + dig2 + dig3;

        printf("\n%d + %d + %d = %d\n", dig1, dig2, dig3, result);
    }
}