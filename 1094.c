# include <stdio.h>
# include <string.h>

typedef struct {int qtd;char tipo[10];}COBAIA;

int main()
{
    int casos;
    COBAIA input, rato, sapo, coelho;

    strcpy(rato.tipo,"ratos"); strcpy(sapo.tipo,"sapos"); strcpy(coelho.tipo,"coelhos");
    rato.qtd = 0; sapo.qtd = 0; coelho.qtd = 0;
    scanf("%d", &casos);
    while(casos >= 1)
    {
        scanf("%d %s", &input.qtd, input.tipo);
        getchar();
        if(input.tipo[0] == 'R')
            rato.qtd += input.qtd;
        else if(input.tipo[0] == 'S')
            sapo.qtd += input.qtd;
        else if(input.tipo[0] == 'C')
            coelho.qtd += input.qtd;
        casos--;
    }
    printf("Total: %d cobaias", rato.qtd + sapo.qtd + coelho.qtd);
    printf("\nTotal de %s: %d", coelho.tipo, coelho.qtd);
    printf("\nTotal de %s: %d", rato.tipo, rato.qtd);
    printf("\nTotal de %s: %d", sapo.tipo, sapo.qtd);
    printf("\nPercentual de %s: %.2lf %%", coelho.tipo, (double)(coelho.qtd * 100.00) / (rato.qtd + sapo.qtd + coelho.qtd));
    printf("\nPercentual de %s: %.2lf %%", rato.tipo, (double)(rato.qtd * 100.00) / (rato.qtd + sapo.qtd + coelho.qtd));
    printf("\nPercentual de %s: %.2lf %%\n", sapo.tipo, (double)(sapo.qtd * 100.00) / (rato.qtd + sapo.qtd + coelho.qtd));

}
