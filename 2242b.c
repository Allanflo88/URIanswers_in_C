# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    char riso[60], v1[60],v[60];
    int cont, cont1, tam, compara;

    scanf("%s", riso);
    for(cont = 0, cont1 =0; cont < strlen(riso);cont++)
    {
        if(riso[cont] == 'a'||riso[cont] == 'e'||riso[cont] == 'i'||riso[cont] == 'o'||riso[cont] == 'u')
        {
            v[cont1] = riso[cont];
            cont1 = cont1 + 1;
        }
        else
            continue;

    }
    v[cont1] = '\0';
    tam = strlen(v);
    if(tam == 1)
        compara = 0;
    else if(tam == 0)
        compara = 1;
    else
    {
        for(cont = 0, cont1 = tam-1;cont < tam;cont++, cont1--)
            v1[cont] = v[cont1];

        v1[tam] = '\0';
        compara = strcmp(v,v1);
    }
    if(compara == 0)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
