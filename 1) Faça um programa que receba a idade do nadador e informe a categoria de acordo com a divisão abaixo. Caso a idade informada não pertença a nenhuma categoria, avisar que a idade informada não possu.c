#include "stdio.h"
int main(void) {

int i;
printf("Qual a idade do nadador ?\n");
scanf("%d",&i);
if ((5<=i)&&(i<=7)){
    printf("Categoria Infantil");}
    else if ((8<=i)&&(i<=10)){
      printf("Categoria Juvenil");}
      else if ((11<=i)&&(i<=17)){
        printf("Categoria Adolescente");}
        else if ((18<=i)&&(i<=29)){
          printf("Categoria Adulto");}
          else if (i>=30){
            printf("Categoria Sênior");}
            else {
              printf("Idade informada não possui categoria.");
          }

/*
Infantil 5	a	7	anos
Juvenil 8	a	10	anos
Adolescente 11	a	17	anos
Adulto 18	a	29	anos
Sênior Acima	de	30	anos
*/

  return 0;


}
