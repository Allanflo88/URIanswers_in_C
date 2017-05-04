# include <stdio.h>
# include <string.h>
# include <math.h>
# include <string.h>

typedef struct {char nome[60]; char tam;char cor[20];} Tshirt;

int main()
{
    Tshirt camisas[60], aux;
    int casos, cont, cont2, alt;

    while(scanf("%d", &casos) != 0)
    {
        if(casos == 0)
            break;
        for(cont = 0;cont < casos;cont++)
        {
            getchar();
            fgets(camisas[cont].nome, 50, stdin);
            scanf("%s %c", camisas[cont].cor, &camisas[cont].tam);

        }
        alt=1;
        while(alt == 1)
        {
            alt =0;
            for(cont =1;cont < casos;cont++)
            {

                if(strcmp(camisas[cont].cor, "branco")==0 && strcmp(camisas[cont-1].cor,"vermelho")== 0)
                {
                    aux = camisas[cont-1];
                    camisas[cont-1]=camisas[cont];
                    camisas[cont]=aux;
                    alt =1;
                }
                if(strcmp(camisas[cont].cor,"branco")==0 && strcmp(camisas[cont-1].cor,"branco")==0)
                {
                    if(camisas[cont].tam == 'P' && camisas[cont-1].tam < 'P')
                    {
                        aux = camisas[cont-1];
                        camisas[cont-1]=camisas[cont];
                        camisas[cont]=aux;
                        alt =1;
                    }
                    if(camisas[cont].tam == camisas[cont-1].tam)
                    {
                        if(strcmp(camisas[cont].nome,camisas[cont-1].nome)<0)
                        {
                           aux = camisas[cont-1];
                            camisas[cont-1]=camisas[cont];
                            camisas[cont]=aux;
                            alt =1;
                        }
                    }
                    if(camisas[cont].tam == 'M' && camisas[cont-1].tam == 'G')
                    {
                        aux = camisas[cont-1];
                        camisas[cont-1]=camisas[cont];
                        camisas[cont]=aux;
                        alt =1;
                    }
                }
                if(strcmp(camisas[cont].cor,"vermelho")==0 && strcmp(camisas[cont-1].cor,"vermelho")==0)
                {
                    if(camisas[cont].tam == camisas[cont-1].tam)
                    {
                        if(strcmp(camisas[cont].nome,camisas[cont-1].nome)<0)
                        {
                           aux = camisas[cont-1];
                            camisas[cont-1]=camisas[cont];
                            camisas[cont]=aux;
                            alt =1;
                        }
                    }
                    if(camisas[cont].tam == 'P' && camisas[cont-1].tam < 'P')
                    {
                        aux = camisas[cont-1];
                        camisas[cont-1]=camisas[cont];
                        camisas[cont]=aux;
                        alt =1;
                    }
                    if(camisas[cont].tam == 'M' && camisas[cont-1].tam == 'G')
                    {
                        aux = camisas[cont-1];
                        camisas[cont-1]=camisas[cont];
                        camisas[cont]=aux;
                        alt =1;
                    }
                }
            }
        }

        for(cont = 0;cont < casos;cont++)
        {
            printf("%s %c %s",camisas[cont].cor, camisas[cont].tam, camisas[cont].nome);
        }
        printf("\n");
    }
    return 0;
}
