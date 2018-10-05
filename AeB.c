#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, result;
    //3 variáveis do tipo int
    printf("\nDigite dois numeros inteiros para variaveis A e B: \n");
    scanf("%d",&valorA);
    scanf("%d",&valorB);
    //Variáveis valorA e valorB recebendo valor via entrada de dados pelo usuário

    if (valorA==valorB)
        //Se valorA receber o mesmo valor que valorB executa o comando
    {
        result=valorA+valorB;
        //variável result recebe valorA mais valorB
        printf("\nOs dois numeros digitados sao iguais, logo somam-se os dois e o resultado e: %d\n",result);
        //Imprime a frase e a variável result
    }
    else if (valorA!=valorB)
        //Se valorA nao receber o mesmo valor que valorB executa o comando
    {
            result=valorA*valorB;
            //Vaiável result recebe valorA multiplicado pleo o valorB
            printf("\nOs dois numeros digitados sao diferentes, logo multiplicam-se os dois e o resultado e: %d\n",result);
            //Imprime a frase e a variável result
    }
    return 0;
}
