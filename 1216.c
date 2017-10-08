# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main()
{
    int dist, cont = 0;
    double media = 0;
    char nome[45];

    while(fgets(nome,40,stdin))
    {
        scanf("%d", &dist);
        media += dist;
        cont++;

    }
    printf("%.1f\n", media/cont);

    return 0;
}
