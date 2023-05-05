#ifndef AGENDA_H_INCLUDED
#define AGENDA_H_INCLUDED

typedef struct lista_contactos contactos;
struct lista_contactos
{
    char nome[100];
    char ntelemovel[10];
};
char menu();
contactos obtem_info();
contactos *adiciona_contacto(contactos *tab, int *n);

#endif // AGENDA_H_INCLUDED