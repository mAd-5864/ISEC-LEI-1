#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch;
    int nota;
    char uc[] = "", p[] = "Portugues", i[] = "Ingles", m[] = "Matematica";
    printf("Escolha umas das seguintes disciplinas:\n\tPortugues(P)\n\tIngles(I)\n\tMatematica(M)\n");
    scanf("%c", &ch);
    ch = toupper(ch);

    switch (ch)
    {
    case 'P':
        strcpy(uc, p);
        break;
    case 'I':
        strcpy(uc, i);
        break;
    case 'M':
        strcpy(uc, m);
        break;
    default:
        return 0;
    }
    printf("Que nota obteve a %s: ", uc);
    scanf("%d", &nota);
    if (nota > 20 || nota < 0)
    {
        return 0;
    }
    else if (nota < 10)
    {
        printf("Na disciplina de %s o aluno reprovou com %d valores", uc, nota);
    }
    else
    {
        printf("Na disciplina de %s o aluno passou com %d valores", uc, nota);
    }
    return 0;
}