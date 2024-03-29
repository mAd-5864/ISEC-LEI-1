#include <stdio.h>

float calculaIMC(float peso, float altura)
{
    float imc;


    imc = peso / (altura * altura);

    return imc;
}

int main()
{
    float imc;
    imc = calculaIMC(55, 1.67);

    if (imc <= 18.5)
    {
        printf("Abaixo do peso normal");
    }
    else if (imc > 18.5 && imc <= 25)
    {
        printf("Peso Normal");
    }
    else if (imc > 25 && imc <= 30)
    {
        printf("Acima do Peso Normal");
    }
    else
    {
        printf("Obesidade");
    }

    printf("\n %.2f", imc);
    return 0;
}
