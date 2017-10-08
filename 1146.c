# include <stdio.h>

int main()
{
    int c, n = 1;

    while(n > 0)
    {
        scanf("%d", &n);
        for(c = 1; c <= n;c++)
        {
            if(c == 1)
                printf("%d", c);
            else
                printf(" %d", c);
            if(c == n)
                printf("\n");
        }

    }

}
