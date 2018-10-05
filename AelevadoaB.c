#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, result=1, contador, potencia;
    //Variáveis do tipo int
    printf("Digite um valor para A: \n");
    scanf("%d", &a);
    printf("Digite um valor para B: \n");
    scanf("%d", &b);
    //Variáveis recebendo valores via entrada de dados pelo usuário
    for (contador=0; contador<b; contador++)
        //Variável contador recebendo 0, para o contador menor que o valor armazenado na variável b se repete o comando, contador
        //recebe mais um a cada rodada de repetição
    {
         result *= a;
         //Variável result recebe a multiplicação do seu valor pelo valor armazenado na variável a enquanto o comando se repetir
    }
    printf("\n%d elevado ao expoente %d e igual a: %d\n", a, b, result);
    //Imprime a frase com as respectivas variáveis
    return 0;
}
