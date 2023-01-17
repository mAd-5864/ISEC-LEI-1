#include <stdio.h>
#include <string.h>

int maiorPalavra(char frase[], char maior[])
{
    int j = 0, n_palavras = 0, tam=0;
    char palavra[10];
    for (int i = 0; i <= strlen(frase); i++)
    {
        if (frase[i] != ' ' && frase[i] != '\0')
        {
            palavra[j++] = frase[i];
        }
        else
        {
            n_palavras++;
            if (j > tam)
            {
                tam = j;
                for (int k = 0; k < j; k++)
                {
                    maior[k]=palavra[k];
                }
            maior[tam] = '\0';
            }
            j = 0;
        }
    }
    return n_palavras;
}

void main()
{
    char frase[] = "Como eu gosto de IP";
    char maior[20];
    int n_palavras;
    n_palavras = maiorPalavra(frase, maior);
    printf("\n%d palavras", n_palavras);
    printf("\nmaior palavra = %s", maior);
}
