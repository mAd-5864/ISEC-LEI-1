
#include "retangulo.h"

void printRet(ret r)
{

    printf("Canto 1\n");
    printf("X: %d Y: %d", r.canto.x, r.canto.y);

    // ponto2D canto2 = {r.canto.x, r.canto.y + r.alt};

    ponto2D canto2;
    canto2.y = r.canto.y + r.alt;
    canto2.x = r.canto.x;

    printf("Canto 2\n");
    printf("X: %d Y: %d", canto2.x, canto2.y);

    ponto2D canto3;
    canto3.x = r.canto.x + r.larg;
    canto3.y = r.canto.y;

    printf("Canto 3\n");
    printf("X: %d Y: %d", canto3.x, canto3.y);

    ponto2D canto4;
    canto4.x = r.canto.x + r.larg;
    canto4.y = r.canto.y;

    printf("Canto 4\n");
    printf("X: %d Y: %d", canto4.x, canto4.y);
}

void initRet(ret *p)
{
    printf("Introduza o valor do x do canto: ");
    scanf("%d", p->canto.x);

    printf("Introduza o valor do y do canto: ");
    scanf("%d", p->canto.y);

    printf("Introduza o valor da altura: ");
    scanf("%d", p->alt);

    printf("Introduza o valor da largura: ");
    scanf("%d", p->larg);
}

int areaR(ret r)
{
    int area = r.alt * r.larg;
    return area;
}

int dentroR(ponto2D a)
{
    return 0;
}

void moveR(ret *ret, int dx, int dy)
{
    ret->canto.x = ret->canto.x + dx;
    ret->canto.y = ret->canto.y + dy;
}