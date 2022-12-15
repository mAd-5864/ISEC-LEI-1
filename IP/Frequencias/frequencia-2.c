#include <stdio.h>

#define N 6

void mostraArray( int t[], int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        printf("%d", t[i]);
    }
        printf("\n");
}
int obtemDigito(int i){
    int dig;
    do
    {
        printf("Digito %d: ", i);
        scanf("%d", &dig);
    } while (dig<0 || dig>9);
    return dig;
}

void main(){
    int a[N]={0,1,3,2,9,9}, b[N]={0,0,0,0,0}, s[N]={0,0,0,0,0,0};
    int soma, ant=0, i;
    printf("introduza os 5 digitos de um numero\n");
    for ( i = 1; i < N; i++)
    {
        b[i]=obtemDigito(i);
    }
    for ( i = N-1; i >= 0; i--)
    {
        soma=a[i]+b[i]+ant;
        if (soma>9)
        {
            ant=1;
        }
        else
        {
            ant=0;
        }
        s[i]=soma%10;
    }
    printf("\n");
    mostraArray(a,N);
    mostraArray(b,N);
    printf("------------\n");
    mostraArray(s,N);
}