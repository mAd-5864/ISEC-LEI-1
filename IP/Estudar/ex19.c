#include <stdio.h>

int main(){
    int d,m,a;
    float montante, taxa;
    printf("Insira a data atual: ");
    scanf("%2d/%2d/%4d", &d, &m, &a);
    printf("\nInsira a taxa: ");
    scanf("%f", &taxa);
    printf("\nInsira o montante: ");
    scanf("%f", &montante);

    montante += (montante*taxa)/100;
    printf("\nNo dia %.2d/%.2d/%4d vai ter no banco $%.2f", d, m, ++a, montante);
    
    return 0;
}