#include<stdlib.h>
#include<stdio.h>

int main (){

int N = 0, i,*pont, par = 0, imp = 0;
printf("QUAL O TAMANHO DO VETOR: \n");
scanf("%d",&N);
pont = (int *) malloc(N*sizeof(int));
for (i = 0; i < N; i++){
    printf("DIGITE O VALOR NA POSICAO: [%d] ",i+1);
    scanf("%d",&pont[i]); }
printf("\n\n\n\tValores armazenados no vetor:\n\n");
for (i = 0; i < N; i++){
    printf("%d ",pont[i]);
    if (pont[i]%2 == 0){
        par++;
    }
    else {
        imp++;
    }
}
free(pont);
printf("\n\n A quantidade de numeros pares eh: %d", par);
printf("\n\n A quantidade de numeros impares eh: %d\n\n", imp);
return 0;
}
