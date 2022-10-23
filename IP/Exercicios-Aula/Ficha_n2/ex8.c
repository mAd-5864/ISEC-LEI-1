#include <stdio.h>
#include <math.h>


int main()
{
    double quantia;
    int quantiaInt, coin50, coin20, coin5, coin1;

    printf("Introduza a sua quantia de dinheiro: ");
    scanf("%lf", &quantia);
    quantiaInt=quantia*100;


    coin50 = quantiaInt / 50;
    quantiaInt = quantiaInt % 50;
    coin20 = quantiaInt / 20;
    quantiaInt = quantiaInt % 20;
    coin5 = quantiaInt / 5;
    quantiaInt = quantiaInt % 5;
    coin1=quantiaInt;

     printf("\nMoedas 50c - %d\nMoedas 20c - %d\nMoedas 5c - %d\nMoedas 1c - %d\n", coin50, coin20, coin5, coin1);
}