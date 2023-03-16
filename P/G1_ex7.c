#include <stdio.h>
#define N 10

void procura_dupla(int *tab, int tam, int *prim, int *seg){
    for (int i = 0; i < tam; i++){
        if (*(tab+i)>= *seg){
            if (*(tab+i)> *prim){
                *seg= *prim;
                *prim= *(tab+i);
            }else{
                *seg= *(tab+i);
            }
        }
    }
}

void main(){
    int prim=0, seg=0;
    int a[N]={4,6,7,3,4,5,7,1};

    procura_dupla(a, N, &prim, &seg);
    printf("Os dois maiores numeros sao: %p e %p", (void *)prim, (void *)seg);
}