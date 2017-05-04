# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    double n1, n2, n3, n4, media, exame;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    n1 = n1 * 2.0;n2 = n2 *3.0;n3 = n3 * 4.0;
    media = (n1+n2+n3+n4)/10.0;
    printf("Media: %.1lf\n", media);
    if(media >= 7.0)
        printf("Aluno aprovado.\n");
    else if(media >=5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame)/2.0;
        if(media >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", media);
    }
    else
        printf("Aluno reprovado.\n");


    return 0;
}
