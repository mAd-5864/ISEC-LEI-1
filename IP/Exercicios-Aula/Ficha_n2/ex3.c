#include <stdio.h>
#include <math.h>

float square(float a) { 
    return a * a; 
} 

int main()
{
    float cateto1, cateto2, hipotenusa,area;

    printf("Introduza o comprimento de cada cateto\n");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = sqrt((square(cateto1))+(square(cateto2)));
    area = (cateto1 * cateto2)/2;

    printf("\nHipotenusa: %.2f\n", hipotenusa);
    printf("Area: %.2f\n", area);
}