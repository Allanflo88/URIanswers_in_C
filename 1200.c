# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

struct reg {struct reg *esq; char val; struct reg *dir;};
typedef struct reg Tree;

void InsereArvore(Tree **, char);
Tree * AchaPai(Tree *, char);
void ImprimeArvore(Tree *, int);
void ExcluiArvore(Tree *, Tree *);
int compara(int *, int);
int Pesquisa(Tree *, char);

int flag;
int cont;

int main()
{
    int x;
    Tree *Arvore;
    char letra, acao[8];

    Arvore = NULL;
    cont = 0;
    while(scanf("%s", acao) != EOF)
    {
        if(strcmp(acao, "I") == 0)
        {
          scanf(" %c", &letra);
          InsereArvore(&Arvore, letra);
        }
        else if(strcmp(acao, "P") == 0)
        {
            scanf(" %c", &letra);
            x = Pesquisa(Arvore, letra);
            if(x == 1)
              printf("%c existe\n", letra);
            else
              printf("%c nao existe\n", letra);
        }
        else if(strcmp(acao, "PREFIXA") == 0)
        {
          flag = 0;
          ImprimeArvore(Arvore, -1);
          printf("\n");
        }

        else if(strcmp(acao, "INFIXA") == 0)
        {
          flag = 0;
          ImprimeArvore(Arvore, 0);
          printf("\n");
        }

        else if(strcmp(acao, "POSFIXA") == 0)
        {
          flag = 0;
          ImprimeArvore(Arvore, 1);
          printf("\n");
        }



    }
    ExcluiArvore(Arvore, Arvore);

    return 0;
}

void InsereArvore(Tree **arvore, char valor)
{
    Tree *aux = (Tree *) malloc(sizeof(Tree)), *aux2;

    aux->val = valor;
    aux->dir = NULL;
    aux->esq = NULL;

    aux2 = AchaPai(*arvore, valor);
    cont += 1;
    if(aux2 == NULL)
    {
        *arvore = aux;
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

Tree * AchaPai(Tree *r, char val)
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
void  ImprimeArvore(Tree *r, int x)
{
    //Imprime de forma prefixa
    if(x == -1)
    {
      if(flag == 0)
      {
        flag += 1;
        printf("%c", r->val);
        ImprimeArvore(r->esq, x);
        ImprimeArvore(r->dir, x);
      }
      else if(r != NULL)
      {
          flag+= 1;
          printf(" ");
          printf("%c", r->val);
          ImprimeArvore(r->esq, x);
          ImprimeArvore(r->dir, x);
      }
    }
    //Imprime de forma posfixa
    else if(x == 1)
    {
      if(flag == 0)
      {
        flag+= 1;
        ImprimeArvore(r->esq, x);
        ImprimeArvore(r->dir, x);
        printf("%c", r->val);

      }
      else if(r != NULL)
      {
          flag+= 1;
          ImprimeArvore(r->esq, x);
          ImprimeArvore(r->dir, x);

          printf("%c", r->val);
          printf(" ");

      }
    }
    //Imprime de forma infixa
    else if(x == 0)
    {

      if(r != NULL)
      {

            ImprimeArvore(r->esq, x);
            if(flag == 0)
            {
              printf("%c", r->val);
              flag = 1;
            }

            else
            {
              printf(" %c", r->val);
            }
            ImprimeArvore(r->dir, x);

      }
    }


}

void ExcluiArvore(Tree *r, Tree *pai)
{

    Tree *aux = r;
    if(aux != NULL)
    {
        ExcluiArvore(aux->dir, r);
        ExcluiArvore(aux->esq, r);
    }
    else
    {
        pai->esq = pai->dir = NULL;
        free(aux);
    }
}

int compara(int *fila, int cont)
{
    if(fila[cont] == 0)
        return compara(fila, cont+ 1);
    else
        return cont;

}

int Pesquisa(Tree *r, char letra)
{

  if(r->val == letra)
    return 1;
  if(r == NULL)
      return 0;
  if(letra > r->val)
  {
      if(r->dir == NULL)
          return 0;
      else
          return Pesquisa(r->dir, letra);
  }
  else
  {
      if(r->esq == NULL)
          return 0;
      else
          return Pesquisa(r->esq, letra);
  }

}
