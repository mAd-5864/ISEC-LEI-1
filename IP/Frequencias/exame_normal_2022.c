#include <stdio.h>
#define N 50

int alteraFrase(char s[])
{
    int occ = 0;
    for (int i = 0; s[i-1]!='\0'; i++) {
        if (s[i] == 'c' && s[i + 1] == 'h') {
            s[i - occ] = 'x';
            i++;
            occ++;
        } else {
            s[i - occ] = s[i];
        }
    }
    return occ;
}
void main()
{
    char s1[N] = "comi um cacho, so para chatear o chato do chico";

    puts(s1);
    printf("\nforam feitas %d alteracoes\n", alteraFrase(s1));
    puts(s1);
}