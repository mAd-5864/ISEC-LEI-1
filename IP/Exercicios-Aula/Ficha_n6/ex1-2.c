#include <stdio.h>

void main(){
    int tam;
    float media=0;

    printf("Introduza o tamanho do array: ");
    scanf("%d", &tam);
    int array[tam], soma=0;
    for (int i = 0; i < tam; i++)
    {
    printf("Introduza o %do digito do array: ", i+1);
        scanf("%d", &array[i]);
        soma+=array[i];
    }

    media=soma/(float)tam;
    printf("\nMedia: %.2f", media);

    printf("\nArray = [");
    for (int i = 0; i < tam; i++)
    {
        if (array[i]<media)
        {
            array[i]=0;
        }
        
        printf(" %d", array[i]);
    }
    
    printf(" ]");

    
}