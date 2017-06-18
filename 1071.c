# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int x, y, soma = 0, aux;

    scanf("%d", &x);
    scanf("%d", &y);
    if(x < 0)
        x = abs(x);
    if(y < 0)
        y = abs(y);
    if(y < x)
    {
        aux = x;
        x = y;
        y = aux;
    }
    while(x < y)
    {
        if(x % 2 != 0)
        {
            soma = soma + x;
        }

        x++;

    }
    printf("%d\n", soma);


    return 0;
}
