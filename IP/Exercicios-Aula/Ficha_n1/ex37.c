#include <stdio.h>

int main(){
    int num, i=0;
    printf("Introduza um valor:");
    scanf("%d", &num);
    while (num>1)
    {
        if (num%2==0)
        {
            num /=2;
            printf("%d\n",num);
            i++;
        } else
        {
            num= num*3+1;
            printf("%d\n",num);
            i++;
        }
        
        
    }
    printf("Efetuou %d operacoes", i);
    return 0;
    
}