#include <stdio.h>
#define N 12

int contaValores(int v[], int dim, int inf, int sup)
{
    int contador = 0, i;
    for (i = 0; i < dim; i++)
    {
        if (v[i] <= sup && v[i] >= inf)
        {
            contador++;
        }
    }
    return contador;
}

void main()
{
    int notas[N] = {12, 17, 8, 14, 7, 13, 17, 15, 12};
    int nota = 0;
    printf("Introduza as notas dos restantes alunos!\n");

    for (int alunos = 10; alunos <= N; alunos++)
    {
        do
        {
            printf("Aluno %d: ", alunos);
            scanf("%d", &nota);
        } while (nota < 0 || nota > 20);
        notas[alunos - 1] = nota;
    }

    printf("\nNotas de todos os alunos: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", notas[i]);
    }

    int primeira = 0, segunda = 0;
    for (int i = 0; i < N; i++)
    {
        if (notas[i] > segunda)
        {
            segunda = notas[i];
            if (notas[i] > primeira)
            {
                segunda = primeira;
                primeira = notas[i];
            }
        }
    }
    printf("\nAs duas melhores notas sao: %d e %d\n", primeira, segunda);

    float perc1, perc2, perc3;
    perc1 = (contaValores(notas, N, 0, 9) / (float)N) * 100;
    perc2 = (contaValores(notas, N, 10, 14) / (float)N) * 100;
    perc3 = (contaValores(notas, N, 15, 20) / (float)N) * 100;

    printf("\n%.1f%% das notas estao no intervalo [0,9]\n", perc1);
    printf("%.1f%% das notas estao no intervalo [10,14]\n", perc2);
    printf("%.1f%% das notas estao no intervalo [15,20]\n", perc3);
}