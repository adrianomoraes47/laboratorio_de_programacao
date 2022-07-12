#include <stdio.h>
#include <stdlib.h>
int main(void) {

int idade;
float peso;
printf("Qual a idade ?\n");
scanf("%d",&idade);
printf("Qual o peso ?\n");
scanf("%f",&peso);
if ((idade < 0)||(peso <=0)){
printf("\n\n\n\t>>>DADOS INVALIDOS<<<\n\n\n\t");}
else if ((idade < 20)&&(peso <= 60)){
printf("\n\n\n\t>>>Grupo de Risco 9<<<\n\n\n\t"); }
else if ((idade < 20)&&(60 <= peso)&&(peso<=90)) {
printf("\n\n\n\t>>>Grupo de Risco 8<<<\n\n\n\t"); }
else if ((idade < 20)&&(peso>90)){
printf("\n\n\n\t>>>Grupo de Risco 7<<<\n\n\n\t"); }
else if ((idade >= 20)&&(idade<=50)&&(peso <= 60)){
printf("\n\n\n\t>>>Grupo de Risco 6<<<\n\n\n\t");}
else if ((idade >= 20)&&(idade<=50)&&(60 <= peso)&&(peso<=90)){
printf("\n\n\n\t>>>Grupo de Risco 5<<<\n\n\n\t");}
else if ((idade >= 20)&&(idade<=50)&&(peso > 90)){
printf("\n\n\n\t>>>Grupo de Risco 4<<<\n\n\n\t");}
else if ((idade > 50)&&(peso <= 60)){
printf("\n\n\n\t>>>Grupo de Risco 3<<<\n\n\n\t");}
else if ((idade > 50)&&(60 <= peso)&&(peso<=90)){
printf("\n\n\n\t>>>Grupo de Risco 2<<<\n\n\n\t");}
else if ((idade > 50)&&(peso > 90)){
printf("\n\n\n\t>>>Grupo de Risco 1<<<\n\n\n\t");}


  return 0;

}
