#include <stdio.h>

int main()
{

    float dur, vel, dist, fuelGasto;
    const float consumo = 0.065;

    printf("Introduza a duração da viagem (h): ");
    scanf("%f", &dur);
    printf("Introduza a velocidade média (km/h): ");
    scanf("%f", &vel);

    dist = dur*vel;
    fuelGasto = dist*consumo;

     printf("\nDistancia percorrida: %.2fKm\nCombustivel gasto: %.1fL\n", dist, fuelGasto);
}