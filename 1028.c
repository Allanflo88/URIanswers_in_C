# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int mdc(int; int;);

int main()
{
    int cont, casos, f1, f2;

    scanf("%d", &casos);

    for(cont = 1;cont <= casos;cont++)
    {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1,f2));
    }


    return 0;
}

int mdc(int m, int n)
{
    if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}
