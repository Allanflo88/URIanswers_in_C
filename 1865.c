#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char string[100];
    int x, y, cont = 1;

    scanf ("%d", &x);

    while (cont <= x)
    {
        scanf ("%s", string);
        scanf ("%d", &y);

        if (strcmp (string, "Thor") == 0)
        {
            printf ("Y\n");
        }
        else
            printf ("N\n");
        cont = cont + 1;
    }
}
