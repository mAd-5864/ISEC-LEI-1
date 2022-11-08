#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, conta, soma, m, n, div;
    char pergunta;

    system("cls");

code:
    printf("Que alinea que fazer: ");
    scanf("%c", &pergunta);

    if (pergunta == 'a')
    {
        // codigo alinea a
        printf("numero: ");
        scanf("%d", &num);

        for (div; div < num; div++)
        {
            conta = num % div;

            if (conta == 0)
            {
                soma += num;
            }
        }

        if (soma == num)
        {
            printf("numero perfeito");
        }
        else if (soma < num)
        {
            printf("numero reduzido");
        }
        else if (soma > num)
        {
            printf("numero abundante");
        }
    }
    else if (pergunta == 'b')
    {
        // codigo alinea b
        printf("Qual o limite? (m n)");
        scanf("%d %d", &m, &n);
        printf("numero: ");
        scanf("%d", &num);

        if (m < n)
        {
            for (m; m <= n; m++)
            {
                for (div = m; div < num; div++)
                {
                    conta = num % m;

                    if (conta == 0)
                    {
                        soma += num;
                    }
                }
            }
        }
        if (m > n)
        {
            for (div = n; div < num; div++)
            {
                conta = num % div;

                if (conta == 0)
                {
                    soma += num;
                }
            }
        }
        if (soma == num)
        {
            printf("numero perfeito");
        }
        else if (soma < num)
        {
            printf("numero reduzido");
        }
        else if (soma > num)
        {
            printf("numero abundante");
        }
    }
    else
    {
        goto code;
    }
    return 0;
}