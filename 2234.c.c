# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    int h, p;
    float media;

    scanf("%d %d", &h, &p);

    media  = (float)h/(float)p;

    printf("%.2f\n", media);

    return 0;
}
