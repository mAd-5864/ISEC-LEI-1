#include <stdio.h>
#include <string.h>

void separaString(char str[])
{
    int flag = 1;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==' ')
        {
            if (flag == 0)
            {
                flag=1;
                putchar('\n');
            }
            
        }else
        {
            putchar(str[i]);
            flag=0;
        }
        
    }
}
void main(){
    separaString("  Hoje e   Domingo!");
}