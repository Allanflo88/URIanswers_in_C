# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int num[40000];

int main()
{
    int aux, cont, troca=1, n,cont1, x;

    scanf("%d", &n);

    for(cont =0;cont < n; cont++)
        scanf("%d", &num[cont]);
    while(troca == 1)
    {
        troca=0;
        for(cont = 0; cont < n-1;cont++)
        {
            if(num[cont] > num[cont+1])
            {
                aux = num[cont];
                num[cont]= num[cont+1];
                num[cont+1]= aux;
                troca = 1;
            }

        }
    }

    for(cont = 0 ;cont < n; cont++)
    {
        aux = 0;
        if(num[cont] != num[cont - 1] && num[cont] == num[cont+1])
        {
           for(cont1 = 0;cont1 < n;cont1++)
            {
                if(num[cont] == num[cont1])
                    aux = aux+1;
            }
            printf("%d aparece %d vez(es)\n", num[cont], aux);
        }
        else if(num[cont] != num[cont - 1] && num[cont] != num[cont+1])
           printf("%d aparece 1 vez(es)\n", num[cont]);

    }

    return 0;
}
