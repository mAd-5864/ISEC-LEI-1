#include <stdio.h>

int desafio1(int *tab, int tam, int *contaP)
{

    int contador = 0, nElementos = 0, teste = 0;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (tab[i] == tab[j])
            {
                contador++;
            }
        }
        if (contador == 2)
        {
            nElementos++;
        }
        contador = 0;
    }

    return nElementos / 2;
}

int main()
{
    int tab1[5] = {5, 3, 3, 2, 2};
    int tab2[10] = {-3, -2, 0, 0, 1, 4, 3, -2, 9, 1};
    int tab3[8] = {1, 1, 4, 10, 4, 8, 1, 9};
    int c1 = 0, c2 = 0, c3 = 0, d1, d2, d3;

    d1 = desafio1(tab1, 5, &c1);
    d2 = desafio1(tab2, 10, &c2);
    d3 = desafio1(tab3, 8, &c3);

    printf("%d %d %d %d %d %d\n", d1, c1, d2, c2, d3, c3);
    return 0;
}