#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dia, mes, ano;

   printf ("digite o dia do seu aniversario: ");
   scanf ("%d", &dia);

   printf ("digite o mes do seu aniversario: ");
   scanf ("%d", &mes);

   printf ("digite o ano do seu nascimento: ");
   scanf ("%d", &ano);

   printf("data de nascimento: %02d/%02d/%04d",dia,mes,ano);
    return 0;
}
