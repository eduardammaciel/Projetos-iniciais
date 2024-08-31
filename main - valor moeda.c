#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere_moeda;
    float valor;

    printf("Digite um caractere representando uma moeda: ");
    scanf ("%c", &caractere_moeda);

    printf ("Digite  um número fracionário representando um valor: ");
    scanf("%f", &valor);

    printf("%c$ %.2f", caractere_moeda, valor);

    return 0;
}
