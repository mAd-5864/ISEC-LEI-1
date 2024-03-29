#include <stdio.h>

int main()
{

    float peso;
    float peso_max;
    float peso_total = 0;
    int i = 0;
    float media;

    while (peso >= 0)
    {
        printf("Introduz peso em kg: ");
        scanf("%f", &peso);
        printf("Peso: %.2fkg\n", peso);

        if (peso < 60 && peso > peso_max)
        {
            peso_max = peso;
        }
        else
        {
            peso_total = peso_total + peso;
            i++;
        };
        printf("Max: %.0fkg\n", peso_max);
        printf("Total: %.0fkg\n", peso_total);
    };
    media = peso_total / i;
    printf("\nA pessoa mais pesada abaixo de 60kg pesa: %.0fkg\n", peso_max);
    printf("A media de peso das pessoas acima de 60kg é: %.2fkg\n", media);
}