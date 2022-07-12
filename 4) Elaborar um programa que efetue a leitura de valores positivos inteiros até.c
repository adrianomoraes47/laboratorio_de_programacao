#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Elaborar um programa que efetue a leitura de valores positivos inteiros até que um valor negativo seja informado. \nAo final devem ser apresentados o maior e o menor valores informados pelo usuário. \n\n");
float a,b,c,d;
d = 1;
a = b = c = 0;
while (a>=0){
    scanf("%f",&a);
    if (a<0){
        break;
    }
    else {
        if ( d == 1){
        b = a;
        c = a;
        d++;
    }
    else {
        if ( a < 0){
            break;
        }
        else {
            if ( a >= b ){
            b = a;
        }
        else{
            if ( a < c){
                c = a;
            }
        }
        }
    }
    }

}
printf("Maior Valor: %.3f",b);
printf("\nMenor Valor: %.3f",c);
return 0;
}


