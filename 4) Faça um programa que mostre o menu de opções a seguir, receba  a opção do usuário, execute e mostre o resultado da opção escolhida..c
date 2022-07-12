#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
int a;
printf("\t>>>Digite a opcao desejada: \n \n");
printf("\t>>> 1 Multiplicar dois números\n");
printf("\t>>> 2 Somar dois números\n");
printf("\t>>> 3 Raiz quadrada de um número\n\n\t>>> ");

scanf("%d",&a);
if (a == 1){
    float b,c,d;
    printf("\n\n\t>>>DIGITE OS DOIS NUMEROS:\n\t>>> ");
    scanf("%f",&b);
    printf("\t>>> ");
    scanf("%f",&c);
    d = b*c;
    printf("\n\n\t>>> A MULTIPLICACAO DE %.5f E %.5f EH: %.3f\n",b,c , d);
}
else if (a == 2){
 float b,c,d;
    printf("\n\n\t>>>DIGITE OS DOIS NUMEROS:\n\t>>> ");
    scanf("%f",&b);
    printf("\t>>> ");
    scanf("%f",&c);
    d = b+c;
    printf("\n\n\t>>> A SOMA DE %.5f E %.5f EH: %.3f\n",b,c , d);
}
else if (a == 3){
    float c,d;
    printf("\n\n\t>>>DIGITE O NUMERO: \n\t>>> ");
    scanf("%f",&c);
    if (c<0){
        printf("\n\n\t>>> NUMERO INVALIDO\n\n");
    }
    else {
    d = sqrt(c);
    printf("\n\n\t>>> A Raiz DE %f EH: %.5f\n\n",c, d);}
}

  return 0;


}
