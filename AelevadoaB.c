#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, result=1, contador, potencia;
    //Vari�veis do tipo int
    printf("Digite um valor para A: \n");
    scanf("%d", &a);
    printf("Digite um valor para B: \n");
    scanf("%d", &b);
    //Vari�veis recebendo valores via entrada de dados pelo usu�rio
    for (contador=0; contador<b; contador++)
        //Vari�vel contador recebendo 0, para o contador menor que o valor armazenado na vari�vel b se repete o comando, contador
        //recebe mais um a cada rodada de repeti��o
    {
         result *= a;
         //Vari�vel result recebe a multiplica��o do seu valor pelo valor armazenado na vari�vel a enquanto o comando se repetir
    }
    printf("\n%d elevado ao expoente %d e igual a: %d\n", a, b, result);
    //Imprime a frase com as respectivas vari�veis
    return 0;
}
