# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

typedef struct {int num, den;} RAC;
typedef struct {RAC a; char op; RAC b;} OPERA;

int MDC(int m, int n)
{
    if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return MDC(n, m % n);
}

RAC SIMPLIFICA (RAC n)
{
    RAC result;
    int div;
    div = MDC(n.num, n.den);

    result.num = n.num / div;
	result.den = n.den / div;

    return result;
}

int SOMA (RAC n1, RAC n2)
{
    RAC result, simp;

    result.num = (n1.num * n2.den + n2.num * n1.den);
    result.den = (n1.den * n2.den);
    simp = SIMPLIFICA(result);
    printf("%d/%d = %d/%d\n", result.num, result.den, simp.num, simp.den);

}
int SUBTRAI (RAC n1, RAC n2)
{
    RAC result, simp;

    result.num = (n1.num * n2.den - n2.num * n1.den);
    result.den = (n1.den * n2.den);
    simp = SIMPLIFICA(result);
    printf("%d/%d = %d/%d\n", result.num, result.den, simp.num, simp.den);

}
int MULTIPLICA (RAC n1, RAC n2)
{
    RAC result, simp;

    result.num = (n1.num * n2.num);
    result.den = (n1.den * n2.den);
    simp = SIMPLIFICA(result);
    printf("%d/%d = %d/%d\n", result.num, result.den, simp.num, simp.den);

}
int DIVIDE (RAC n1, RAC n2)
{
    RAC result, simp;

    result.num = (n1.num * n2.den);
    result.den = (n1.den * n2.num);
    simp = SIMPLIFICA(result);
    printf("%d/%d = %d/%d\n", result.num, result.den, simp.num, simp.den);
}

int main()
{
    OPERA operacao;
    int cont, casos;

    scanf("%d", &casos);

    for(cont = 1;cont <= casos;cont++)
    {
        scanf("%d / %d %c %d / %d", &operacao.a.num, &operacao.a.den,
                                &operacao.op, &operacao.b.num, &operacao.b.den);

        if(operacao.op == '+')
            SOMA(operacao.a, operacao.b);
        if(operacao.op == '-')
            SUBTRAI(operacao.a, operacao.b);
        if(operacao.op == '*')
            MULTIPLICA(operacao.a, operacao.b);
        if(operacao.op == '/')
            DIVIDE(operacao.a, operacao.b);
    }



    return 0;
}
