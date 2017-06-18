# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int x, cont = 1;

    scanf("%d", &x);

    while(cont <= 6)
    {
        if(x % 2 > 0)
        {
            printf("%d\n", x);
            cont++;
        }
        x += 1;
    }


    return 0;
}
