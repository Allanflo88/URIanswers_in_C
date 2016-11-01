# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int casos, trem, ordem[50], cont, troca =1, aux, n=0;

    scanf("%d", &casos);
    while(casos > 0)
    {
        troca =1;
        scanf("%d", &trem);
        for(cont =0;cont < trem;cont++)
            scanf("%d", &ordem[cont]);
        n=0;
        while(troca == 1)
        {
            troca=0;
            for(cont = 0; cont < trem-1;cont++)
            {
                if(ordem[cont] > ordem[cont+1])
                {
                    aux = ordem[cont];
                    ordem[cont]= ordem[cont+1];
                    ordem[cont+1]= aux;
                    troca = 1;
                    n = n+1;
                }

            }
        }
        printf("Optimal train swapping takes %d swaps.\n", n);

        casos = casos -1;
    }
    return 0;
}
