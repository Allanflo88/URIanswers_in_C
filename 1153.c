# include <stdio.h>

int main()
{
    int c, n, t = 1;
    scanf("%d", &n);
    for(c = 0;c < n;c++)
    {
        t *= n - c;
    }
    printf("%d\n", t);
}
