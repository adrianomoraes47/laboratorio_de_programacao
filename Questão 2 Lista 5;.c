#include<stdlib.h>
#include<stdio.h>

int main (){

int N = 0, i,*pont;
printf("QUAL O TAMANHO DO VETOR: \n");
scanf("%d",&N);
pont = (int *) malloc(N*sizeof(int));
for (i = 0; i < N; i++){
    printf("DIGITE O VALOR NA POSICAO: [%d] ",i+1);
    scanf("%d",&pont[i]); }
for (i = (N-1); i >= 0; i--){
    printf("\n%d ",pont[i]);
}
free(pont);
return 0;
}
