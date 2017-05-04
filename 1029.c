# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int fibo(int x, int *cont)
{

    if(x == 0)
    {
        *cont = *cont + 1;
        return 0;
    }

    else
    {
        if(x == 1)
        {
            *cont = *cont + 1;
            return 1;
        }

        else
        {
            *cont = *cont + 1;
            return (fibo(x-1, cont) + fibo(x-2, cont));
        }

    }

}
int main()
{
    int *contador;
    int cont, n, casos;
    scanf("%d", &casos);
    for(cont = 1; cont <= casos;cont++)
    {
        contador = -1;
        scanf("%d", &n);
        printf("fib(%d) = %d calls = %d\n", n,contador, fibo(n, &contador));
    }


    return 0;
}
