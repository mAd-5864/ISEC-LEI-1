#include <stdio.h>
#include <string.h>

int main()
{
    char date[8];
    

    printf("Introduza uma data:");
    scanf("%s", date);

    char * dia = strtok(date, "/");
    printf( "%s\n", dia ); 

/*    while( barra != NULL ) {
      barra = strtok(NULL, "/");
   } */


    printf("Data: %s\n", date);
/*     printf("Mes: %.2d\n", mes);
    printf("Ano: %.2d\n", ano);
    printf("Data: %.2d/%.2d/%.2d\n", dia, mes, ano); */
}