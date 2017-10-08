# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int vetor[3], cont, one, zero;

    while(scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]) != EOF)
    {
        one = zero = 0;
        for(cont = 0;cont < 3;cont++)
        {
            if(vetor[cont] == 1)
                one++;
            else
                zero++;
        }
        if(one != 0 && zero != 0)
        {
            if(one > zero)
            {
                for(cont = 0;cont < 3;cont++)
                {
                    if(vetor[cont] == 0)
                    {
                        if(cont == 0)
                            printf("A");
                        if(cont == 1)
                            printf("B");
                        if(cont == 2)
                            printf("C");
                    }
                }
            }
            else
            {
                for(cont = 0;cont < 3;cont++)
                {
                    if(vetor[cont] == 1)
                    {
                        if(cont == 0)
                            printf("A");
                        if(cont == 1)
                            printf("B");
                        if(cont == 2)
                            printf("C");
                    }
                }
            }
        }
        else
            printf("*");
        printf("\n");
    }
    return 0;
}
