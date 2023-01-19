#include <stdio.h>
#define N 50

int alteraFrase(char s[])
{
    int i, occ = 0;
    for (i = 0; s[i]!='\0'; i++) {
        if (s[i] == 'c' && s[i + 1] == 'h') {
            s[i - occ] = 'x';
            i++;
            occ++;
        } else {
            s[i - occ] = s[i];
        }
    }
    s[i-occ] = '\0';
    return occ;
}
void main()
{
    char s1[N] = "comi um cacho, so para chatear o chato do chico";

    puts(s1);
    printf("\nforam feitas %d alteracoes\n", alteraFrase(s1));
    puts(s1);
}