#include <stdio.h>

int main()
{

    float raio, per, area;
    const float pi = 3.14159;

    printf("Introduza um valor:");
    scanf("%f", &raio);

    per = 2 * pi * raio;
    area = pi * (raio * raio);

    printf("\nPerimetro: %.2f\n", per);
    printf("Area: %.2f\n", area);
}