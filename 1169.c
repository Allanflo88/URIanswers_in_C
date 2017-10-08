# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int main()
{
    unsigned long long int casas,casos;

    scanf("%llu", &casos);
    while(casos > 0){
        scanf("%llu", &casas);
        printf("%llu kg\n", (unsigned long long int)(pow(2,casas)/12000));
        casos--;
    }


    return 0;
}
