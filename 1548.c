# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

typedef struct {int nota;int flag;} ALUNO;

int main()
{
    int casos,alunos, cont, troca, x;
    ALUNO vetor[1000], aux;

    scanf("%d", &casos);
    while(casos > 0)
    {
        troca = 1;x = 0;
        scanf("%d", &alunos);
        for(cont = 0;cont < alunos;cont++)
        {
            scanf("%d", &vetor[cont].nota);
            vetor[cont].flag = cont;
        }
        while(troca == 1)
        {
            troca = 0;
            for(cont = 0;cont < (alunos-1);cont++)
            {
                if(vetor[cont].nota < vetor[cont+1].nota)
                {
                    aux = vetor[cont];
                    vetor[cont] = vetor[cont+1];
                    vetor[cont+1] = aux;
                    troca = 1;
                }
            }
        }
        for(cont = 0;cont < alunos;cont++)
        {
            if(cont == vetor[cont].flag)
                x++;
        }
        printf("%d\n", x);
        casos--;
    }

    return 0;
}
