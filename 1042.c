# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int v1[3], v2[3], cont, troca = 1, aux;

    scanf("%d %d %d", &v1[0], &v1[1], &v1[2]);

    for(cont = 0;cont < 3;cont++)
    {
        v2[cont] = v1[cont];
    }
    while(troca > 0)
    {

        troca = 0;
        for(cont = 1; cont < 3;cont++)
        {
            if(v2[cont] < v2[cont-1])
            {
                aux = v2[cont];
                v2[cont]= v2[cont-1];
                v2[cont-1]= aux;
                troca = 1;
            }

        }

    }

    for(cont = 0;cont < 3;cont++)
        printf("%d\n", v2[cont]);
    printf("\n");
    for(cont = 0; cont < 3;cont++)
        printf("%d\n", v1[cont]);


    return 0;
}
