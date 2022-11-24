#include <stdio.h>

int limites(int num, int min, int max){
    return (num>min && num<max);
}

void main(){
    int num, min, max, result;
        printf("\nInsira um numero e os limites minimo e maximo: ");
        scanf("%d %d %d", &num, &min, &max);
        result = limites(num, min, max);
        printf("Resultado: %d", result);
    
}