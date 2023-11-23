#include <stdio.h>

int main()
{

    int nEmpregados, somaSal = 0, salario;
    float salMedio = 0;

    printf("Quantos empregados vao  ser considerados: ");
    scanf("%d", &nEmpregados);

    for (int i = 0; i < nEmpregados; i++)
    {
        printf("Salario do %d empregado: ", i+1);
        scanf("%d", &salario);
        somaSal = somaSal + salario;
    }

    salMedio = somaSal / nEmpregados;
    printf("Salario Medio: %.2f", salMedio);
}