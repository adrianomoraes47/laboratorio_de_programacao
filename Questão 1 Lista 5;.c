#include <stdio.h>
#include <stdlib.h>
#define N 24

int main()
{
    int  i;
    char vetor[N], *pont;
    pont = vetor;
    printf("DIGITE:\n");
    gets(vetor);
    printf("\n\n");
    for (i = 0; (i < N)&&(vetor[i]!='\0'); i++){
    printf("%c",*(pont+i));}
    return 0;
}
