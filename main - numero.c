#include <stdio.h>
#include <stdlib.h>

int main()
{
   float numero;
   printf("Digite um n�mero fracion�rio:" );

   scanf("%f", &numero);
   printf("n�mero inteiro %.0f\n", numero);
   printf("n�mero fracionado %.3f\n", numero);
    return 0;
}
