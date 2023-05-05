#include <stdio.h>
#include "agenda.h"

char menu()
{
    char n;
    do
    {
        printf("\nIntroduza o numero da opcao pretendida: ");
        printf("\n1 - Adiciona Contacto");
        printf("\n2 - Elimina Contacto");
        printf("\n3 - Lista todos Contactos");
        printf("\n4 - Procura Contacto");
        printf("\n5 - Atualiza Contacto");
        printf("\n6 - Ordena Contactos");
        printf("\n7 - Sair");
        printf("\nOPCAO: ");
        fflush(stdin);
        n = getchar();
    } while (n < '1' || n > '7');
    return n;
}

contactos obtem_info()
{
    contactos t;
    printf("\nNome: ");
    scanf(" %99[^\n]", t.nome);
    printf("N. de telemovel: ");
    scanf(" %9s", t.ntelemovel);
    return t;
}

contactos *adiciona_contacto(contactos *tab, int *n)
{
    contactos *aux;
    int existe_contacto = 0, i;
    if ((*n) == 0)
    {
        tab = malloc(sizeof(contactos));
        if (tab == NULL)
        {
            printf("Erro na alocacao de memoria");
            return NULL;
        }
        tab[*n] = obtem_info();
        (*n)++;
    }
    else
    {
        aux = realloc(tab, sizeof(contactos) * (*n + 1));
        if (aux != NULL)
        {
            tab = aux;
            do
            {
                existe_contacto = 0;
                tab[*n] = obtem_info();
                for (i = 0; i < *n && strcmp(tab[*n].nome, tab[i].nome) != 0; i++)
                    ;
                if (i < *n)
                {
                    printf("Contacto ja existe \n");
                    existe_contacto = 1;
                }
            } while (existe_contacto);
            (*n)++;
        }
    }
    return tab;
}