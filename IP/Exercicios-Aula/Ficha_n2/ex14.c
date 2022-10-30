#include <stdio.h>

struct data {
    int* dia;
    int* mes;
    int* ano;
};

int main()
{
    struct data date;
    

    printf("Introduza uma data:");
    scanf("%.2d/%.2d/%.2d\n", &date.dia, &date.mes, &date.ano);

    printf("Dia: %.2d\n", date.dia);
    printf("Mes: %.2d\n", date.mes);
    printf("Ano: %.2d\n", date.ano);
    printf("Data: %.2d/%.2d/%.2d\n", date.dia, date.mes, date.ano);
}