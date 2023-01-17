#include <stdio.h>
#define nRifas 12

int EliminaValor(int v[], int tam, int num)
{
    int occ = 0;
    for (int i = 0; i < tam; i++)
    {
        if (v[i] != num)
        {
            v[i - occ] = v[i];
        }
        else
        {
            occ++;
        }
    }
    for (int i = tam; i >= tam - occ; i--)
    {
        v[i] = 0;
    }
    return tam - occ;
}

void main()
{
    int cc, vencedor, rifa[nRifas];
    for (int i = 0; i < nRifas; i++)
    {
        do
        {
            printf("\nRifa nº%d => indique nº do cartão de cidadão do comprador:", i + 1);
            scanf("%d", &cc);
            if (/* VerificaCC(cc) */ cc == 0)
            {
                printf("\nNº de cartão inválido!");
            }
        } while (/* VerificaCC(cc) */ cc == 0);
        rifa[i]=cc;
    }
    do
    {
        printf("Indique nº da rifa sorteada:");
        scanf("%d", &vencedor);
    } while (vencedor < 1 || vencedor > nRifas);
    int ccVencedor = rifa[vencedor-1];
    printf("\nO vencedor tem o cartão de cidadão nº %d e comprou um total de %d rifas.", ccVencedor, nRifas - EliminaValor(rifa, nRifas, rifa[vencedor-1]));
}