#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual, anoNascimento, idade;
    //Variáveis do tipo int
    printf("\nDigite o ano atual: ");
    scanf("%d",&anoAtual);
    //Inicialização da variável anoAtual por entrada de dados via usuário recebendo o ano atual
    printf("Digite o ano de nascimento: ");
    scanf("%d",&anoNascimento);
    //Inicialização da variável anoNascimento por entrada de dados via usuário recebendo o ano de nascimento
    idade=anoAtual-anoNascimento;
    //Variável idade recebe o valor da variável anoAtual menos o valor da variável anoNascimento, indicando a idade da pessoa
    printf("\nA idade dessa pessoa e: %d anos.\n",idade);
    //Imprime a frase com o valor da variável idade
    if (idade>=0 && idade<=3)
        //Se a idade for maior ou igual a 3 e menor ou igual a 3, essa pessoa é um bebê
    {
        printf("\nEssa pessoa e um bebe.\n");
    }
    else{
        //Senão se a idade for maior ou igual a 4 e menor ou igual a 10, essa pessoa é uma criança
        if (idade>=4 && idade<=10)
            printf("\nEssa pessoa e uma crianca.\n");
        else{
            //Senão se a idade for maior ou igual a 11 e menor ou igual a 18, essa pessoa é um adolescente
            if (idade>=11 && idade<=18)
                printf("\nEssa pessoa e um adolescente.\n");
            else{
                //Senão se a idade for maior ou igual a 19 e menor ou igual a 50, essa pessoa é uma adulta
                if(idade>=19 && idade<=50)
                    printf("\nEssa pessoa e uma adulta.\n");
                else{
                    //Senão se a idade for maior ou igual a 51, a pessoa é uma idosa
                    if (idade>=51)
                        printf("\nEssa pessoa e uma idosa.\n");
                }
            }
        }
    }
    return 0;
}
