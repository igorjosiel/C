#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    float nota1, nota2, nota3, media;
    printf("\nDigite o nome de um aluno: \n");
    scanf(" %s",&nome[50]);
    printf("\nDigite as tres notas desse aluno: \n");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    media=(nota1+nota2+nota3)/3;
    printf("\nSua media e %0.1f\n",media);
    if (media>=8)
    {
        printf("\nSeu conceito e A.\n");
    }
    else{
        if (media>=5 && media<8)
            printf("\nSeu conceito e B.\n");
        else{
            if (media<5)
                printf("\nSeu conceito e C.\n");
        }
    }
    return 0;
}
