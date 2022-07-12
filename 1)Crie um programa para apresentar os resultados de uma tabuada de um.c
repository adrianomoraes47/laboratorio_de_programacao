#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("DIGITE O NUMERO QUE VOCE DESEJA VER A TABUADA:\n");
    int a = 1;
    float b;
    float valor;
    scanf("%f",&b);
    for (a;a<=10;a++){
        valor = b*a;
        printf("\n%f x %d = %.3f",b,a,valor);
    }
}
