#include <stdio.h>

typedef struct tempo tempo;
struct tempo
{
    int h;
    int m;
};

typedef struct voo voo;
struct voo
{
    int nVoo;
    char *companhia, destino;
    tempo horaPartida;
};

int main(int argc, char const *argv[])
{
    voo tab[300];
    return 0;
}

void printVoo(voo v)
{
    printf("Voo - %d\nPara: %s\n%s\nPartida: %d:%d", v.nVoo, v.destino, v.companhia, v.horaPartida.h, v.horaPartida.m);
}

void initVoo(voo *v)
{
    printf("Introduza o nº do voo: ");
    scanf("%d", &v->nVoo);

    printf("Introduza o destino: ");
    gets(v->destino);

    printf("Introduza o nome da companhia: ");
    gets(v->companhia);

    printf("Introduza a hora de partida(hh:mm): ");
    scanf("%02d:%02d", &v->horaPartida.h, &v->horaPartida.m);
}

void alteraHora(voo *v)
{
    printf("Introduza a nova hora de partida(hh:mm): ");
    scanf("%02d:%02d", &v->horaPartida.h, &v->horaPartida.m);
}

int verificaPartida(voo v, tempo horaAtual)
{
    if (v.horaPartida.h > horaAtual.h)
    {
        return 0;
    }
    else if (v.horaPartida.h == horaAtual.h && v.horaPartida.m > horaAtual.m)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}