#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Digite tres valores: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c){
        printf("\n%d e o maior.\n",a);
    }
    else{
        if (b>a && b>c)
            printf("\n%d e o maior.\n",b);
        else{
            if (c>a && c>b)
                printf("\n%d e o maior.\n",c);
        }
    }
    return 0;
}
