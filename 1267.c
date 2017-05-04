# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int main()
{
    int aluno, jantar, cont, cont2;
    int aux[100], alum;

    while(scanf("%d %d", &aluno, &jantar) != EOF && aluno > 0 && jantar > 0)
    {
        memset(aux,0,sizeof(aux));
        for(cont = 1;cont <= jantar;cont++)
        {
            for(cont2 = 0;cont2 < aluno;cont2++)
            {
                scanf("%d", &alum);
                aux[cont2] += alum;

            }

        }
        for(cont = 0;cont < aluno;cont++)
        {
            if(aux[cont] == jantar)
                break;

        }
        if(aux[cont] == jantar)
            printf("yes\n");
        else
            printf("no\n");
    }

        return 0;
}
