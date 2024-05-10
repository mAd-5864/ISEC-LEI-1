#include <stdio.h>
#include <stdlib.h>
void preenche(int *a, int tam)
{
    for (int i = 0; i < tam; i++)
    {

        a[i] = 5 * i;
    }
}
int *f1(int *a, int *tam)
{
    int *p, i;
    p = realloc(a, sizeof(int) * (*tam + a[1]));
    if (p == NULL)
        return a;
    a = p;
    preenche(a + *tam, a[1]);
    *tam += a[1];
    return a;
}
int main()
{
    int *v = NULL, total = 0;
    v = malloc(sizeof(int) * 3);
    if (v == NULL)
        return 0;
    total = 3;
    preenche(v, total);
    v = f1(v, &total);
    for (int i = 0; i < total; i++)
    {
        printf("%d\t", v[i]);
    }

    free(v);
    return 0;
}