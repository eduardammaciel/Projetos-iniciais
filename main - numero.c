#include <stdio.h>
#include <stdlib.h>

int main()
{
   float numero;
   printf("Digite um número fracionário:" );

   scanf("%f", &numero);
   printf("número inteiro %.0f\n", numero);
   printf("número fracionado %.3f\n", numero);
    return 0;
}
