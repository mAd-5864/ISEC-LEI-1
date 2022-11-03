#include <stdio.h>

int main()
{
    int num, result=0, i=10;


    printf("Introduza um numero inteiro: ");
    scanf("%d", &num);

while (num>=10)
    {
    result += num%i;
    num /=i;
    }
    result+=num;
    printf("\nSoma dos digitos = %d\n", result);
}