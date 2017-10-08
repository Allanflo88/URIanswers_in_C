# include <stdio.h>

int main()
{
    int c1, c2 = 0, t;

    scanf("%d", &t);
    for(c1 = 1; c1 <= t * 4;c1++)
    {
        if(c1 % 4 == 0)
            printf("PUM\n");
        else
            printf("%d ", c1);
    }
}
