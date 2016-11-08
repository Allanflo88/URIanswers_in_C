# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int casos, cont, livros[1000], troca = 1, aux;

    while(scanf("%d", &casos) != EOF)
    {
        for(cont = 0;cont < casos; cont++)
            scanf("%d", &livros[cont]);
        while(troca == 1)
        {
            troca=0;
            for(cont = 0; cont < casos-1;cont++)
            {
                if(livros[cont] > livros[cont+1])
                {
                    aux = livros[cont];
                    livros[cont]= livros[cont+1];
                    livros[cont+1]= aux;
                    troca = 1;
                }

            }
        }
        for(cont = 0;cont < casos; cont++)
            printf("%04d\n", livros[cont]);
        troca = 1;
    }


    return 0;
}
