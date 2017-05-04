# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

struct reg {char nome[35];int num;struct reg *prox, *ant;};
typedef struct reg CHILD;
typedef struct {CHILD *inicio, *fim; int qtd;} TDescr;

void Insere(TDescr *, CHILD);
CHILD Vencedor(TDescr *);
void Exclui(TDescr *, CHILD *);

int main()
{

    TDescr descritor;
    CHILD cri;
    int casos, cont;
    char winner[35];

    while(1)
    {
        descritor.inicio = NULL;
        descritor.fim = NULL;
        descritor.qtd = 0;
        scanf("%d", &casos);
        if(casos == 0)
            break;
        for(cont = 1;cont <= casos;cont++)
        {
            scanf("%s %d", &cri.nome, &cri.num);
            Insere(&descritor, cri);
        }
        cri = Vencedor(&descritor);
        strcpy(winner,cri.nome);
        printf("Vencedor(a): %s\n", winner);
    }

    return 0;
}
void Insere(TDescr *lista, CHILD crianca)
{
    CHILD *aux;

    aux = (CHILD *) malloc(sizeof(CHILD));
    strcpy(aux->nome, crianca.nome);
    aux->num = crianca.num;
    aux->prox = lista->inicio;
    aux->ant = lista->fim;


    if(lista->inicio == NULL)
        lista->inicio = aux;
    else
        lista->fim->prox = aux;
    lista->fim = aux;
    lista->inicio->ant = lista->fim;
    lista->qtd += 1;

}

CHILD Vencedor(TDescr *lista)
{
    CHILD *aux, *aux2;
    int cont, numero;

    aux = lista->inicio;
    numero = aux->num;
    while(lista->qtd > 1)
    {

        if(numero % 2 == 0)
        {
            aux2 = aux->prox;
            for(cont = 1;cont <= numero;cont++)
                aux2 = aux2->prox;

        }
        else
        {
            aux2 = aux->ant;
            for(cont = 1;cont <= numero;cont++)
                aux2 = aux2->ant;
        }
        aux = aux2->prox;
        numero = aux2->num;
        printf("%s %d", aux2->nome, numero);
        Exclui(lista, aux2);
    }

    return *aux;
}

void Exclui(TDescr *lista, CHILD *cri)
{
    CHILD *aux,*anterior;

    aux = cri;
    anterior = aux;
    aux = aux->prox;
    aux->ant = anterior->ant;
    aux = anterior->ant;
    aux->prox = anterior->prox;
    free(anterior);
    lista->qtd -= 1;

}
