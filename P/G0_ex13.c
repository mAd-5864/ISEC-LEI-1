#include <stdio.h>
#include <string.h>

#define N 100

void comparaString(char str1[], char str2[], char strRes[])
{
    if (strcmp(str1, str2) == 0)
    {
        strcpy(strRes, "Conteudo Igual!");
    }
    else if (strlen(str1) == strlen(str2))
    {
        strcpy(strRes, "Tamanho Igual!");
    }
    else
    {
        if (strcmp(str1, str2) < 0)
        {
            strcpy(strRes, strcat(str2, str1));
        }
        else
        {
            strcpy(strRes, strcat(str1, str2));
        }
    }
    puts(strRes);
}
void main()
{
    char s1[N], s2[N], s3[N * 2];

    printf("Digite a primeira string: ");
    scanf("%s", s1);

    printf("Digite a segunda string: ");
    scanf("%s", s2);

    comparaString(s1, s2, s3);
}