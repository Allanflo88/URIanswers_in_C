# include <stdio.h>

int main()
{
    int n, cont;
    scanf("%d", &n);
    for(cont = 2; cont < 10000;cont++)
        if(cont%n == 2)
            printf("%d\n", cont);

    return 0;
}
