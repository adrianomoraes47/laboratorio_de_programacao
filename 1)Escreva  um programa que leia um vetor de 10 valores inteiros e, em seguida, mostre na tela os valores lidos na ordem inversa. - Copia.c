#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, vetor[10];
    for (a = 0;a<10;a++)
    {
    printf("Digite um numero\n");
    scanf("%d", &vetor[a]);
    }
    printf("\t>>>ORDEM INVERSA<<<");
    for (b = 9; b >= 0; b--)
    {
        printf("\n");
        printf("\t>>> %d\n", vetor[b]);
    }
    return 0;
}
