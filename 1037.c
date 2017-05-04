# include <stdio.h>

int main()
{
    float x;

    scanf("%f", &x);
    if(x < 0.00 || x > 100.00)
        printf("Fora de intervalo");
    else
    {
     if(x >= 0.00 && x <= 25.00)
        printf("Intervalo [0,25]");
        else
        {
            if(x <= 50.00)
                printf("Intervalo (25,50]");
            else
            {
                if (x <= 75.00)
                    printf("Intervalo (50,75]");
                else
                {
                    if (x <= 100.00)
                        printf("Intervalo (75,100]");
                }

            }

        }
    }

    printf("\n");

    return 0;
}
