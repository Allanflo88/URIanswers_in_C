# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

struct SVaretas {int ci; int vi};

int main()
{
    int casos=1, cont;
    struct SVaretas varetas[1000];

    while(casos > 0)
    {
        scanf("%d", &casos);
        for(cont = 0;cont < casos;cont++)
            scanf("%d %d", &varetas[cont].ci, &varetas[cont].vi);

    }


    return 0;
}
