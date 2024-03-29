#include <stdio.h>
#include <math.h>

void main()
{

    int nAprovados = 0, nAlunos = 0, presencas = 0;
    float nota = 0;

    do
    {
        printf("Aluno %d: Indique a nota das avaliacoes: ", ++nAlunos);
        scanf("%f", &nota);
        
        if (nota >= 0)
        {

            do
            {
                printf("Indique o numero de presencas (maximo 14): ");
                scanf("%d", &presencas);
            } while (presencas > 14);

            if (presencas > 10)
            {
                nota = nota + 1.5;
            }
            else if (presencas >= 7)
            {
                nota = nota + 0.75;
            }
            else
            {
                nota = nota - 1;
            }

            if (nota >= 9.5)
            {
                nAprovados++;
            }
            printf(" Nota final do aluno %d: %.0f\n", nAlunos, round(nota));
        }

    } while (nota >= 0);
    printf("Numero de alunos aprovados = %d\n", nAprovados);
}