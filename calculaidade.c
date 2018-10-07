#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual, anoNascimento, idade;
    //Vari�veis do tipo int
    printf("\nDigite o ano atual: ");
    scanf("%d",&anoAtual);
    //Inicializa��o da vari�vel anoAtual por entrada de dados via usu�rio recebendo o ano atual
    printf("Digite o ano de nascimento: ");
    scanf("%d",&anoNascimento);
    //Inicializa��o da vari�vel anoNascimento por entrada de dados via usu�rio recebendo o ano de nascimento
    idade=anoAtual-anoNascimento;
    //Vari�vel idade recebe o valor da vari�vel anoAtual menos o valor da vari�vel anoNascimento, indicando a idade da pessoa
    printf("\nA idade dessa pessoa e: %d anos.\n",idade);
    //Imprime a frase com o valor da vari�vel idade
    if (idade>=0 && idade<=3)
        //Se a idade for maior ou igual a 3 e menor ou igual a 3, essa pessoa � um beb�
    {
        printf("\nEssa pessoa e um bebe.\n");
    }
    else{
        //Sen�o se a idade for maior ou igual a 4 e menor ou igual a 10, essa pessoa � uma crian�a
        if (idade>=4 && idade<=10)
            printf("\nEssa pessoa e uma crianca.\n");
        else{
            //Sen�o se a idade for maior ou igual a 11 e menor ou igual a 18, essa pessoa � um adolescente
            if (idade>=11 && idade<=18)
                printf("\nEssa pessoa e um adolescente.\n");
            else{
                //Sen�o se a idade for maior ou igual a 19 e menor ou igual a 50, essa pessoa � uma adulta
                if(idade>=19 && idade<=50)
                    printf("\nEssa pessoa e uma adulta.\n");
                else{
                    //Sen�o se a idade for maior ou igual a 51, a pessoa � uma idosa
                    if (idade>=51)
                        printf("\nEssa pessoa e uma idosa.\n");
                }
            }
        }
    }
    return 0;
}
