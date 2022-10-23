#include <stdio.h>

int getUnit(int *a, int *b, int c)
{
    *b = *a / c;
    *a = *a % c;
}

int main()
{
    int tempo, horas, minutos, segundos;

    printf("Introduza o tempo em segundos: ");
    scanf("%d", &tempo);

    if (tempo < 0) {
        printf("\nErro: Valor intruduzido nao e valido");
    }else {
        getUnit(&tempo, &horas, 3600);
        getUnit(&tempo, &minutos, 60);
        segundos = tempo;

        printf("\n%dh:%dm:%ds\n", horas, minutos, segundos);
    }
}