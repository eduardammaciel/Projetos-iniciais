#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dia, mes;

   printf ("digite o dia do seu aniversario: ");
   scanf("%d",&dia);

   printf ("digite o mes do seu aniversario: ");
   scanf( "%d",&mes);

   printf("aniversario: %02d/%02d",dia,mes);

    return 0;
}
