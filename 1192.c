# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
# include <ctype.h>

int main()
{
    char vetor[5];
    int casos;

    scanf("%d", &casos);
    while(casos > 0){
        scanf("%s", vetor);
        if(vetor[0] == vetor[2])
            printf("%d\n", (vetor[0]-48) * (vetor[2]-48));
        else{
            if(isupper(vetor[1]) > 0 )
                printf("%d\n", (vetor[2]-48) - (vetor[0]-48));
            else
                printf("%d\n", (vetor[0]-48) + (vetor[2]-48));
        }

        casos--;
    }


    return 0;
}
