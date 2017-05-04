# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

# define TRUE 1
# define FALSE 0

typedef struct {char nome[15], res[5];} Friends;

int Busca(char *,Friends *, int);
void BolhaEscolha(Friends *, int);
void BolhaAlfa(Friends *, int);
void Vencedor(Friends *, int , char *);

int main()
{
    Friends ler, amigos[10000];
    int cont = 0, cont2;
    char win[15];

    while(1)
    {
        scanf("%s", &ler.nome);
        if(strcmp(ler.nome, "FIM")==0)
            break;
        scanf("%s", &ler.res);
        if(Busca(ler.nome, amigos, cont)== FALSE)
        {
            amigos[cont] = ler;
            cont++;
        }
    }
    BolhaEscolha(amigos, cont);
    Vencedor(amigos,cont , win);
    BolhaAlfa(amigos, cont);
    for(cont2 = 0;cont2 < cont;cont2++)
        printf("%s\n", amigos[cont2].nome);
    printf("\nAmigo do Habay:\n%s\n", win);


    return 0;
}

int Busca(char nome[15], Friends *amigos, int elem)
{
    int cont;

    for(cont = 0;cont < elem;cont++)
    {
        if(strcmp(nome, amigos[cont].nome)==0)
            return TRUE;
    }
    return FALSE;
}
void BolhaEscolha(Friends *amigos, int elem)
{
    int cont, alt =1;
    Friends aux;

    while(alt != 0)
    {
        alt = 0;
        for(cont = 0;cont < elem-1;cont++)
        {
            if(strcmp(amigos[cont].res,amigos[cont+1].res) <0)
            {
                aux= amigos[cont+1];
                amigos[cont+1] = amigos[cont];
                amigos[cont] = aux;
                alt = 1;
            }

        }
    }

}
void BolhaAlfa(Friends *amigos, int elem)
{
    int cont, alt =1;
    Friends aux;

    while(alt != 0)
    {
        alt = 0;
        for(cont = 0;cont < elem-1;cont++)
        {
            if(strcmp(amigos[cont+1].nome,amigos[cont].nome) < 0 && strcmp(amigos[cont+1].res,amigos[cont].res)==0)
            {
                aux= amigos[cont];
                amigos[cont] = amigos[cont+1];
                amigos[cont+1] = aux;
                alt = 1;
            }

        }
    }


}

void Vencedor(Friends *amigos,int elems, char Vence[15])
{
    Friends maior;
    int cont = 0, aux;

    while(cont <= elems)
    {
        if(strcmp(amigos[cont].res, "YES")== 0)
        {
            maior = amigos[cont];
            break;
        }
        cont++;
    }
    while(strcmp(amigos[cont].res, "YES")==0)
    {
        if(strlen(maior.nome) < strlen(amigos[cont].nome))
        {
            maior = amigos[cont];
            aux = cont;
        }
        if(strlen(maior.nome) == strlen(amigos[cont].nome))
        {
            if(cont < aux)
            {
                maior = amigos[cont];
                aux = cont;
            }

        }
        cont++;
    }
    strcpy(Vence, maior.nome);

}

