# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
  int Ncasas, cont, cdd = 0, x , y, vetor[200], pessoas, consumo, mediaf;
  float media;

  while(1)
  {
    mediaf = 0;
    pessoas = consumo = 0;
    cdd++;
    scanf("%d", &Ncasas);
    if(Ncasas == 0)
      break;
    memset(vetor, 0,sizeof(int)*200);
    for(cont = 0;cont < Ncasas;cont++)
    {
      scanf("%d %d", &x, &y);
      vetor[y/x] += x;
      pessoas += x;consumo += y;
    }
    if(cdd > 1)
      printf("\n");
    printf("Cidade# %d:\n", cdd);
    for(cont = 0; cont <200;cont++)
    {
        if(vetor[cont] > 0)
        {
          if(mediaf == 0)
            printf("%d-%d", vetor[cont], cont);
          else
            printf(" %d-%d", vetor[cont], cont);
          mediaf++;
        }

    }
    media = (float)consumo/pessoas;
    mediaf = (media * 100);
    printf("\n%lf", media);
    printf("\nConsumo medio: %d.%02d m3.\n", (int) media, (int)mediaf%100);



  }
  printf("\n");

  return 0;
}
