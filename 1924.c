# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    int cont;
    char vetor[103];

    scanf("%d", &cont);
    while(cont>=0)
    {
        fgets(vetor,100,stdin);
        cont = cont-1;
    }
    printf("Ciencia da Computacao\n")  ;

    return 0;
}
