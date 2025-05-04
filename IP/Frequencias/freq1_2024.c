#include <stdio.h>

int main()
{
    int nAluno, qantProdutos;
    float valorMedio, valorTotal, preco;
    char c;

    do
    {
        do
        {
            printf("Numero do aluno(0 para sair):");
            scanf("%d", &nAluno);

            if (nAluno < 0 || nAluno > 10000)
            {
                printf("Numero de aluno invalido!");
            }
        } while (nAluno < 0 || nAluno > 10000);

        printf("Tipo de alimento (a - azeite, l - leite, m - massa):");
        scanf("%c", &c);

        printf("Quantidade:");
        scanf("%d", &qantProdutos);

    } while (nAluno != 0);

    return 0;
}