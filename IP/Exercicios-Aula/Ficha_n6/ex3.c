#include <stdio.h>

int dontRepeat(int dig, int intersec[], int tam)
{
    for (int i = 0; i <= tam; i++)
    {
        if (dig == intersec[i])
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int tamA, tamB, intersec[10], t = 0;

    printf("Introduza o tamanho do array A: ");
    scanf("%d", &tamA);
    int arrayA[tamA];
    for (int i = 0; i < tamA; i++)
    {
        printf("Introduza o %do digito do array A (0-9): ", i + 1);
        scanf("%d", &arrayA[i]);
        if (arrayA[i] > 9 || arrayA[i] < 0)
            i--;
    }

    printf("Introduza o tamanho do array B: ");
    scanf("%d", &tamB);
    int arrayB[tamB];
    for (int i = 0; i < tamB; i++)
    {
        printf("Introduza o %do digito do array B (0-9): ", i + 1);
        scanf("%d", &arrayB[i]);
        if (arrayB[i] > 9 || arrayB[i] < 0)
            i--;
    }

    //Comparar cada digito dos arrays
    for (int i = 0; i < tamA; i++)
    {
        for (int n = 0; n < tamB; n++)
        {
            if (arrayA[i] == arrayB[n])
            {
                if (dontRepeat(arrayA[i], intersec, t+1))
                {
                    intersec[t] = arrayA[i];
                    t++;
                }
            }
        }
    }

    /* Prints dos arrays */
    printf("\nArray A = [");
    for (int i = 0; i < tamA; i++)
    {
        printf(" %d", arrayA[i]);
    }
    printf(" ]");
    printf("\nArray B = [");
    for (int i = 0; i < tamB; i++)
    {
        printf(" %d", arrayB[i]);
    }
    printf(" ]");
    printf("\nIntersec = [");
    for (int i = 0; i < t; i++)
    {
        printf(" %d", intersec[i]);
    }
    printf(" ]");
}
