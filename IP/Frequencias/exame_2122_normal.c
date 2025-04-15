//Exame 2021/22 Normal
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

int palindromo(char str1[])
{

    int i = 0, j = 0;
    char invertida[TAM];

    while (str1[i] == ' ') // ignora espaços no inicio
        i++;

    for (i; str1[i] != '\0'; i++)
        if (str1[i] != ' ')
            str1[j++] = tolower(str1[i]);
    str1[j] = '\0';

    for (i = 0; j >= 0; i++) // escreve a string str1 ao contrario na invertida
    {
        invertida[i] = str1[j--];
    }
    invertida[i] = '\0';

    return !strcmp(invertida, str1);
}

void main()
{
    char str1[] = "Socorram me Em Marrocos";

    if (palindromo(str1))
    {
        printf("\nA Frase E Um Palindromo.\n");
    }
    else
        printf("\nA Frase Nao E Um Palindromo.\n");
}