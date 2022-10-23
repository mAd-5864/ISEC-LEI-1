#include <stdio.h>

int main()
{

    float freq1, freq2, tp, notaFinal;

    printf("Introduza a nota da 1a frequencia: ");
    scanf("%f", &freq1);
    printf("Introduza a nota da 2a frequencia: ");
    scanf("%f", &freq2);
    printf("Introduza a nota do trabalho pratico: ");
    scanf("%f", &tp);

    if (freq1 > 20 || freq2 > 20 || tp > 100)
    {
        printf("\nErro: notas invalidas");
    }
    else
    {
        freq1 *= 0.4;
        freq2 *= 0.4;
        tp = (tp / (float)5) * 0.2;

        notaFinal = freq1 + freq2 + tp;

        printf("\nNota final: %.1f valores", notaFinal);
    }
}