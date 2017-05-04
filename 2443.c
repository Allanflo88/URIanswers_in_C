# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

typedef struct {int num, den} fracao;

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}

fracao simplifica(fracao a)
{
    int div;
    div = mdc(a.num, a.den);
    a.num = a.num/ div;
    a.den = a.den/ div;

    return a;
}

int main()
{
    fracao a, b, c;

    scanf("%d %d %d %d", &a.num, &a.den, &b.num, &b.den);

    c.num = a.num * b.den + b.num * a.den;
	c.den = a.den * b.den;

    c = simplifica(c);
    printf("%d %d\n", c.num, c.den);

    return 0;
}
