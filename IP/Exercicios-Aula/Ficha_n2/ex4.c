#include <stdio.h>
#include <math.h>

int main()
{
    

    float temp, convert, celsius;
    float fraction;

    printf("Introduza a temperatura em graus Fahrenheit: ");
    scanf("%f", &temp);

    convert = (float)5/(float)9*(temp-32);

    printf("\n%.0f Fahrenheit = %.1f Celsius\n", temp, convert);
}