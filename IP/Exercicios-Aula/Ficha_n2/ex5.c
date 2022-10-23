#include <stdio.h>

int main()
{

    int var1, var2, swap;

    printf("Introduza um valor para A: ");
    scanf("%d", &var1);
    printf("Introduza um valor para B: ");
    scanf("%d", &var2);

    swap = var1;
    var1 = var2;
    var2 = swap;

     printf("\nA -> %.0d\nB -> %.0d\n", var1, var2);
}