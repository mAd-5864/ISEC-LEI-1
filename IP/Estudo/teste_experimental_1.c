#include <stdio.h>

int getspeed(int km_per, float time)
{
    time = (((int)time * 60) + ((time - (int)time) * 100)) / 60;
    return km_per / time;
}
void main()
{
    int km_per, nStaff, nTravels, i, t;
    float time, speed, avg_speed = 0;

    printf("Numero de funcionarios > ");
    scanf("%d", &nStaff);

    for (i = 1; i <= nStaff; i++)
    {
        printf("\nFuncionario %.2d", i);
        printf("\n\nNumero de trajetos > ");
        scanf("%d", &nTravels);
        avg_speed = 0;
        for (t = 1; t <= nTravels; t++)
        {
            printf("\nTrajeto %.2d", t);
            printf("\nQuilometros percorridos e tempo decorrido > ");
            scanf("%d %f", &km_per, &time);
            speed = getspeed(km_per, time);
            if (speed < 30)
            {
                printf("Abaixo do limite minimo = %.2f\n", speed);
            }
            else if (speed > 100)
            {
                printf("Acima do limite maximo = %.2f\n", speed);
            }
            else
            {
                printf("Velocidade no trajeto = %.2f\n", speed);
            }
            avg_speed += speed;
        }
        printf("\nVelocidade media do funcionario = %.2f\n", avg_speed / --t);
    }
}
