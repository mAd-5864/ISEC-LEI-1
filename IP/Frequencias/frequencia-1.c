#include <stdio.h>

int main()
{
    int fichas_ocu = 0, carga_ocu = 0, tempoCarga, carga;
    float mediaCarga;

    while (fichas_ocu < 5 && carga_ocu < 200)
    {
        printf("Ficha %d introduza entre 20 e 50: ", fichas_ocu + 1);
        scanf("%d", &carga);

        if (carga >= 20 && carga <= 50)
        {
            if ((carga_ocu + carga) > 200)
            {
                printf("Quantidade Indisponivel.\n");
                carga = 200 - carga_ocu;
            }
            carga_ocu += carga;
            fichas_ocu++;
            tempoCarga = 1.35 * carga;
            mediaCarga = carga_ocu / (float)fichas_ocu;

            printf("%d Wh (%d minutos), media %.2f.\n", carga, tempoCarga, mediaCarga);
        }
    }
    return 0;
}