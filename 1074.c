# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int ParImpar(int num)
{
    if(num%2 == 0)
        return 1;
    else
        return 0;
}

int NegPos(int num)
{
    char string[10];

    if(num > 0)
        return 1;
    else
        return 0;
}

int main()
{
    int cont, casos, num;

    scanf("%d", &casos);
    for(cont = 1;cont <= casos;cont++)
    {
        scanf("%d", &num);
        if(num == 0)
            printf("NULL\n");
        else
        {
            if(ParImpar(num) == 1 && NegPos(num) == 1)
                printf("EVEN POSITIVE\n");
            else if (ParImpar(num) == 0 && NegPos(num) == 1)
                printf("ODD POSITIVE\n");
            else if (ParImpar(num) == 0 && NegPos(num) == 0)
                printf("ODD NEGATIVE\n");
            else if (ParImpar(num) == 1 && NegPos(num) == 0)
                printf("EVEN NEGATIVE\n");
        }
    }
    return 0;
}
