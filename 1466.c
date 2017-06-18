# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

struct reg {struct reg *esq; int val; struct reg *dir;};
typedef struct reg Tree;

void InsereArvore(Tree *, int);
Tree * AchaPai(Tree *, int);
void ImprimeArvore(Tree *);

int main()
{
    int valor, casos, qtd;
    Tree *Arvore;

    scanf("%d", &casos);
    while(casos > 0)
    {
        Arvore = NULL;
        scanf("%d", &qtd);
        while(qtd > 0)
        {
            scanf("%d", &valor);
            InsereArvore(Arvore, valor);
            qtd--;
        }
        printf("Case %d:\n", casos);
        ImprimeArvore(Arvore);
        casos--;
    }


    return 0;
}

void InsereArvore(Tree *arvore, int valor)
{
    Tree *aux = (Tree *) malloc(sizeof(Tree)), *aux2;

    aux->val = valor;
    aux->dir = NULL;
    aux->esq = NULL;

    aux2 = AchaPai(arvore, valor);

    if(aux2 == NULL)
    {
        arvore = aux;
    }
    else
    {
        
        if(valor > aux2->val)
        {
            aux2->dir = aux;
        }

        else
        {
            aux2->esq = aux;
        }

    }

    

}

Tree * AchaPai(Tree *r, int val)
{
    if(r == NULL)
        return NULL;
    if(val > r->val)
    {
        if(r->dir == NULL)
            return r;
        else
            return AchaPai(r->dir, val);
    }
    else
    {
        if(r->esq == NULL)
            return r;
        else
            return AchaPai(r->esq, val);
    }



}
void  ImprimeArvore(Tree *r)
{
    printf("%d", r->val);
    if(r->esq != NULL)
        ImprimeArvore(r->esq);
    if(r->dir != NULL)
        ImprimeArvore(r->dir);


}
