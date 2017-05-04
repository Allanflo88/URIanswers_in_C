# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

typedef struct {char id; double dur;} NOTE;

int main()
{
    NOTE nota;
    char parti[210], aux[210];
    int cont, cont2,cont3,tam, auxilia;

    while(scanf("%s", parti))
    {
        if(strcmp(parti,"*") != 0)
            break;
        tam = sizeof(parti);
        while(tam > 0)
        {
            cont3 = 0;
            for(cont = 0;cont < tam;cont++)
                if(parti[cont] == '/')
                    break;
            for(cont2 = cont;cont2 < tam;cont2++)
                if(parti[cont] == '/')
                    break;

            tam-=cont2;
        }

    }
    return 0;
}
