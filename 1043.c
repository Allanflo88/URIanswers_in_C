# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
int verifica(double a, double b,double c)
{
    if( (abs(b - c) < a && a < b + c)&&(abs(a - c) < b && b < a + c)&& (abs(a - b) < c && c < a + b))
        return 1;
    else
        return 0;

}

int main()
{
    double a, b, c, x;

    scanf("%lf %lf %lf", &a, &b, &c);
    if(verifica(a,b,c) == 0)
    {
        x = ((a+b)/2) *c;
        printf("Area = %.1f\n", x);
    }

    else
    {
        x = a + b + c;
        printf("Perimetro = %.1f\n", x);
    }


    return 0;
}
