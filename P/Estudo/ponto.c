
#include <stdio.h>
#include "ponto.h"

// Escreve as coordenadas do ponto recebido como parâmetro
void printPonto(ponto2D a)
{
    printf("Ponto: (%d,%d)\n", a.x, a.y);
}

// Inicializa as coordenadas do ponto referenciado pelo parâmetro recebido. O utilizador indica os valores
void initPonto(ponto2D *p)
{
    printf("Introduza o valor de x: ");
    scanf("%d", p->x);

    printf("Introduza o valor de y: ");
    scanf("%d", p->y);
}

// Recebe endereço de um ponto e valores para o deslocamento ao longo dos eixos
// Atualiza as coordenadas do ponto
void movePonto(ponto2D *p, int dx, int dy)
{
    p->x = p->x + dx;
    p->y = p->y + dy;
}

// Devolve o quadrante a que pertence o ponto recebido por parâmetro
int quadrante(ponto2D a)
{
    if (a.x > 0 && a.y > 0)
    {
        printf("Ponto pertence ao 1o quadrante");
    }
    else if (a.x < 0 && a.y > 0)
    {
        printf("Ponto pertence ao 2o quadrante");
    }
    else if (a.x < 0 && a.y < 0)
    {
        printf("Ponto pertence ao 3o quadrante");
    }
    else if (a.x > 0 && a.y < 0)
    {
        printf("Ponto pertence ao 4o quadrante");
    }

    return -1;
}
// Recebe 3 pontos
// Devolve 1 se estiverem na mesma reta, 0 se não estiverem
int eReta(ponto2D a, ponto2D b, ponto2D c)
{
    int m = (a.x - b.x) / (a.y - b.y);
    int be = -m * a.x + a.y;

    if (c.y == m * c.x + be)
    {
        return 1;
    }

    return 0;
}