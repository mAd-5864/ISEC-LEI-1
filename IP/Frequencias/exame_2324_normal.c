// Exame 2023/24 Normal
#include <stdio.h>
#include <ctype.h>
#define N 100

int alteraFrase(char s[], int n, char mpal[])
{
    int i, j, tamanho, tamanhoMaiorPalavra = 0;
    char palavra[N];

    mpal[0] = '\0';

    for (i = 0; s[i] != '\0'; i++)
    {
        while (s[i] == ' ')
        {
            i++;
        }

        j = 0;
        while (s[i] != ' ' && s[i] != '\0')
        {
            palavra[j++] = s[i++];
        }
        palavra[j] = '\0';

        tamanho = j;
        if (tamanho >= n)
        {
            i = i - tamanho;
            for (j = 0; palavra[j] != '\0'; j++)
            {
                s[i++] = toupper(palavra[j]);
            }
        }
        if (tamanho > tamanhoMaiorPalavra)
        {
            tamanhoMaiorPalavra = tamanho;
            for (j = 0; j < tamanhoMaiorPalavra; j++)
            {
                mpal[j] = toupper(palavra[j]);
            }
            mpal[j] = '\0';
        }
    }
    return 0;
}

void main()
{
    char frase[N] = " A  sala de aula  estava cheia  de lixo e de alunos a copiar";
    char maiorpal[N];
    printf("Frase inicial: %s\n", frase);
    alteraFrase(frase, 5, maiorpal);
    printf("Frase alterada: %s\n", frase);
    printf("Maior palavra alterada: %s\n", maiorpal);
}