#include <stdio.h>
#include <string.h>

void maiorPalavra(char frase[], char palavra[], char maior[])
{
    int j = 0, pos = 0, pos5 = 0, pos4 = 0, pos3 = 0, pos2 = 0, pos17 = 0, pos56 = 0, pos45 = 0, pos34 = 0, pos23 = 0, pos12 = 0, pos28 = 0, pos171 = 0, pos561 = 0, pos451 = 0, pos341 = 0, pos231 = 0, pos121 = 0;
    for (int i = 0; i <= strlen(frase); i++)
    {
        if (frase[i] != ' ' && frase[i] != '\0')
        {
            palavra[j++] = frase[i];
        }
        else
        {

            if (j > strlen(maior))
            {
                strcpy(maior, palavra);
                maior[strlen(maior)-3]='\0';
            }
            palavra[j] = '\0';
            j = 0;
        }
    }
}

void main()
{
    char maior[] = "";
    char palavra[100];
    char fr[] = "Era uma linda coisa anticonstitucionalissimamente pois sim";
    maiorPalavra(fr, palavra, maior);
    printf("\nMaior palavra de: %s => ", fr);
    puts(maior);
}