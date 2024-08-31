#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");

   float altura = 1.62;
   float peso = 56;

   float imc;

    imc = peso/(altura*altura);
    printf("%f",imc);


    return 0;
}
