#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

int main()
{
    contactos *tab=NULL;
    int total=0;

char op;
    do
    {
        op=menu();
        switch(op)
        {
            case '1':tab=adiciona_contacto(tab,&total);//c)
                   break;
            case '2'://printf("\nNome do contacto que pretende eliminar: ");
                   //scanf("%s", st);
                   //tab=elimina_contacto(tab,&total, st);
                   break;
            case '3'://listagem_contactos(tab,total);//d)
                   break;
            case '4'://pesquisa_contacto(tab,total);//e)
                   break;
            case '5'://printf("\nNome do contacto que pretende atualizar: ");
                   //scanf("%s", st);
                   //atualiza_contacto(tab, total, st); //f)
            case '6':
            case '7': break;
        }

    }while(op!='7');

    return 0;
}
