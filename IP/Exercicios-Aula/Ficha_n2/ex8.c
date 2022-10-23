#include <stdio.h>
#include <math.h>
int coinCount(int* a, int* b, int c){
    *b = *a / c;
    *a = *a % c;
}


int main()
{
    double quantia;
    int quantiaInt, coin50, coin20, coin5, coin1;

    printf("Introduza a sua quantia de dinheiro: ");
    scanf("%lf", &quantia);
    quantiaInt=quantia*100;

    coinCount(&quantiaInt, &coin50, 50);
    coinCount(&quantiaInt, &coin20, 20);
    coinCount(&quantiaInt, &coin5, 5);
    coin1=quantiaInt;

     printf("\nMoedas 50c - %d\nMoedas 20c - %d\nMoedas 5c - %d\nMoedas 1c - %d\n", coin50, coin20, coin5, coin1);
}