# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int calcula(float **v,int cont, float div)
{
    if(*v - div >= 0)
    {
        cont++;
        return calcula(*v-div,cont+1,div);
    }
    else
        return cont;


}

int main()
{
    float valor;
    int cont = 0;

    scanf("%f", &valor);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", calcula(&valor, 0, 100.00));

    printf("%d nota(s) de R$ 50.00\n", calcula(&valor, 0, 50.00));

    printf("%d nota(s) de R$ 20.00\n", calcula(&valor, 0, 20.00));

    printf("%d nota(s) de R$ 10.00\n", calcula(&valor, 0, 10.00));

    printf("%d nota(s) de R$ 5.00\n", calcula(&valor, 0, 5.00));

    printf("%d nota(s) de R$ 2.00\n", calcula(&valor, 0, 2.00));

    printf("MOEDAS:\n");
    printf("%d nota(s) de R$ 1.00\n", calcula(&valor, 0, 1.00));

    printf("%d nota(s) de R$ 0.50\n", calcula(&valor, 0, 0.50));

    printf("%d nota(s) de R$ 0.25\n", calcula(&valor, 0, 0.25));

    printf("%d nota(s) de R$ 0.10\n", calcula(&valor, 0, 0.10));

    printf("%d nota(s) de R$ 0.05\n", calcula(&valor, 0, 0.05));
    printf("%d nota(s) de R$ 0.01\n", calcula(&valor, 0, 0.01));

    return 0;
}
