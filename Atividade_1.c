#include <stdio.h>
#include <stdlib.h>


int main(){

//1) Faça um programa que receba o ano de nascimento de uma pessoa, calcule e mostre quantos anos essa pessoa terá em 2018.
/*
int ano,idade;
printf("DIGITE O ANO DE NASCIMENTO:\n>>> ");
scanf("%i",&ano);
if ((ano > 2018)||(ano == 0)||(ano < 0)){
    printf("ANO INVALIDO !!!");
    }
else{
    idade = 2018 - ano;
    printf("A IDADE REQUERIDA EH: \n>>> %i ANOS",idade);

}
*/
//2) Faça um programa que receba a quantidade de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o
//valor a ser recebido sabendo que a hora trabalhada vale um quinto do salário mínimo.

/*float horas, salario,valor;
printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS: \n>>> ");
scanf("%f",&horas);
printf("\n");
printf("DIGITE O VALOR DO SALARIO MINIMO: \n>>> ");
scanf("%f",&salario);
printf("\n");
printf("A HORA TRABALHADA VALE UM QUINTO DO SALARIO MINIMO\n");
valor = (salario/5)*horas;
printf("\n");
printf("\n");
printf("O VALOR A SER RECEBIDO EH: \n>>> %f\n",valor);
*/

//3) Faça um programa que receba uma temperatura em Celsius, converta e mostre essa temperatura em Fahrenheit.
/*printf("INFORME O VALOR DA TEMPERATURA EM GRAUS CELSIUS: \n>>> ");
float cel,fah;
scanf("%f",&cel);
fah = 1.8*cel+32;
printf("A TEMPERATURA EM FAHRENHEIT EH:\n>>> %f",fah);
*/

//4) Sabe-se que para iluminar os cômodos de maneira correta, para cada m^2, deve-se usar 18W de potência.
//Faça um programa que receba as duas dimensões de um cômodo(em metros),
//calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
printf("INFORME AS DUAS DIMENSOES DO COMODO (EM METROS):\n>>> ");
float d1,d2, area, lam;
scanf("%f",&d1);
printf("\n>>> ");
scanf("%f",&d2);
area = d1*d2;
printf("\n");
printf("A AREA DO COMODO EH: %f METROS QUADRADOS",area);
printf("\n");
lam = 18 * area;
printf("\n");
printf("A POTENCIA DE ILUMINACAO EH IGUAL: %f Watts",lam);
printf("\n");
return 0;
}
