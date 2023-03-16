#include <stdio.h>

void tabelaInteiros(int *start, int tam, int *nump, int *numi, int *maior, int *pos){
    for (int i = 0; i < tam; i++)
    {
        if (*(start+i)> *maior)
        {
            *maior=*(start+i);
            *pos=i;
        }
        if (*(start+i)%2==0)
        {
            *(nump)++;
        }else
        {
            *(numi)++;
        }
    }
    
}