#include <stdio.h>

int main()
{

float peso;
float peso_max;
float peso_total=0;
int i=0;
float media;

while(peso>=0){
    printf("Peso: ");
    scanf("%f", &peso);
    printf("Peso: %.2f.0\n",peso);

    if(peso<60){
        if (peso>peso_max)peso_max=peso;
    }else{
        peso_total=peso_total+peso;
        i++;
    };
    printf("Max: %.0f\n",peso_max);
    printf("Total: %.0f\n",peso_total);
};
    media = peso_total/i;
    printf("A pessoa mais pesada abaixo de 60kg pesa:%.0f\n", peso_max);
    printf("A media de peso das pessoas acima de 60kg é:%.2f\n", media);
}