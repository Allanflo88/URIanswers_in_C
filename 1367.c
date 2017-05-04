# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

typedef struct {char q; int time; char julg[12];} sPONT;


int main()
{
    int casos, cont, acertos, tempo, cont2;
    sPONT Pontua[300];

    while(1)
    {
        scanf("%d", &casos);
        if(casos == 0)
            break;
        acertos = 0;
        tempo = 0;
        for(cont = 0; cont < casos;cont++)
        {
            scanf(" %c %d %s", &Pontua[cont].q, &Pontua[cont].time, Pontua[cont].julg);
        }
        for(cont = 0; cont < casos; cont++)
        {
            if(strcmp(Pontua[cont].julg, "correct")== 0)
            {
                acertos++;
                tempo = Pontua[cont].time + tempo;
                cont2 = cont - 1;
                for(cont2 = 0;cont2 < casos;cont2++)
                {
                    if(cont2 == cont)
                    {
                        continue;
                    }

                    if(Pontua[cont].q == Pontua[cont2].q && (strcmp(Pontua[cont2].julg, "incorrect")==0))
                        tempo = tempo + 20;
                }
            }
        }
        printf("%d %d\n", acertos, tempo);


    }


    return 0;
}
