#include <stdio.h>
#include "ponto.h"
#include "retangulo.h"

int main()
{

    ret tab[10] = {{{1, 1}, 10, 5},
                   {{2, 3}, 2, 6},
                   {{-1, 4}, 7, 2}};

    int total = 3;

    addRet(tab, &total);
    printV(tab, total);

    duplicaAltLarg(tab, total);
    printV(tab, total);

    printf("Existem %d retangulos no quadrante 1\n", quadrante1(tab, total));

    return 0;
}

void printV(ret tab[], int nRet)
{
    int i;

    printf("Existem %d retangulos na tabela\n", nRet);
    for (i = 0; i < nRet; i++)
    {
        printf("R. %d\n", i);
        printRet(tab[i]);
    }
}

int addRet(ret tab[], int *total)
{
    if (total < 10)
    {
        initRet(&tab[*total]);

        ret novoRetangulo;
        initRet(&novoRetangulo);
        tab[*total] = novoRetangulo;

        (*total)++;
        return 1;
    }

    return 0;
}

void printQuadrados(ret tab[], int total)
{
    for (int i = 0; i < total; i++)
    {
        if (tab[i].alt == tab[i].larg)
        {
            printRet(tab[i]);
        }
    }
}

void duplicaAltLarg(ret tab[], int total)
{
    for (int i = 0; i < total; i++)
    {
        if ((areaR(tab[i])) % 2 == 0)
        {
            tab[i].alt = 2 * tab[i].alt;
            tab[i].larg = 2 * tab[i].larg;
        }
    }
}

int quadrante1(ret tab[], int total)
{
    int contador = 0;
    for (int i = 0; i < total; i++)
    {
        if (tab[i].canto.x >= 0 && tab[i].canto.y >= 0)
        {
            contador++;
        }
    }

    return contador;
}

void eliminaMenor(ret tab[], int *total)
{
    int menorArea = areaR(tab[0]);
    int menorRet;

    for (int i = 1; i < total; i++)
    {
        if (areaR(tab[i]) < menorArea)
        {
            menorArea = areaR(tab[i]);
            menorRet = i;
        }
    }

    tab[menorRet] = tab[*total - 1];
    tab[*total - 1] = tab[*total];
    (*total)--;
}

void eliminaVarios(ret a[], int *total, int lim)
{
}