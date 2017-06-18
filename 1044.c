# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int a, b, aux;

    scanf("%d %d", &a, &b);
    if(b > a)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if((a % b) == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}
