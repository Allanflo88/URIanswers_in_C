# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

struct Medal {char pais[100]; int ouro; int prata; int bronze};

int compara(const void *p1, const void *p2)
{
    struct Medal *i = (struct Medal *)p1, *j = (struct Medal *)p2;

    if( (int*)i->ouro < (int*)j->ouro )
        return 1;
    else
    {
        if( (int*)i->ouro == (int*)j->ouro )
        {
            if( (int*)i->prata < (int*)j->prata)
                return 1;
            else
            {
                if( (int*)i->prata == (int*)j->prata)
                {
                    if( (int*)i->bronze < (int*)j->bronze)
                        return 1;
                    else
                    {
                        if( (int*)i->bronze == (int*)j->bronze)
                        {
                            return strcmp(i->pais, j->pais);
                        }
                        else
                            return -1;
                    }
                }
                else
                    return -1;
            }


        }
        else
            return -1;

    }

}

int main()
{
    struct Medal quadro[500];
    int cont, paises;

    scanf("%d", &paises);
    for(cont = 0;cont < paises;cont++)
        scanf("%s %d %d %d", &quadro[cont].pais, &quadro[cont].ouro, &quadro[cont].prata, &quadro[cont].bronze);

    qsort( quadro, paises, sizeof( struct Medal ), compara ) ;

    for(cont = 0;cont < paises;cont++)
        printf("%s %d %d %d\n", quadro[cont].pais, quadro[cont].ouro, quadro[cont].prata, quadro[cont].bronze);

    return 0;
}
