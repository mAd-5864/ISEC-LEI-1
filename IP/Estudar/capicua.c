#include <stdio.h>

int main()
{
    int num, resto, original, invertido=0;

    printf("Insira uma capicua: ");
    scanf("%d", &num);

    printf("Num: %d\n", num);
    original = num;
    while (num != 0)
    {
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10;
    }
    printf("Invertido: %d\n", invertido);

    if (original == invertido)
    {
        printf("%d e uma capicua", original);
    }
    else
    {
        printf("%d nao e uma capicua", original);
    }
}