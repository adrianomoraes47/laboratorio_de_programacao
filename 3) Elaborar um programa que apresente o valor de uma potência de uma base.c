#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a;
printf("\t>>>Informações<<<\n\n");
printf("O NUMERO DA BASE ESTA ENTRE PARENTESE ?\n\n");
printf("Digite: 1 OU 2\n");
printf("\t>>> 1 - SIM\n");
printf("\t>>> 2 - NAO\n");
printf("\t>>> ");
scanf("%d",&a);
if (( a == 2)){
    float num,poti,i,resul=1,j,d;
    int pot;
    printf("Qual o valor da base: ");
    scanf("%f",&num);
    printf("Informe a potencia: ");
    scanf("%d",&pot);
    if ((num<0)&&(pot>0)){
        for(i=0; i<pot; i++)
    {
        resul *= num;
        j = fabs(resul);
    }
    printf("\n%f elevado a %d = -%f\n",num,pot,j);
    }
    else if ((num<0)&&(pot<0)){
        for(i=0; i>pot; i--)
    {
        resul *= num;
        j = fabs(1/resul);
    }
    printf("\n%f elevado a %d = -%.10f\n",num,pot,j);
    }
    else if ((num>0)&&(pot>0)){
        for(i=0; i<pot; i++)
    {
        resul *= num;
    }
    printf("\n%f elevado a %d = %f\n",num,pot,resul);
    }
    else if ((num>0)&&(pot<0)){
        for(i=0; i>pot; i--)
    {
        resul *= num;
        j = (1/resul);
    }
    printf("\n%f elevado a %d = %.10f\n",num,pot,j);
    }
    else if ((num<0)&&(pot==0)){
        resul = 1;
         printf("\n%f elevado a %d = -%.1f\n",num,pot,resul);
    }
    else if ((num>0)&&(pot==0)){
        resul = 1;
         printf("\n%f elevado a %d = %.1f\n",num,pot,resul);
    }
}
else if ((a == 1)){
    float num,poti,i,resul=1,j,d;
    int pot;
    printf("Qual o valor da base: ");
    scanf("%f",&num);
    printf("Informe a potencia: ");
    scanf("%d",&pot);
    if ((num<0)&&(pot>0)){
        for(i=0; i<pot; i++)
    {
        resul *= num;
    }
    printf("\n%f elevado a %d = %f\n",num,pot,resul);
    }
    else if((num<0)&&(pot<0)){
        for(i=0; i>pot; i--)
    {
        resul *= num;
        d = 1/resul;
    }
    printf("\n%f elevado a %d = %.10f\n",num,pot,d);
    }
    else if((num>0)&&(pot<0)){
        for(i=0; i>pot; i--)
    {
        resul *= num;
        d = 1/resul;
    }
    printf("\n%f elevado a %d = %.10f\n",num,pot,d);
    }
    else if((num>0)&&(pot>0)){
        for(i=0; i<pot; i++)
    {
        resul *= num;
    }
    printf("\n%f elevado a %d = %f\n",num,pot,resul);
    }
    else if ((num<0)&&(pot==0)){
        resul = 1;
         printf("\n%f elevado a %d = %.1f\n",num,pot,resul);
    }
     else if ((num>0)&&(pot==0)){
        resul = 1;
         printf("\n%f elevado a %d = %.1f\n",num,pot,resul);
    }
}
  	return 0;
}



