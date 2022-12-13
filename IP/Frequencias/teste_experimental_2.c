#include <stdio.h>

int embalar(int qnt){
    int caixas=qnt/10;
    if (qnt%10!=0) caixas++;
    
    return caixas;
}

void main(){
    int qnt, caixas, n_caixas=0, maior_encomenda=0;
    float n_encomendas=1;
    do
    {
        printf("Numero de Pai Natais da encomenda %d: ", n_encomendas);
        scanf("%d", &qnt);
        if (qnt>0){
        caixas = embalar(qnt);
        n_caixas+=caixas;
        if (caixas>=maior_encomenda){
            maior_encomenda=caixas;
        }
        n_encomendas++;
        printf("Numero de caixas necessario: %d\n", caixas);
        }
    } while (qnt!=0);
    n_encomendas--;
    printf("\nResumo das encomendas:");
    printf("\nNumero total de caixas: %d", n_caixas);
    printf("\nA maior encomenda necessita de %d caixas", maior_encomenda);~
    printf("\nMedia de caixas por encomenda: %.2f", n_caixas/n_encomendas);
}