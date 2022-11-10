#include <stdio.h>

int main()
{
    int num = 1, dig, num_inicial = 1, num_final;

    do
    {

        num = num_inicial;
        while (num != 0)
        {
            dig = num % 10;
            if (dig > num)
            {
                num_final = num_inicial + dig;
                break;
            }
            else if (dig == num_inicial)
            {
                break;
            }
            else
            {
                dig = dig * 10;
                num /= 10;
            }
            // printf("Num: %d", num);

            printf(" 0 1");
        }
        //        printf("\nDig: %d", dig);

        // printf("\n%d==%d",num_final, (num_inicial*4));

        num_inicial++;
    } while (num_final != (num_inicial * 4));

    printf("\nFinal: %d", num_final);
    return 0;
}
