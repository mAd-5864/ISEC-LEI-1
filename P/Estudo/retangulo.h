
#ifndef RETANGULO_H
#define RETANGULO_H

#include "ponto.h"

typedef struct retangulo ret;
struct retangulo
{
    ponto2D canto; // canto inferior esquerdo
    int alt;
    int larg;
};

// Prototipos das funções definidas no modulo retangulo.c

void printRet(ret r);

void initRet(ret *p);

int areaR(ret r);

int dentroR(ponto2D a);

void moveR(ret *p, int dx, int dy);

#endif
