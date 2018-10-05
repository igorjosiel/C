#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, valorC, result;
    printf("\nDigite dois numeros inteiros para variaveis A e B: \n");
    scanf("%d",&valorA);
    scanf("%d",&valorB);
    if (valorA==valorB)
    {
        result=valorA+valorB;
        printf("\nOs dois numeros digitados sao iguais, logo somam-se os dois e o resultado e: %d\n",result);
    }
    else
    {
        if (valorA!=valorB)
            result=valorA*valorB;
            printf("\nOs dois numeros digitados sao diferentes, logo multiplicam-se os dois e o resultado e: %d\n",result);
    }
    return 0;
}
