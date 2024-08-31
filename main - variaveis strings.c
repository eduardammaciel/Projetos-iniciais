#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [50]; //[declara quantidade de caracteres]
    char nome2 [50];

    printf("digite seu nome:");
    fgets (nome, sizeof(nome), stdin);

    printf("Ola, %s! Bem-vindo ao programa.\n", nome);

    printf("digite outro nome:");
    scanf("%s", nome2);


    printf("Ola, %s! Bem-vindo ao programa.\n", nome2);
    return 0;
}
