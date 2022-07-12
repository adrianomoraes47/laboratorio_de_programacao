#include "stdio.h"
int main(void) {
int a;
float b,d;
printf("Qual o seu tipo de investimento ?\n\n\t>>>Tipo-1_Poupanca\n\n\t>>Tipo-2_Renda fixa\n\n\t>>>Tipo-3_Renda variavel\n\n ");
printf("\tDIGITE 1, 2 OU 3\n>>> ");
scanf("%d",&a);
while ((a!= 1)&&(a!= 2)&&(a!= 3)){
    printf("\t>>>TIPO DE INVESTIMENTO INVALIDO !!!\n\n");
    printf("\t>>>DIGITE O TIPO NOVAMENTE !!!\n>>> ");
    scanf("%d",&a);
}
printf("\tQual o valor do investimento ?\n>>> R$ ");
scanf("%f",&b);
if (a == 1){
    d = (b/100);
    printf("\nO investimento vai render: R$ %.3f ao mes\n\n\n",d);
}
else if (a == 2){
    d = ((2*b)/100);
    printf("\nO investimento vai render: R$ %.3f ao mes\n\n\n",d);
}
else if (a == 3){
    d = ((3*b)/100);
    printf("\nO investimento vai render: R$ %.3f ao mes\n\n\n",d);
}
  return 0;
}
