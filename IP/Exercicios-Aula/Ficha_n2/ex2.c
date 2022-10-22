#include <stdio.h>

int main()
{
    float lado1, lado2, area;

    printf("Introduza o comprimento e altura do retangulo\n");
    scanf("%f %f", &lado1, &lado2);

    area = lado1*lado2;

    printf("\nArea: %.2f\n", area);
}